////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Xml;

namespace wrangle_gl_generator;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

public class CommandPrototype
{
  public XmlNode commandNode = null;

  public string functionName = null;

  public string returnType = null;

  public List<string> paramTypes = null;

  public List<string> paramNames = null;

  public string fullPrototype = null;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

public abstract class Generator : XmlDocument
{

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  protected readonly string[] m_api;

  protected readonly Dictionary<string, float> m_apiBaseSpecVersion = new Dictionary<string, float> ();

  protected readonly XmlNodeList m_typesNodes;

  protected readonly XmlNodeList m_enumsNodes;

  protected readonly XmlNodeList m_commandsNodes;

  protected readonly XmlNodeList m_featureNodes;

  protected readonly XmlNodeList m_extensionNodes;

  protected Dictionary<string, XmlNode> m_enumsNodesLookup = new Dictionary<string, XmlNode> ();

  protected Dictionary<string, XmlNode> m_commandsNodesLookup = new Dictionary<string, XmlNode> ();

  protected Dictionary<string, List<XmlNode>> m_commandsAliasNodesLookup = new Dictionary<string, List<XmlNode>> ();

  protected Dictionary<string, XmlNode> m_featureNodesLookup = new Dictionary<string, XmlNode> ();

  protected Dictionary<string, XmlNode> m_extensionNodesLookup = new Dictionary<string, XmlNode> ();

  protected Dictionary<string, XmlNode> m_featureAndExtensionNodes = new Dictionary<string, XmlNode> ();

  protected Dictionary<string, XmlNode> m_featureEnumNodesLookup = new Dictionary<string, XmlNode> ();

  protected Dictionary<string, XmlNode> m_featureCommandNodesLookup = new Dictionary<string, XmlNode> ();

  protected string m_funcApiEntryPrefix = "";

  protected string m_funcApiEntryPostfix = "";

  protected string m_funcPointerApiEntryPrefix = "";

  protected string m_funcPointerApiEntryPostfix = "";

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public Generator (Stream stream, string[][] apiSpec)
  {
    m_api = new string[apiSpec.Length];

    for (int i = 0; i < apiSpec.Length; ++i)
    {
      m_api[i] = apiSpec[i][0];

      m_apiBaseSpecVersion.Add (m_api[i], float.Parse (apiSpec[i][1]));
    }

    Load (stream);

    m_typesNodes = SelectNodes ("//registry/types");

    m_enumsNodes = SelectNodes ("//registry/enums");

    m_featureNodes = SelectNodes ("//registry/feature");

    m_commandsNodes = SelectNodes ("//registry/commands");

    m_extensionNodes = SelectNodes ("//registry/extensions/extension");

    //
    // Generate fast-lookup of 'enums' nodes.
    //

    foreach (XmlNode enumsNode in m_enumsNodes)
    {
      XmlNodeList childEnumNodes = enumsNode.SelectNodes ("enum");

      foreach (XmlNode enumNode in childEnumNodes)
      {
        string enumNodeName = enumNode.Attributes["name"].Value;

        m_enumsNodesLookup.TryAdd (enumNodeName, enumNode);
      }
    }

    //
    // Generate fast-lookup of 'feature' nodes.
    //

    foreach (XmlNode featureNode in m_featureNodes)
    {
      if (featureNode.Attributes.GetNamedItem ("api") is not XmlNode featureApiNode)
      {
        continue;
      }

      if (!IsApiSupported (featureApiNode.Value))
      {
        continue; // Skip non-supported APIs.
      }

      m_featureNodesLookup.TryAdd (featureNode.Attributes["name"].Value, featureNode);
    }

    //
    // Generate fast-lookup of 'commands' nodes.
    //

    foreach (XmlNode commandsNode in m_commandsNodes)
    {
      XmlNodeList childCommandNodes = commandsNode.SelectNodes ("command");

      foreach (XmlNode commandNode in childCommandNodes)
      {
        XmlNode commandProtoNameNode = commandNode.SelectSingleNode ("proto/name");

        m_commandsNodesLookup.Add (commandProtoNameNode.InnerText, commandNode);

        //
        // Some commands are listed as aliases for other commands;
        // I.e. glDrawArraysInstancedANGLE is an alias of glDrawArraysInstanced
        //

        if (commandNode.SelectNodes ("alias") is XmlNodeList commandAliasNode)
        {
          foreach (XmlNode aliasNode in commandAliasNode)
          {
            string aliasKey = aliasNode.Attributes["name"].Value;

            if (!m_commandsAliasNodesLookup.TryGetValue (aliasKey, out List<XmlNode> aliases))
            {
              aliases = new List<XmlNode> ();
            }

            aliases.Add (commandNode);

            m_commandsAliasNodesLookup[aliasKey] = aliases;
          }
        }
      }
    }

    //
    // Generate fast-lookup of 'extensions' nodes.
    //

    foreach (XmlNode extensionNode in m_extensionNodes)
    {
      if (extensionNode.Attributes.GetNamedItem ("supported") is not XmlNode extensionSupportedNode)
      {
        continue;
      }

      if (!IsApiSupported (extensionSupportedNode.Value))
      {
        continue; // Skip non-supported APIs.
      }

      string extensionNodeName = extensionNode.Attributes["name"].Value;

      m_extensionNodesLookup.TryAdd (extensionNodeName, extensionNode);
    }

    //
    // Collate feature and extension nodes together; as this can signifantly improve code re-use later.
    //

    foreach (var keypair in m_featureNodesLookup)
    {
      if (!m_featureAndExtensionNodes.ContainsKey (keypair.Key))
      {
        m_featureAndExtensionNodes.Add (keypair.Key, keypair.Value);
      }
    }

    foreach (var keypair in m_extensionNodesLookup)
    {
      if (!m_featureAndExtensionNodes.ContainsKey (keypair.Key))
      {
        m_featureAndExtensionNodes.Add (keypair.Key, keypair.Value);
      }
    }

    //
    // Generate fast-lookup of 'enums' and 'command' nodes required by supported APIs.
    //

    foreach (var keypair in m_featureAndExtensionNodes)
    {
      XmlNode featureNode = keypair.Value;

      //
      // Multiple <require> tags can be nested in a feature/extension definition.  It's possible for these to also be api specific.
      //

      XmlNodeList requireNodes = featureNode.SelectNodes ("require");

      foreach (XmlNode requireNode in requireNodes)
      {
        string api = requireNode.Attributes.GetNamedItem ("api") is XmlNode requireApiNode ? requireApiNode.Value : m_api[0];

        if (!IsApiSupported (api))
        {
          continue; // Skip non-supported APIs.
        }

        //
        // Evaluate whether this feature is part of the 'base spec'.
        //

        bool baseSpecFeatureSet = false;

        if (featureNode.Attributes.GetNamedItem ("number") is XmlNode featureNumberNode)
        {
          float version = float.Parse (featureNumberNode.Value);

          baseSpecFeatureSet = version <= m_apiBaseSpecVersion[api];
        }

        //
        // Collate 'enums' listed by required features/extensions.
        //

        {
          XmlNodeList requireEnumNodes = requireNode.SelectNodes ("enum");

          foreach (XmlNode enumNode in requireEnumNodes)
          {
            string enumNodeName = enumNode.Attributes["name"].Value;

            m_featureEnumNodesLookup.TryAdd (enumNodeName, enumNode);
          }
        }

        //
        // Collate 'commands' listed by required features/extensions.
        //

        {
          XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

          foreach (XmlNode commandNode in requireCommandNodes)
          {
            string commandNodeName = commandNode.Attributes["name"].Value;

            m_featureCommandNodesLookup.TryAdd (commandNodeName, commandNode);
          }
        }
      }
    }
  }

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public virtual void ExportHpp (StreamWriter writer)
  {
    WriteCommentDivider (writer);

    writer.Write (Environment.NewLine);

    writer.WriteLine ("#include <wrangle.h>");

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer);

    writer.Write (Environment.NewLine);

    //
    // 'FeatureSet' class; wraps 'features' and 'extension' identifiers.
    //

    writer.Write (@"#if defined(__GNUC__)
#if ((__GNUC__ * 10000) + (__GNUC_MINOR__ * 100) + __GNUC_PATCHLEVEL__) >= 40600
#pragma GCC diagnostic push // push/pop not available before GCC 4.6
#endif
#pragma GCC diagnostic ignored ""-Wunused-function""
#endif
");

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer);

    writer.Write (Environment.NewLine);

    writer.WriteLine (string.Format ("enum GLEW_{0}_FeatureSet", m_api[0].ToUpperInvariant ()));

    writer.WriteLine ("{");

    foreach (string key in m_featureAndExtensionNodes.Keys)
    {
      writer.WriteLine (string.Format ("  {0}{1},", "GLEW_", key));
    }

    writer.WriteLine (string.Format ("  {0}{1}_{2}", "GLEW_", m_api[0].ToUpperInvariant (), "FeatureSetCount"));

    writer.WriteLine ("};");

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer);

    writer.Write (Environment.NewLine);

    //
    // Define function pointers to feature and extension functions (these are usually just exposed via pre-linked functions).
    //

    HashSet<string> definedPrototypes = new HashSet<string> ();

    foreach (var keypair in m_featureAndExtensionNodes)
    {
      XmlNode featureNode = keypair.Value;

      string api = (featureNode.Attributes.GetNamedItem ("api") is XmlNode featureApiNode) ? featureApiNode.Value : m_api[0];

      //
      // Multiple <require> tags can be nested in a feature/extension definition.  It's possible for these to also be api specific.
      //

      XmlNodeList requireNodes = featureNode.SelectNodes ("require");

      foreach (XmlNode requireNode in requireNodes)
      {
        if (requireNode.Attributes.GetNamedItem ("api") is XmlNode requireApiNode)
        {
          api = requireApiNode.Value;
        }

        if (!IsApiSupported (api))
        {
          continue; // Skip non-supported APIs.
        }

        //
        // Evaluate whether this feature is part of the 'base spec'.
        //

        bool baseSpecFeatureSet = false;

        if (featureNode.Attributes.GetNamedItem ("number") is XmlNode featureNumberNode)
        {
          float version = float.Parse (featureNumberNode.Value);

          baseSpecFeatureSet = version <= m_apiBaseSpecVersion[api];
        }

        /*if (baseSpecFeatureSet)
        {
          continue; // Skip any base spec versions.
        }*/

        //
        // Export code for defining available function/commands.
        //

        XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

        StringBuilder commandFuncPointerBuilder = new StringBuilder ();

        foreach (XmlNode commandNode in requireCommandNodes)
        {
          commandFuncPointerBuilder.Clear ();

          string command = commandNode.Attributes["name"].Value;

          CommandPrototype commandPrototype = GetCommandPrototype (command);

          if (definedPrototypes.Contains (commandPrototype.fullPrototype))
          {
            continue; // Skip any duplicate prototypes.
          }

          if (baseSpecFeatureSet)
          {
            bool shouldExternC = !api.Equals ("wgl");

            commandFuncPointerBuilder.AppendFormat ("{0} {1} {2} {3} {4} (", shouldExternC ? "GLEW_EXTERN_C" : "GLEW_EXTERN", m_funcApiEntryPrefix, commandPrototype.returnType, m_funcApiEntryPostfix, commandPrototype.functionName);

            definedPrototypes.Add (commandPrototype.fullPrototype);
          }
          else
          {
            string mangedFunctionPointer = string.Format ("PFN{0}PROC", commandPrototype.functionName.ToUpperInvariant ());

            commandFuncPointerBuilder.AppendFormat ("typedef {0} {1} ({2} {3}) /* {4} */ (", m_funcPointerApiEntryPrefix, commandPrototype.returnType, m_funcPointerApiEntryPostfix, mangedFunctionPointer, commandPrototype.functionName);
          }

          for (int i = 0; i < commandPrototype.paramNames.Count; ++i)
          {
            string name = commandPrototype.paramNames[i];

            string type = commandPrototype.paramTypes[i];

            if (i > 0)
            {
              commandFuncPointerBuilder.Append (", ");
            }

            commandFuncPointerBuilder.AppendFormat ("{0} {1}", type, name);
          }

          commandFuncPointerBuilder.Append (')');

          commandFuncPointerBuilder.Replace ("  ", " ");

          string commandFuncPointer = commandFuncPointerBuilder.ToString ();

          writer.WriteLine (string.Format ("{0};", commandFuncPointer));
        }
      }
    }

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer);

    //
    // 'DeviceConfig' class: Default API.
    //

    writer.Write (Environment.NewLine);

    writer.WriteLine ("namespace glew");

    writer.WriteLine ("{");

    writer.WriteLine ($"  class {m_api[0]}");

    writer.WriteLine ("  {");

    writer.WriteLine ("  public:");

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer, 4);

    writer.Write (Environment.NewLine);

    writer.WriteLine ("    class DeviceConfig");

    writer.WriteLine ("    {");

    writer.WriteLine ("    public:");

    writer.Write (Environment.NewLine);

    writer.WriteLine (string.Format ("      bool m_featureSupported [{0}{1}_{2}];", "GLEW_", m_api[0].ToUpperInvariant (), "FeatureSetCount"));

    writer.Write (Environment.NewLine);

    //
    // 'DeviceConfig' class: Feature and extension function prototypes.
    //

    HashSet<string> definedCommands = new HashSet<string> ();

    foreach (var keypair in m_featureAndExtensionNodes)
    {
      XmlNode featureNode = keypair.Value;

      string api = (featureNode.Attributes.GetNamedItem ("api") is XmlNode featureApiNode) ? featureApiNode.Value : m_api[0];

      //
      // Multiple <require> tags can be nested in a feature/extension definition.  It's possible for these to also be api specific.
      //

      XmlNodeList requireNodes = featureNode.SelectNodes ("require");

      foreach (XmlNode requireNode in requireNodes)
      {
        if (requireNode.Attributes.GetNamedItem ("api") is XmlNode requireApiNode)
        {
          api = requireApiNode.Value;
        }

        if (!IsApiSupported (api))
        {
          continue; // Skip non-supported APIs.
        }

        //
        // Evaluate whether this feature is part of the 'base spec'.
        //

        bool baseSpecFeatureSet = false;

        if (featureNode.Attributes.GetNamedItem ("number") is XmlNode featureNumberNode)
        {
          float version = float.Parse (featureNumberNode.Value);

          baseSpecFeatureSet = version <= m_apiBaseSpecVersion[api];
        }

        if (baseSpecFeatureSet)
        {
          continue; // Skip any base spec versions.
        }

        //
        // Export code for defining local function/command cached address storage.
        //

        XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

        foreach (XmlNode commandNode in requireCommandNodes)
        {
          string command = commandNode.Attributes["name"].Value;

          if (!definedCommands.Add (command))
          {
            continue;
          }

          string mangedFunctionPointer = string.Format ("PFN{0}PROC", command.ToUpperInvariant ());

          writer.WriteLine (string.Format ("      {0} m_{1};", mangedFunctionPointer, command));
        }
      }
    }

    writer.WriteLine ($"    }};");

    writer.Write (Environment.NewLine);

    ExportHppPublicGlewApi (writer);

    writer.Write (Environment.NewLine);

    writer.WriteLine ("  };");

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer, 2);

    writer.Write (Environment.NewLine);

    writer.WriteLine (string.Format ("  bool IsSupported (GLEW_{1}_FeatureSet feature);", m_api[0], m_api[0].ToUpperInvariant ()));

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer, 2);

    writer.Write (Environment.NewLine);

    writer.WriteLine ("}");

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer, 0);

    //
    // Pre-processor pass-through defines for redirecting functions to glew alternatives.
    //

#if false
    writer.Write (Environment.NewLine);

    foreach (string key in m_featureAndExtensionNodes.Keys)
    {
      writer.WriteLine (string.Format ("#define {0}{1} glew::{2}::{0}{1}", "GLEW_", key, m_api [0]));
    }
#endif
    writer.Write (Environment.NewLine);

    HashSet<string> exportedCommands = new HashSet<string> ();

    foreach (var keypair in m_featureAndExtensionNodes)
    {
      XmlNode featureNode = keypair.Value;

      //
      // Multiple <require> tags can be nested in a feature/extension definition.  It's possible for these to also be api specific.
      //

      XmlNodeList requireNodes = featureNode.SelectNodes ("require");

      foreach (XmlNode requireNode in requireNodes)
      {
        string api = requireNode.Attributes.GetNamedItem ("api") is XmlNode requireApiNode ? requireApiNode.Value : m_api[0];

        if (!IsApiSupported (api))
        {
          continue; // Skip non-supported APIs.
        }

        //
        // Evaluate whether this feature is part of the 'base spec'.
        //

        bool baseSpecFeatureSet = false;

        if (featureNode.Attributes.GetNamedItem ("number") is XmlNode featureNumberNode)
        {
          float version = float.Parse (featureNumberNode.Value);

          baseSpecFeatureSet = version <= m_apiBaseSpecVersion[api];
        }

        if (baseSpecFeatureSet)
        {
          continue; // Skip any base spec versions.
        }

        //
        // Export code to #define pass-through prototypes to non-base spec functions.
        //

        XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

        StringBuilder commandFuncBuilder = new StringBuilder ();

        foreach (XmlNode commandNode in requireCommandNodes)
        {
          string command = commandNode.Attributes["name"].Value;

          if (!exportedCommands.Add (command))
          {
            continue;
          }

          CommandPrototype commandPrototype = GetCommandPrototype (command);

          commandFuncBuilder.Clear ();

          commandFuncBuilder.AppendFormat ("GLEW_API {0} GLEW_APIENTRY _glew_{1}_{2} (", commandPrototype.returnType, m_api[0], command);

          for (int i = 0; i < commandPrototype.paramNames.Count; ++i)
          {
            string type = commandPrototype.paramTypes[i];

            string name = commandPrototype.paramNames[i];

            if (i > 0)
            {
              commandFuncBuilder.Append (", ");
            }

            commandFuncBuilder.AppendFormat ("{0} {1}", type, name);
          }

          commandFuncBuilder.Append (')');

          commandFuncBuilder.Replace ("  ", " ");

          string commandFunc = commandFuncBuilder.ToString ();

          writer.WriteLine (string.Format ("{0};", commandFunc));

          //
          // If the prototype contains non-Khronos standard 'const GLchar **', add a passthrough to accept 'const GLchar *const*'.
          //
#if false
      if (commandFunc.Contains ("const GLchar **"))
      {
        string khronosStandardFuncPointer  = commandFunc.Replace ("const GLchar **", "const GLchar *const*");

        writer.WriteLine (string.Format ("{0};", khronosStandardFuncPointer));
      }
#endif
        }
      }
    }

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer, 0);

    writer.Write (Environment.NewLine);

    foreach (string command in exportedCommands)
    {
      writer.WriteLine (string.Format ("#define {0} _glew_{1}_{0}", command, m_api[0]));
    }

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer);

    writer.Write (Environment.NewLine);

    writer.Write (@"#if defined(__GNUC__)
#if ((__GNUC__ * 10000) + (__GNUC_MINOR__ * 100) + __GNUC_PATCHLEVEL__) >= 40600
#pragma GCC diagnostic pop // push/pop not available before GCC 4.6
#endif
#endif
");

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer);
  }

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public virtual void ExportHppPublicGlewApi (StreamWriter writer)
  {
    writer.WriteLine ("  public:");

    writer.Write (Environment.NewLine);

    writer.WriteLine ("    static void Initialise ();");

    writer.Write (Environment.NewLine);

    writer.WriteLine ("    static void Deinitialise ();");

    writer.Write (Environment.NewLine);

    writer.WriteLine (string.Format ("    static bool IsSupported (GLEW_{0}_FeatureSet feature)", m_api[0].ToUpperInvariant ()));

    writer.WriteLine ("    {");

    writer.WriteLine ("      GLEW_ASSERT (s_initialised);");

    writer.WriteLine ("      return s_deviceConfig.m_featureSupported [feature];");

    writer.WriteLine ("    }");

    writer.Write (Environment.NewLine);

    writer.WriteLine (string.Format ("    static void SetConfig (const glew::{0}::DeviceConfig &deviceConfig)", m_api[0]));

    writer.WriteLine ("    {");

    writer.WriteLine ("      GLEW_ASSERT (s_initialised);");

    writer.WriteLine ("      s_deviceConfig = deviceConfig;");

    writer.WriteLine ("    }");

    writer.Write (Environment.NewLine);

    writer.WriteLine (string.Format ("    static glew::{0}::DeviceConfig &GetConfig ()", m_api[0]));

    writer.WriteLine ("    {");

    writer.WriteLine ("      GLEW_ASSERT (s_initialised);");

    writer.WriteLine ("      return s_deviceConfig;");

    writer.WriteLine ("    }");

    writer.Write (Environment.NewLine);

    writer.WriteLine ("  protected:");

    writer.Write (Environment.NewLine);

    writer.WriteLine ("    static bool s_initialised;");

    writer.Write (Environment.NewLine);

    writer.WriteLine ($"    static glew::{m_api[0]}::DeviceConfig s_deviceConfig;");
  }

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public virtual void ExportCpp (StreamWriter writer)
  {
    writer.WriteLine (string.Format ("#include <wrangle-{0}.h>", m_api[0]));

    writer.WriteLine (string.Format ("#include \"wrangle-{0}.inl\"", m_api[0]));

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer);
  }

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public virtual void ExportCppInl (StreamWriter writer)
  {
    WriteCommentDivider (writer, linePaddingBottom: 1);

    //
    // Feature and extension function definitions.
    //

    Dictionary<string, List<XmlNode>> duplicatePrototypeRequireNodes = new Dictionary<string, List<XmlNode>> ();

    foreach (var keypair in m_featureAndExtensionNodes)
    {
      XmlNode featureNode = keypair.Value;

      string api = (featureNode.Attributes.GetNamedItem ("api") is XmlNode featureApiNode) ? featureApiNode.Value : m_api[0];

      //
      // Multiple <require> tags can be nested in a feature/extension definition.  It's possible for these to also be api specific.
      //

      XmlNodeList requireNodes = featureNode.SelectNodes ("require");

      foreach (XmlNode requireNode in requireNodes)
      {
        if (requireNode.Attributes.GetNamedItem ("api") is XmlNode requireApiNode)
        {
          api = requireApiNode.Value;
        }

        if (!IsApiSupported (api))
        {
          continue; // Skip non-supported APIs.
        }

        //
        // Evaluate whether this feature is part of the 'base spec'.
        //

        bool baseSpecFeatureSet = false;

        if (featureNode.Attributes.GetNamedItem ("number") is XmlNode featureNumberNode)
        {
          float version = float.Parse (featureNumberNode.Value);

          baseSpecFeatureSet = version <= m_apiBaseSpecVersion[api];
        }

        //
        // Export code for defining the pass-through local-scope GL functions.
        //

        XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

        foreach (XmlNode commandNode in requireCommandNodes)
        {
          string command = commandNode.Attributes["name"].Value;

          if (!duplicatePrototypeRequireNodes.TryGetValue (command, out List<XmlNode> prototypeRequireNodes))
          {
            prototypeRequireNodes = new List<XmlNode> ();
          }

          prototypeRequireNodes.Add (requireNode);

          duplicatePrototypeRequireNodes[command] = prototypeRequireNodes;
        }
      }
    }

    foreach (var prototypeRequireNodes in duplicatePrototypeRequireNodes)
    {
      string command = prototypeRequireNodes.Key;

      //
      // Evaluate whether this feature should be included, as isn't part of the 'base spec'.
      //

      bool baseSpecFeatureSet = false;

      foreach (XmlNode requireNode in prototypeRequireNodes.Value)
      {
        XmlNode featureNode = requireNode.ParentNode;

        string api = m_api[0];

        if (featureNode.Attributes.GetNamedItem ("api") is XmlNode featureApiNode)
        {
          api = featureApiNode.Value;
        }

        if (featureNode.Attributes.GetNamedItem ("number") is XmlNode featureNumberNode)
        {
          float version = float.Parse (featureNumberNode.Value);

          baseSpecFeatureSet = version <= m_apiBaseSpecVersion[api];
        }
      }

      if (baseSpecFeatureSet)
      {
        continue; // Skip any base spec versions.
      }

      //
      // Begin prototype definition.
      //

      CommandPrototype commandPrototype = GetCommandPrototype (command);

      StringBuilder paramBuilder = new StringBuilder ();

      for (int i = 0; i < commandPrototype.paramNames.Count; ++i)
      {
        string type = commandPrototype.paramTypes[i];

        string name = commandPrototype.paramNames[i];

        if (i > 0)
        {
          paramBuilder.Append (", ");
        }

        paramBuilder.AppendFormat ("{0} {1}", type, name);
      }

      writer.WriteLine (string.Format ("{0} _glew_{1}_{2} ({3})", commandPrototype.returnType, m_api[0], commandPrototype.functionName, paramBuilder.ToString ()));

      writer.WriteLine ("{");

      writer.WriteLine (string.Format ("  bool prototypeCalled = false;"));

      writer.WriteLine (string.Format ("  const glew::{0}::DeviceConfig &{0}Config = glew::{0}::GetConfig ();", m_api[0]));

      bool voidFunction = (commandPrototype.returnType.Equals ("void", StringComparison.InvariantCultureIgnoreCase) && !commandPrototype.returnType.Contains ('*'));

      if (!voidFunction)
      {
        writer.WriteLine (string.Format ("  {0} result = (({0})0);", commandPrototype.returnType));
      }

      writer.WriteLine ($"#if defined (GLEW_{m_api[0].ToUpperInvariant ()}_PRE_ERROR_CHECK)");

      writer.WriteLine ($"  GLEW_{m_api[0].ToUpperInvariant ()}_PRE_ERROR_CHECK();");

      writer.WriteLine ("#endif");

      foreach (XmlNode requireNode in prototypeRequireNodes.Value)
      {
        XmlNode featureNode = requireNode.ParentNode;

        string feature = featureNode.Attributes["name"].Value;

        writer.WriteLine (string.Format ("  // {0} - {1}", feature, command));

        writer.WriteLine (string.Format ("  if (!prototypeCalled && {0}Config.m_featureSupported [GLEW_{1}] && {0}Config.m_{2})", m_api[0], feature, commandPrototype.functionName));

        writer.WriteLine ("  {");

        writer.WriteLine (string.Format ("    prototypeCalled = true;"));

        writer.Write (string.Format ("    {0}", (voidFunction ? "" : "result = ")));

        paramBuilder.Clear ();

        for (int i = 0; i < commandPrototype.paramNames.Count; ++i)
        {
          string param = commandPrototype.paramNames[i];

          int arrayOffset = param.IndexOf ('[');

          if (arrayOffset != -1)
          {
            param = param[..arrayOffset];
          }

          if (i > 0)
          {
            paramBuilder.Append (", ");
          }

          paramBuilder.Append (param);
        }

        writer.WriteLine (string.Format ("{0}Config.m_{1} ({2});", m_api[0], commandPrototype.functionName, paramBuilder.ToString ()));

        writer.WriteLine ("  }");
      }

      if (m_commandsAliasNodesLookup.TryGetValue (command, out List<XmlNode> aliasCommandNodes))
      {
        foreach (XmlNode aliasCommandNode in aliasCommandNodes)
        {
          XmlNode commandProtoNameNode = aliasCommandNode.SelectSingleNode ("proto/name");

          string aliasCommand = commandProtoNameNode.InnerText;

          CommandPrototype aliasPrototype = GetCommandPrototype (aliasCommandNode);

          if (m_featureCommandNodesLookup.TryGetValue (aliasCommand, out XmlNode aliasCommandRequireNode))
          {
            XmlNode aliasCommandFeatureNode = aliasCommandRequireNode.ParentNode.ParentNode;

            string aliasFeature = aliasCommandFeatureNode.Attributes["name"].Value;

            writer.WriteLine (string.Format ("  // {0} - {1}", aliasFeature, command));

            writer.WriteLine (string.Format ("  if (!prototypeCalled && {0}Config.m_featureSupported [GLEW_{1}] && {0}Config.m_{2})", m_api[0], aliasFeature, aliasCommand));

            writer.WriteLine ("  {");

            writer.WriteLine (string.Format ("    prototypeCalled = true;"));

            writer.Write (string.Format ("    {0}", (voidFunction ? "" : "result = ")));

            paramBuilder.Clear ();

            if (!aliasPrototype.returnType.Equals (aliasPrototype.returnType))
            {
              writer.Write (string.Format ("({0}) ", commandPrototype.returnType)); // original return type
            }

            for (int i = 0; i < aliasPrototype.paramNames.Count; ++i)
            {
              if (i > 0)
              {
                paramBuilder.Append (", ");
              }

              if (!aliasPrototype.paramTypes[i].Equals (commandPrototype.paramTypes[i]))
              {
                paramBuilder.AppendFormat ("({0}) ", aliasPrototype.paramTypes[i]);
              }

              string param = commandPrototype.paramNames[i]; // original param name

              int arrayOffset = param.IndexOf ('[');

              if (arrayOffset != -1)
              {
                param = param[..arrayOffset];
              }

              paramBuilder.Append (param);
            }

            writer.WriteLine (string.Format ("{0}Config.m_{1} ({2});", m_api[0], aliasPrototype.functionName, paramBuilder.ToString ()));

            writer.WriteLine ("  }");
          }
        }
      }

      writer.WriteLine ("  GLEW_ASSERT (prototypeCalled);");

      writer.WriteLine ($"#if defined (GLEW_{m_api[0].ToUpperInvariant ()}_POST_ERROR_CHECK)");

      writer.WriteLine ($"  GLEW_{m_api[0].ToUpperInvariant ()}_POST_ERROR_CHECK();");

      writer.WriteLine ("#endif");

      if (!voidFunction)
      {
        writer.WriteLine ("  return result;"); // commandPrototype.returnType
      }

      writer.WriteLine ("}");

      writer.Write (Environment.NewLine);

      WriteCommentDivider (writer);

      writer.Write (Environment.NewLine);
    }
  }

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  protected bool IsApiSupported (string apiList)
  {
    string[] queriedApis = apiList.Split (['|'], StringSplitOptions.RemoveEmptyEntries);

    return queriedApis.Any (x => m_api.Contains (x));
  }

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  protected CommandPrototype GetCommandPrototype (string command)
  {
    return m_commandsNodesLookup.TryGetValue (command, out XmlNode commandNode) ? GetCommandPrototype (commandNode) : null;
  }

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  protected static CommandPrototype GetCommandPrototype (XmlNode commandNode)
  {
    CommandPrototype commandPrototype = new CommandPrototype ();

    commandPrototype.commandNode = commandNode;

    commandPrototype.paramTypes = new List<string> ();

    commandPrototype.paramNames = new List<string> ();

    StringBuilder prototypeBuilder = new StringBuilder ();

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

      protoReturnType = protoReturnType.Trim ();

      commandPrototype.returnType = protoReturnType;

      string protoName = protoNode.InnerXml.Substring (protoNameIndex);

      protoName = protoName.Replace ("<name>", "");

      protoName = protoName.Replace ("</name>", "");

      protoName = protoName.Replace ("*", "");

      protoName = protoName.Trim ();

      commandPrototype.functionName = protoName;

      prototypeBuilder.Append (protoReturnType + " " + protoName);

      prototypeBuilder.Append (" (");
    }

    for (int i = 0; i < protoParamNodes.Count; ++i)
    {
      XmlNode paramNode = protoParamNodes.Item (i);

      int paramNameIndex = paramNode.InnerXml.IndexOf ("<name>");

      string paramType = paramNode.InnerXml.Substring (0, paramNameIndex);

      paramType = paramType.Replace ("<ptype>", "");

      paramType = paramType.Replace ("</ptype>", "");

      string paramName = paramNode.InnerXml.Substring (paramNameIndex);

      paramName = paramName.Replace ("<name>", "");

      paramName = paramName.Replace ("</name>", "");

      prototypeBuilder.Append (paramType + " " + paramName);

      commandPrototype.paramTypes.Add (paramType);

      commandPrototype.paramNames.Add (paramName);

      if (i < (protoParamNodes.Count - 1))
      {
        prototypeBuilder.Append (", ");
      }
    }

    prototypeBuilder.Append (')');

    prototypeBuilder.Replace ("  ", " ");

    if (commandPrototype.paramNames.Count != commandPrototype.paramTypes.Count)
    {
      throw new InvalidOperationException ("Output names/types do not match.");
    }

    commandPrototype.fullPrototype = prototypeBuilder.ToString ();

    return commandPrototype;
  }

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  protected static void WriteCommentDivider (StreamWriter writer, int indentPadding = 0, int linePaddingTop = 0, int linePaddingBottom = 0)
  {
    for (int i = 0; i < linePaddingTop; i++)
    {
      writer.Write (Environment.NewLine);
    }

    string divider = string.Format ("{0," + indentPadding + "}////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////", "");

    writer.WriteLine (divider);

    writer.WriteLine (divider);

    writer.WriteLine (divider);

    for (int i = 0; i < linePaddingBottom; i++)
    {
      writer.Write (Environment.NewLine);
    }
  }

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
