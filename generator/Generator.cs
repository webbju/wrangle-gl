////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Xml;
using System.Xml.Linq;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace wrangle_gl_generator
{

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public class Generator : XmlDocument
  {

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    protected readonly string m_filename;

    protected readonly string [] m_api;

    protected readonly Dictionary <string, float> m_apiBaseSpecVersion = new Dictionary<string,float> ();

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public class CommandPrototype
    {
      public bool ExternC { get; set; }

      public string EntryPrefix { get; set; }

      public string EntryPostfix { get; set; }

      public string DelegatePrefix { get; set; }

      public string DelegatePostfix { get; set; }

      public string ReturnType { get; set; }

      public string FunctionName { get; set; }

      private List<Tuple<string, string>> _parameters = new List<Tuple<string, string>>();
      public List<Tuple<string, string>> Parameters
      {
        get => _parameters;
        set => _parameters = value;
      }

      public string FullPrototype
      {
        get
        {
          StringBuilder prototypeBuilder = new StringBuilder();

          var prototypeElements = new string[]
          {
            //ExternC ? "GLEW_EXTERN_C" : "",
            EntryPrefix,
            ReturnType,
            EntryPostfix,
            FunctionName
          };

          prototypeBuilder.Append(string.Join(" ", prototypeElements.Where(s => !string.IsNullOrWhiteSpace(s))));

          prototypeBuilder.Append($" ({PrototypeParameters})");

          return prototypeBuilder.ToString();
        }
      }

      public string PrototypeParameters
      {
        get
        {
          StringBuilder prototypeBuilder = new StringBuilder();

          for (int i = 0; i < Parameters.Count; ++i)
          {
            prototypeBuilder.Append(Parameters[i].Item1 + " " + Parameters[i].Item2);

            if (i < (Parameters.Count - 1))
            {
              prototypeBuilder.Append(", ");
            }
          }

          return prototypeBuilder.ToString();
        }
      }

      public string CallParameters
      {
        get
        {
          StringBuilder prototypeBuilder = new StringBuilder();

          for (int i = 0; i < Parameters.Count; ++i)
          {
            string param = Parameters[i].Item2;

            int arrayOffset = param.IndexOf('[');

            if (arrayOffset != -1)
            {
              // Strip array length syntax.
              param = param.Substring(0, arrayOffset);
            }

            prototypeBuilder.Append(param);

            if (i < (Parameters.Count - 1))
            {
              prototypeBuilder.Append(", ");
            }
          }

          return prototypeBuilder.ToString();
        }
      }

      public string DelegateType
      {
        get => string.Format ("PFN{0}PROC", FunctionName.ToUpperInvariant ());
      }

      public string DelegatePrototype
      {
        get
        {
          StringBuilder prototypeBuilder = new StringBuilder();

          var prototypeElements = new string[] {
            "typedef",
            DelegatePrefix,
            ReturnType,
            "(" + string.Join(" ", new string[] { DelegatePostfix, DelegateType } ) + ")",
            $"/* {FunctionName} */"
          };

          prototypeBuilder.Append(string.Join(" ", prototypeElements.Where(s => !string.IsNullOrWhiteSpace(s))));

          return prototypeBuilder.ToString();
        }
      }
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public class FeatureSpec
    {
      public string Name { get; set; }
      public XmlNode RootNode { get; set; }
      public string Api { get; set; }
      public string Platform { get; set; }
      public bool IsBaseSpec { get; set; }
      public Dictionary<string, XmlNode> RequiredCommands { get; set; }
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    protected Dictionary<string, FeatureSpec> _features;
    protected Dictionary<string, FeatureSpec> Features
    {
      get
      {
        //
        // Generate fast-lookup of <feature> nodes.
        //

        if (_features == null)
        {
          _features = new Dictionary<string, FeatureSpec>();

          var featureNodes = SelectNodes("//registry/feature");

          foreach (XmlNode featureNode in featureNodes)
          {
            //
            // Evaluate whether this <feature> is part of the 'base spec'.
            //

            string api = featureNode.Attributes.GetNamedItem("api")?.Value ?? featureNode.Attributes.GetNamedItem("supported")?.Value;

            string platform = featureNode.Attributes.GetNamedItem("platform")?.Value;

            bool baseSpecFeatureSet = false;

            if (m_apiBaseSpecVersion.TryGetValue(api, out float baseSpecVersion))
            {
              if (float.TryParse(featureNode.Attributes.GetNamedItem("number")?.Value, out float version))
              {
                baseSpecFeatureSet = version <= baseSpecVersion;
              }
            }

            //
            // Multiple <require> tags can be nested in a feature/extension definition.
            // (It's possible for these to also be api specific.)
            //

            Dictionary<string, XmlNode> requiredCommands = new Dictionary<string, XmlNode>();

            XmlNodeList requireNodes = featureNode.SelectNodes ("require");

            foreach (XmlNode requireNode in requireNodes)
            {
              XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

              foreach (XmlNode commandNode in requireCommandNodes)
              {
                string command = commandNode.Attributes.GetNamedItem("name").Value;

                if (requiredCommands.ContainsKey(command))
                {
                  continue; // Skip duplicate entries.
                }

                requiredCommands.Add (command, commandNode);
              }
            }

            string featureName = featureNode.Attributes.GetNamedItem("name").Value;

            var featureSpec = new FeatureSpec
            {
              Name = featureName,
              RootNode = featureNode,
              Api = api,
              Platform = platform,
              IsBaseSpec = baseSpecFeatureSet,
              RequiredCommands = requiredCommands,
            };

            _features.Add(featureName, featureSpec);
          }
        }

        return _features;
      }
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    protected Dictionary<string, FeatureSpec> _extensions;
    protected Dictionary<string, FeatureSpec> Extensions
    {
      get
      {
        //
        // Generate fast-lookup of <extensions> nodes.
        //

        if (_extensions == null)
        {
          _extensions = new Dictionary<string, FeatureSpec>();

          foreach (XmlNode extensionNode in SelectNodes("//registry/extensions/extension"))
          {
            //
            // Multiple <require> tags can be nested in a feature/extension definition.
            // (It's possible for these to also be api specific.)
            //

            Dictionary<string, XmlNode> requiredCommands = new Dictionary<string, XmlNode>();

            foreach (XmlNode requireNode in extensionNode.SelectNodes("require"))
            {
              string requireApi = requireNode.Attributes.GetNamedItem("api")?.Value;

              if (requireApi != null && !IsApiSupported(requireApi))
              {
                continue;
              }

              foreach (XmlNode commandNode in requireNode.SelectNodes("command"))
              {
                string command = commandNode.Attributes.GetNamedItem("name").Value;

                if (requiredCommands.ContainsKey(command))
                {
                  continue; // Skip duplicate entries.
                }

                requiredCommands.TryAdd(command, commandNode);
              }
            }

            string extensionName = extensionNode.Attributes.GetNamedItem("name").Value;

            var extensionSpec = new FeatureSpec()
            {
              Name  = extensionName,
              RootNode = extensionNode,
              Api = extensionNode.Attributes.GetNamedItem("api")?.Value ?? extensionNode.Attributes.GetNamedItem("supported")?.Value,
              Platform = extensionNode.Attributes.GetNamedItem("platform")?.Value,
              IsBaseSpec = false, // it's an extension
              RequiredCommands = requiredCommands,
            };

            _extensions.Add(extensionName, extensionSpec);
          }
        }

        return _extensions;
      }
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    protected Dictionary<string, FeatureSpec> _supportedFeaturesAndExtensions;
    protected Dictionary<string, FeatureSpec> SupportedFeaturesAndExtensions
    {
      get
      {
        if (_supportedFeaturesAndExtensions == null)
        {
          _supportedFeaturesAndExtensions = new Dictionary<string, FeatureSpec>();

          foreach (var feature in Features.Where(x => IsApiSupported(x.Value.Api)))
          {
            _supportedFeaturesAndExtensions.Add(feature.Key, feature.Value);
          }

          foreach (var extension in Extensions.Where(x => !_supportedFeaturesAndExtensions.ContainsKey(x.Key) && IsApiSupported(x.Value.Api)))
          {
            _supportedFeaturesAndExtensions.Add(extension.Key, extension.Value);
          }
        }

        return _supportedFeaturesAndExtensions;
      }
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    protected Dictionary<string, XmlNode> _platforms;
    protected Dictionary<string, XmlNode> Platforms
    {
      get
      {
        if (_platforms == null)
        {
          _platforms = new Dictionary<string, XmlNode>();

          foreach (XmlNode platformNode in SelectNodes("//registry/platforms/platform"))
          {
            _platforms.Add(platformNode.Attributes.GetNamedItem("name").Value, platformNode);
          }
        }

        return _platforms;
      }
    }


    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    protected Dictionary<string, XmlNode> _commands;
    protected Dictionary<string, XmlNode> Commands
    {
      get
      {
        //
        // Generate fast-lookup of <commands> nodes.
        //

        if (_commands == null)
        {
          _commands = new Dictionary<string, XmlNode>();

          foreach (XmlNode commandsNode in SelectNodes("//registry/commands"))
          {
            foreach (XmlNode commandNode in commandsNode.SelectNodes("command"))
            {
              string commandName = commandNode.Attributes["name"]?.Value;

              if (commandName == null)
              {
                XmlNode commandProtoNameNode = commandNode.SelectSingleNode("proto/name");

                commandName = commandProtoNameNode?.InnerText;
              }

              if (commandName == null)
              {
                throw new Exception("Unable to identify command name.");
              }

              _commands.Add(commandName, commandNode);
            }
          }
        }

        return _commands;
      }
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    protected Dictionary<string, List<XmlNode>> _aliases;
    protected Dictionary<string, List<XmlNode>> Aliases
    {
      get
      {
        //
        // Generate a fast lookup of command aliases.
        // Organised with <alias> value as the key, and a collection of XmlNodes as value.
        // i.e. dict[glDrawArraysInstanced] = {glDrawArraysInstancedANGLE, ...}
        //

        if (_aliases == null)
        {
          _aliases = new Dictionary<string, List<XmlNode>>();

          foreach (var command in Commands)
          {
            //
            // Process aliases defined via <command alias="xxx" />
            //

            XmlNode commandNode = command.Value;

            string aliasCommandName = commandNode.Attributes["alias"]?.Value;

            if (aliasCommandName != null)
            {
              if (!_aliases.TryGetValue(aliasCommandName, out List<XmlNode> aliases))
              {
                aliases = new List<XmlNode>();
              }

              aliases.Add(commandNode);

              _aliases[aliasCommandName] = aliases;
            }

            //
            // Process aliases defined as discrete <alias name="xxx" /> tags.
            //

            XmlNodeList commandAliasNode = commandNode.SelectNodes("alias");

            if ((commandAliasNode != null) && (commandAliasNode.Count > 0))
            {
              foreach (XmlNode aliasNode in commandAliasNode)
              {
                aliasCommandName = aliasNode.Attributes["name"].Value;

                if (!_aliases.TryGetValue(aliasCommandName, out List<XmlNode> aliases))
                {
                  aliases = new List<XmlNode>();
                }

                aliases.Add(commandNode);

                _aliases[aliasCommandName] = aliases;
              }
            }
          }
        }

        return _aliases;
      }
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    protected Dictionary<string, XmlNode> _enums;
    protected Dictionary<string, XmlNode> Enums
    {
      get
      {
        //
        // Generate fast-lookup of <enums> nodes.
        //

        if (_enums == null)
        {
          var enumNodes = SelectNodes("//registry/enums/enum");

          foreach (XmlNode enumNode in enumNodes)
          {
            string enumNodeName = enumNode.Attributes["name"].Value;

            if (!_enums.ContainsKey(enumNodeName))
            {
              _enums.Add(enumNodeName, enumNode);
            }
          }
        }

        return _enums;
      }
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    protected string m_funcApiEntryPrefix = "";

    protected string m_funcApiEntryPostfix = "";

    protected string m_funcPointerApiEntryPrefix = "";

    protected string m_funcPointerApiEntryPostfix = "*";

    protected string m_funcGetProcAddress = "glewGetProcAddress";

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public Generator (string filename, string [] [] apiSpec)
      : base ()
    {
      m_filename = filename;

      m_api = new string [apiSpec.Length];

      for (int i = 0; i < apiSpec.Length; ++i)
      {
        m_api [i] = apiSpec [i] [0];

        float.TryParse(apiSpec[i][1], out float baseApiVersion);

        m_apiBaseSpecVersion.Add (m_api [i], baseApiVersion);
      }

      Load (filename);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public void Export (string outputDir)
    {
      if (!Directory.Exists(outputDir))
      {
        Directory.CreateDirectory(outputDir);
      }

      using (var writer = new StreamWriter(Path.Combine(outputDir, $"wrangle-{m_api[0]}.h"), false))
      {
        ExportHpp(writer);

        writer.Close();
      }

      using (var writer = new StreamWriter(Path.Combine(outputDir, $"wrangle-{m_api[0]}.cpp"), false))
      {
        ExportCpp(writer);

        writer.Close();
      }
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public class FunctionSpec
    {
      public CommandPrototype CommandPrototype { get; set; }
      public FeatureSpec Feature { get; set; }
      public string PreprocessorGuard { get; set; }
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public Dictionary<string, FunctionSpec> _exportedFunctions;
    public Dictionary<string, FunctionSpec> ExportedFunctions
    {
      get
      {
        if (_exportedFunctions == null)
        {
          StringBuilder commandPrototypeBuilder = new StringBuilder();

          _exportedFunctions = new Dictionary<string, FunctionSpec>();

          foreach (var feature in SupportedFeaturesAndExtensions)
          {
            foreach (var command in feature.Value.RequiredCommands.Keys)
            {
              if (_exportedFunctions.ContainsKey (command))
              {
                continue; // Skip any duplicate commands.
              }

              CommandPrototype commandPrototype = GetCommandPrototype (command);

              Platforms.TryGetValue(feature.Value.Platform ?? string.Empty, out XmlNode platformNode);

              var function = new FunctionSpec
              {
                CommandPrototype = commandPrototype,
                Feature = feature.Value,
                PreprocessorGuard = platformNode?.Attributes["protect"]?.Value
              };

              _exportedFunctions.Add(command, function);
            }
          }
        }

        return _exportedFunctions;
      }
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public virtual void ExportHpp (StreamWriter writer)
    {
      WriteCommentDivider(writer);

      writer.Write("\n#pragma once\n");

      writer.Write(@"
#if defined(__GNUC__)
#if ((__GNUC__ * 10000) + (__GNUC_MINOR__ * 100) + __GNUC_PATCHLEVEL__) >= 40600
#pragma GCC diagnostic push // push/pop not available before GCC 4.6
#endif
#pragma GCC diagnostic ignored ""-Wunused-function""
#endif

");

      WriteCommentDivider(writer);

      foreach (string api in m_api)
      {
        writer.Write("\n#define GLEW_USE_{0} 1\n", api.ToUpperInvariant());
      }

      ExportHppIncludes(writer);

      //
      // GLEW_xxx_FeatureSet
      //

      WriteCommentDivider(writer);

      writer.Write (string.Format ("\nenum GLEW_{0}_FeatureSet\n{{\n", m_api [0].ToUpperInvariant ()));

      foreach (var feature in SupportedFeaturesAndExtensions)
      {
        writer.Write(string.Format("  {0}{1},\n", "GLEW_", feature.Key));
      }

      writer.Write (string.Format ("  {0}{1}_{2}\n", "GLEW_", m_api [0].ToUpperInvariant (), "FeatureSetCount"));

      writer.Write ("};\n\n");

      WriteCommentDivider (writer);

      //
      // GLEW_xxx_ProcDelegates
      //

#if true
      writer.Write ($"\nenum GLEW_{m_api[0].ToUpperInvariant()}_ProcDelegate\n{{\n");

      foreach (var group in ExportedFunctions.Where(f => !f.Value.Feature.IsBaseSpec).GroupBy(f => f.Value.PreprocessorGuard))
      {
        if (!string.IsNullOrEmpty(group.Key))
        {
          writer.Write($"#if defined({group.Key})\n");
        }

        foreach (var function in group)
        {
          writer.Write($"  GLEW_{m_api[0].ToUpperInvariant()}_{function.Key},\n");
        }

        if (!string.IsNullOrEmpty(group.Key))
        {
          writer.Write("#endif\n");
        }
      }

      writer.Write ($"  GLEW_{m_api[0].ToUpperInvariant()}_ProcDelegateCount\n");

      writer.Write ("};\n\n");

      WriteCommentDivider (writer);
#endif

      //
      // Generate base-spec functions.
      //

      writer.Write("\n");

      foreach (var function in ExportedFunctions.Where(f => f.Value.Feature.IsBaseSpec))
      {
        writer.Write($"{function.Value.CommandPrototype.FullPrototype};\n");
      }

      writer.Write ("\n");

      WriteCommentDivider(writer);

      //
      // Generate function pointer/delegates.
      //

      foreach (var group in ExportedFunctions.Where(f => !f.Value.Feature.IsBaseSpec).GroupBy(f => f.Value.PreprocessorGuard))
      {
        writer.Write("\n");

        if (!string.IsNullOrEmpty(group.Key))
        {
          writer.Write($"#if defined({group.Key})\n");
        }

        foreach (var function in group)
        {
          var commandPrototype = function.Value.CommandPrototype;

          writer.Write($"{commandPrototype.DelegatePrototype} ({commandPrototype.PrototypeParameters});\n");
        }

        if (!string.IsNullOrEmpty(group.Key))
        {
          writer.Write("#endif\n");
        }
      }

      writer.Write("\n");

      WriteCommentDivider(writer);

      writer.Write("\n");

      writer.Write ($"namespace glew {{\n");

      writer.Write ($"  namespace {m_api[0]} {{\n\n");

      writer.Write ($"    class Context {{\n");

      writer.Write ($"    public:\n");

      ExportHppPublicApi(writer);

      writer.Write("\n");

      writer.Write ($"      Context(std::unordered_set<std::string> &supportedExtensions, void* (*{m_api[0]}GetProcAddressFunc)(const char*)) {{");

      // 
      // Generate tracking of feature support/availability.
      // 

      foreach (var group in SupportedFeaturesAndExtensions.Where(f => !f.Value.IsBaseSpec).GroupBy(f => f.Value.Platform))
      {
        writer.Write("\n");

        Platforms.TryGetValue(group.Key ?? string.Empty, out XmlNode platformNode);

        string platformGuardDefine = platformNode?.Attributes["protect"].Value;

        if (!string.IsNullOrEmpty(platformGuardDefine))
        {
          writer.Write($"    #if defined({platformGuardDefine})\n");
        }

        foreach (var feature in group)
        {
          writer.Write($"        m_featureSupported[GLEW_{feature.Key}] = (supportedExtensions.find(\"{feature.Key}\") != supportedExtensions.end());\n");
        }

        if (!string.IsNullOrEmpty(platformGuardDefine))
        {
          writer.Write("    #endif\n");
        }
      }

      // 
      // Generate function address lookups based on feature support/availability.
      // 

      foreach (var group in SupportedFeaturesAndExtensions.Where(f => !f.Value.IsBaseSpec && (f.Value.RequiredCommands.Count > 0)).GroupBy(f => f.Value.Platform))
      {
        writer.Write("\n");

        Platforms.TryGetValue(group.Key ?? string.Empty, out XmlNode platformNode);

        string platformGuardDefine = platformNode?.Attributes["protect"].Value;

        if (!string.IsNullOrEmpty(platformGuardDefine))
        {
          writer.Write($"      #if defined({platformGuardDefine})");
        }

        foreach (var feature in group)
        {
          writer.Write("\n");

          writer.Write($"        // {feature.Key}\n");

          writer.Write($"        if (m_featureSupported[GLEW_{feature.Key}]) {{\n");

          //writer.Write($"        if (supportedExtensions.find(\"{feature.Key}\") != supportedExtensions.end()) {{\n");

          //writer.Write($"          m_featureSupported[GLEW_{feature.Key}] = true;\n");

          foreach (var command in feature.Value.RequiredCommands.Keys)
          {
            var function = ExportedFunctions[command];

            writer.Write($"          m_{function.CommandPrototype.FunctionName} = ({function.CommandPrototype.DelegateType}) {m_api[0]}GetProcAddressFunc(\"{function.CommandPrototype.FunctionName}\");\n");
          }

          writer.Write("        }\n");
        }

        if (!string.IsNullOrEmpty(platformGuardDefine))
        {
          writer.Write("      #endif\n");
        }
      }

      writer.Write (string.Format ("      }}\n\n"));

      writer.Write (string.Format ("      bool IsSupported(GLEW_{0}_FeatureSet feature) const {{\n        return m_featureSupported[feature];\n      }}\n\n", m_api [0].ToUpperInvariant ()));

      writer.Write (string.Format ("      void SetSupported(GLEW_{0}_FeatureSet feature, bool supported) {{\n        m_featureSupported[feature] = supported;\n      }}\n\n", m_api [0].ToUpperInvariant ()));

      writer.Write (string.Format ("      bool m_featureSupported[{0}{1}_{2}];\n", "GLEW_", m_api [0].ToUpperInvariant (), "FeatureSetCount"));

      foreach (var group in ExportedFunctions.Where(f => !f.Value.Feature.IsBaseSpec).GroupBy(f => f.Value.PreprocessorGuard))
      {
        writer.Write("\n");

        if (!string.IsNullOrEmpty(group.Key))
        {
          writer.Write($"    #if defined({group.Key})\n");
        }

        foreach (var function in group)
        {
          var command = function.Value.CommandPrototype;

          writer.Write($"      {command.DelegateType} m_{command.FunctionName};\n");
        }

        if (!string.IsNullOrEmpty(group.Key))
        {
          writer.Write("    #endif\n");
        }
      }

      writer.Write ("    };\n\n");

      writer.Write($"    static Context* s_{m_api[0]}Context = nullptr;\n\n");

      writer.Write ($"  }}  // namespace {m_api [0]}\n");

      writer.Write ($"}}  // namespace glew\n\n");

      WriteCommentDivider (writer);

      // 
      // Generate GLEW API functions.
      // 

      foreach (var group in ExportedFunctions.Where(f => !f.Value.Feature.IsBaseSpec).GroupBy(f => f.Value.PreprocessorGuard))
      {
        writer.Write("\n");

        if (!string.IsNullOrEmpty(group.Key))
        {
          writer.Write($"#if defined({group.Key})\n");
        }

        foreach (var function in group)
        {
          var command = function.Value.CommandPrototype;

          writer.Write($"GLEW_API {command.ReturnType} GLEW_APIENTRY _glew_{m_api[0]}_{command.FunctionName} ({command.PrototypeParameters});\n");
        }

        if (!string.IsNullOrEmpty(group.Key))
        {
          writer.Write("#endif\n");
        }
      }

      writer.Write ("\n");

      WriteCommentDivider(writer);

      // 
      // Generate preprocessor #define passthroughs to GLEW API functions.
      // 

      foreach (var group in ExportedFunctions.Where(f => !f.Value.Feature.IsBaseSpec).GroupBy(f => f.Value.PreprocessorGuard))
      {
        writer.Write("\n");

        if (!string.IsNullOrEmpty(group.Key))
        {
          writer.Write($"#if defined({group.Key})\n");
        }

        foreach (var function in group)
        {
          var command = function.Value.CommandPrototype;

          writer.Write($"#define {command.FunctionName} _glew_{m_api[0]}_{command.FunctionName}\n");
        }

        if (!string.IsNullOrEmpty(group.Key))
        {
          writer.Write("#endif\n");
        }
      }

      writer.Write("\n");

      WriteCommentDivider (writer);

      writer.Write(@"
#if defined(__GNUC__)
#if ((__GNUC__ * 10000) + (__GNUC_MINOR__ * 100) + __GNUC_PATCHLEVEL__) >= 40600
#pragma GCC diagnostic pop // push/pop not available before GCC 4.6
#endif
#endif

");

      WriteCommentDivider(writer);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public virtual void ExportHppIncludes(StreamWriter writer)
    {
      writer.Write("\n#include <wrangle.h>\n");

      writer.Write("\n#include <cstring>\n");

      writer.Write("\n#include <string>\n");

      writer.Write("\n#include <unordered_set>\n");
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public virtual void ExportHppPublicApi(StreamWriter writer)
    {
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public virtual void ExportCpp (StreamWriter writer)
    {
      WriteCommentDivider(writer);

      writer.Write ($"\n#include <wrangle-{m_api[0]}.h>\n\n");

      WriteCommentDivider (writer);

      //
      // Feature and extension function bodies.
      //

      HashSet<string> duplicateCommands = new HashSet<string>();

      foreach (var feature in SupportedFeaturesAndExtensions.Where(f => !f.Value.IsBaseSpec))
      {
        foreach (var command in feature.Value.RequiredCommands.Keys)
        {
          if (duplicateCommands.Contains(command))
          {
            continue;
          }

          duplicateCommands.Add(command);

          CommandPrototype commandPrototype = GetCommandPrototype(command);

          writer.Write("\n");

          if (!string.IsNullOrEmpty(feature.Value.Platform))
          {
            string platformGuardDefine = Platforms[feature.Value.Platform].Attributes["protect"].Value;

            writer.Write($"#if defined({platformGuardDefine})\n");
          }

          writer.Write(string.Format("{0} _glew_{1}_{2}({3}) {{\n", commandPrototype.ReturnType, m_api[0], commandPrototype.FunctionName, commandPrototype.PrototypeParameters));

          writer.Write(string.Format("  bool prototypeCalled = false;\n"));

          writer.Write($"  const glew::{m_api[0]}::Context *{m_api[0]}Context = glew::{m_api[0]}::s_{m_api[0]}Context;\n");

          bool voidFunction = (commandPrototype.ReturnType.Equals("void", StringComparison.InvariantCultureIgnoreCase) && !commandPrototype.ReturnType.Contains("*"));

          if (!voidFunction)
          {
            writer.Write(string.Format("  {0} result = (({0})0);\n", commandPrototype.ReturnType));
          }

          //writer.Write($"#if defined(GLEW_{m_api[0].ToUpperInvariant()}_PRE_ERROR_CHECK)\n  GLEW_{m_api[0].ToUpperInvariant()}_PRE_ERROR_CHECK(\"{commandPrototype.FunctionName}\");\n#endif\n");

          writer.Write(string.Format("  if (!prototypeCalled && {0}Context->m_{1}) {{\n", m_api[0], commandPrototype.FunctionName));

          writer.Write(string.Format("    prototypeCalled = true;\n"));

          writer.Write(string.Format("    {0}", (voidFunction ? "" : "result = ")));

          writer.Write(string.Format("{0}Context->m_{1}({2});\n  }}\n", m_api[0], commandPrototype.FunctionName, commandPrototype.CallParameters));

          if (Aliases.TryGetValue(command, out List<XmlNode> aliasCommandNodes) && (aliasCommandNodes.Count > 0))
          {
            foreach (XmlNode aliasCommandNode in aliasCommandNodes)
            {
              string aliasCommand = aliasCommandNode.Attributes["name"]?.Value;

              if (aliasCommand == null)
              {
                XmlNode commandProtoNameNode = aliasCommandNode.SelectSingleNode("proto/name");

                aliasCommand = commandProtoNameNode.InnerText;
              }

              if (SupportedFeaturesAndExtensions.Where(x => x.Value.RequiredCommands.ContainsKey(aliasCommand)).Count() == 0)
              {
                continue; // Command isn't defined as required by a supported feature/extension.
              }

              CommandPrototype aliasPrototype = GetCommandPrototype(aliasCommand);

              writer.Write($"  if (!prototypeCalled && {m_api[0]}Context->m_{aliasCommand}) {{\n");

              writer.Write($"    prototypeCalled = true;\n");

              writer.Write(string.Format("    {0}", (voidFunction ? "" : "result = ")));

              if (!aliasPrototype.ReturnType.Equals(commandPrototype.ReturnType))
              {
                writer.Write($"({commandPrototype.ReturnType}) "); // cast to original return type.
              }

              // 
              // Alias prototypes are sometimes slightly different.
              // We need to correct any type inconsistencies.
              // 

              StringBuilder paramBuilder = new StringBuilder();

              for (int i = 0; i < aliasPrototype.Parameters.Count; ++i)
              {
                var defaultParam = commandPrototype.Parameters[i];

                var aliasParam = aliasPrototype.Parameters[i];

                // Check if we should cast to alias variable type.
                if (!defaultParam.Item1.Equals(aliasParam.Item1))
                {
                  paramBuilder.Append($"({aliasParam.Item1}) "); 
                }

                // Always use prototype defined variable name.
                string paramName = defaultParam.Item2;

                int arrayOffset = paramName.IndexOf('[');

                if (arrayOffset != -1)
                {
                  paramName = paramName.Substring(0, arrayOffset); // Strip array length syntax.
                }

                paramBuilder.Append(paramName);

                if (i < (aliasPrototype.Parameters.Count - 1))
                {
                  paramBuilder.Append(", ");
                }
              }

              writer.Write(string.Format("{0}Context->m_{1}({2});\n  }}\n", m_api[0], aliasPrototype.FunctionName, paramBuilder)); // use original call parameters.
            }
          }

          writer.Write("  GLEW_ASSERT (prototypeCalled);\n");

          //writer.Write($"#if defined(GLEW_{m_api[0].ToUpperInvariant()}_POST_ERROR_CHECK)\n  GLEW_{m_api[0].ToUpperInvariant()}_POST_ERROR_CHECK(\"{commandPrototype.FunctionName}\");\n#endif\n");

          if (!voidFunction)
          {
            writer.Write(string.Format("  return result;\n", commandPrototype.ReturnType));
          }

          writer.Write("}\n");

          if (!string.IsNullOrEmpty(feature.Value.Platform))
          {
            writer.Write($"#endif\n");
          }

          writer.Write("\n");

          WriteCommentDivider(writer);
        }
      }
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    protected bool IsApiSupported (string apiList)
    {
      string [] queriedApis = apiList.Split (new char [] {'|'}, StringSplitOptions.RemoveEmptyEntries);

      for (int i = 0; i < queriedApis.Length; ++i)
      {
        foreach (string api in m_api)
        {
          if (queriedApis [i].Equals (api))
          {
            return true;
          }
        }
      }

      return false;
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    protected CommandPrototype GetCommandPrototype (string command)
    {
      Commands.TryGetValue(command, out XmlNode commandNode);

      if (commandNode?.Attributes["alias"] != null)
      {
        Commands.TryGetValue(commandNode.Attributes["alias"].Value, out commandNode);
      }

      if (commandNode == null)
      {
        throw new InvalidOperationException("Failed to find prototype for command: " + command);
      }

      var prototype = GetCommandPrototype(commandNode);

      prototype.FunctionName = command;

      return prototype;
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    protected CommandPrototype GetCommandPrototype (XmlNode commandNode)
    {
      CommandPrototype commandPrototype = new CommandPrototype ();

      //
      // Make an identical copy of the XML contents of component of the prototype/params.
      //

      XmlNode protoNode = commandNode.SelectSingleNode ("proto");

      XmlNodeList protoParamNodes = commandNode.SelectNodes ("param");

      {
        int protoNameIndex = protoNode.InnerXml.IndexOf ("<name>");

        string protoReturnType = protoNode.InnerXml.Substring (0, protoNameIndex);

        protoReturnType = protoReturnType.Replace ("<ptype>", "");

        protoReturnType = protoReturnType.Replace ("</ptype>", "");

        protoReturnType = protoReturnType.Replace("<type>", "");

        protoReturnType = protoReturnType.Replace("</type>", "");

        protoReturnType = protoReturnType.Trim ();

        commandPrototype.ReturnType = protoReturnType;

        string protoName = protoNode.InnerXml.Substring (protoNameIndex);

        protoName = protoName.Replace ("<name>", "");

        protoName = protoName.Replace ("</name>", "");

        protoName = protoName.Replace ("*", "");

        protoName = protoName.Trim ();

        commandPrototype.FunctionName = protoName;
      }

      for (int i = 0; i < protoParamNodes.Count; ++i)
      {
        XmlNode paramNode = protoParamNodes.Item (i);

        int paramNameIndex = paramNode.InnerXml.IndexOf ("<name>");

        string paramType = paramNode.InnerXml.Substring (0, paramNameIndex);

        paramType = paramType.Replace ("<ptype>", "");

        paramType = paramType.Replace ("</ptype>", "");

        paramType = paramType.Replace("<type>", "");

        paramType = paramType.Replace("</type>", "");

        paramType = paramType.Trim();

        string paramName = paramNode.InnerXml.Substring (paramNameIndex);

        paramName = paramName.Replace ("<name>", "");

        paramName = paramName.Replace ("</name>", "");

        paramName = paramName.Trim();

        commandPrototype.Parameters.Add (new Tuple<string, string>(paramType, paramName));
      }

      commandPrototype.ExternC = m_api[0].Equals("wgl");

      commandPrototype.EntryPrefix = m_funcApiEntryPrefix;

      commandPrototype.EntryPostfix = m_funcApiEntryPostfix;

      commandPrototype.DelegatePrefix = m_funcPointerApiEntryPrefix;

      commandPrototype.DelegatePostfix = m_funcPointerApiEntryPostfix;

      return commandPrototype;
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    protected static void WriteCommentDivider (StreamWriter writer, int whitespacePadding = 0)
    {
      string divider = string.Format ("{0," + whitespacePadding + "}////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////", "");

      writer.WriteLine (divider);

      writer.WriteLine (divider);

      writer.WriteLine (divider);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  }

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
