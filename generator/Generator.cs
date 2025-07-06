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

public class Generator : XmlDocument
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

      float baseApiVersion;

      float.TryParse (apiSpec[i][1], out baseApiVersion);

      m_apiBaseSpecVersion.Add (m_api[i], baseApiVersion);
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

    if (m_enumsNodes.Count > 0)
    {
      foreach (XmlNode enumsNode in m_enumsNodes)
      {
        XmlNodeList childEnumNodes = enumsNode.SelectNodes ("enum");

        if (childEnumNodes.Count == 0)
        {
          continue;
        }

        foreach (XmlNode enumNode in childEnumNodes)
        {
          string enumNodeName = enumNode.Attributes["name"].Value;

          if (!m_enumsNodesLookup.ContainsKey (enumNodeName))
          {
            m_enumsNodesLookup.Add (enumNodeName, enumNode);
          }
        }
      }
    }

    //
    // Generate fast-lookup of 'feature' nodes.
    //

    if (m_featureNodes.Count > 0)
    {
      foreach (XmlNode featureNode in m_featureNodes)
      {
        XmlNode featureApiNode = featureNode.Attributes.GetNamedItem ("api");

        if ((featureApiNode != null) && (!IsApiSupported (featureApiNode.Value)))
        {
          continue; // Skip non-supported APIs.
        }

        string featureNodeName = featureNode.Attributes["name"].Value;

        if (m_featureNodesLookup.ContainsKey (featureNodeName))
        {
          continue;
        }

        m_featureNodesLookup.Add (featureNodeName, featureNode);
      }
    }

    //
    // Generate fast-lookup of 'commands' nodes.
    //

    if (m_commandsNodes.Count > 0)
    {
      foreach (XmlNode commandsNode in m_commandsNodes)
      {
        XmlNodeList childCommandNodes = commandsNode.SelectNodes ("command");

        if (childCommandNodes.Count == 0)
        {
          continue;
        }

        foreach (XmlNode commandNode in childCommandNodes)
        {
          XmlNode commandProtoNameNode = commandNode.SelectSingleNode ("proto/name");

          m_commandsNodesLookup.Add (commandProtoNameNode.InnerText, commandNode);

          //
          // Some commands are listed as aliases for other commands;
          // I.e. glDrawArraysInstancedANGLE is an alias of glDrawArraysInstanced
          //

          XmlNodeList commandAliasNode = commandNode.SelectNodes ("alias");

          if ((commandAliasNode != null) && (commandAliasNode.Count > 0))
          {
            foreach (XmlNode aliasNode in commandAliasNode)
            {
              List<XmlNode> aliases = null;

              string aliasKey = aliasNode.Attributes["name"].Value;

              if (!m_commandsAliasNodesLookup.TryGetValue (aliasKey, out aliases))
              {
                aliases = new List<XmlNode> ();
              }

              aliases.Add (commandNode);

              m_commandsAliasNodesLookup[aliasKey] = aliases;
            }
          }
        }
      }
    }

    //
    // Generate fast-lookup of 'extensions' nodes.
    //

    if (m_extensionNodes.Count > 0)
    {
      foreach (XmlNode extensionNode in m_extensionNodes)
      {
        XmlNode extensionSupportedNode = extensionNode.Attributes.GetNamedItem ("supported");

        if ((extensionSupportedNode != null) && (!IsApiSupported (extensionSupportedNode.Value)))
        {
          continue;
        }

        string extensionNodeName = extensionNode.Attributes["name"].Value;

        if (m_extensionNodesLookup.ContainsKey (extensionNodeName))
        {
          continue;
        }

        m_extensionNodesLookup.Add (extensionNodeName, extensionNode);
      }
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

    if (m_featureAndExtensionNodes.Count > 0)
    {
      foreach (var keypair in m_featureAndExtensionNodes)
      {
        XmlNode featureNode = keypair.Value;

        //
        // Multiple <require> tags can be nested in a feature/extension definition.  It's possible for these to also be api specific.
        //

        XmlNodeList requireNodes = featureNode.SelectNodes ("require");

        if (requireNodes.Count == 0)
        {
          continue;
        }

        foreach (XmlNode requireNode in requireNodes)
        {
          string api = m_api[0];

          XmlNode requireApiNode = requireNode.Attributes.GetNamedItem ("api");

          if (requireApiNode != null)
          {
            api = requireApiNode.Value;

            if (!IsApiSupported (requireApiNode.Value))
            {
              continue; // Skip non-supported APIs.
            }
          }

          //
          // Evaluate whether this feature is part of the 'base spec'.
          //

          XmlNode featureNumberNode = featureNode.Attributes.GetNamedItem ("number");

          bool baseSpecFeatureSet = false;

          if (featureNumberNode != null)
          {
            float version = m_apiBaseSpecVersion[api];

            if (float.TryParse (featureNumberNode.Value, out version))
            {
              baseSpecFeatureSet = version <= m_apiBaseSpecVersion[api];
            }
          }

          //
          // Collate 'enums' listed by required features/extensions.
          //

          {
            XmlNodeList requireEnumNodes = requireNode.SelectNodes ("enum");

            if (requireEnumNodes.Count == 0)
            {
              continue;
            }

            foreach (XmlNode enumNode in requireEnumNodes)
            {
              string enumNodeName = enumNode.Attributes["name"].Value;

              if (m_featureEnumNodesLookup.ContainsKey (enumNodeName))
              {
                continue;
              }

              m_featureEnumNodesLookup.Add (enumNodeName, enumNode);
            }
          }

          //
          // Collate 'commands' listed by required features/extensions.
          //

          {
            XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

            if (requireCommandNodes.Count == 0)
            {
              continue;
            }

            foreach (XmlNode commandNode in requireCommandNodes)
            {
              string commandNodeName = commandNode.Attributes["name"].Value;

              if (m_featureCommandNodesLookup.ContainsKey (commandNodeName))
              {
                continue;
              }

              m_featureCommandNodesLookup.Add (commandNodeName, commandNode);
            }
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
    //
    // 'FeatureSet' class; wraps 'features' and 'extension' identifiers.
    //

    WriteCommentDivider (writer);

    writer.Write (Environment.NewLine);

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

    if (m_featureAndExtensionNodes.Count > 0)
    {
      foreach (string key in m_featureAndExtensionNodes.Keys)
      {
        writer.WriteLine (string.Format ("  {0}{1},", "GLEW_", key));
      }
    }

    writer.WriteLine (string.Format ("  {0}{1}_{2}", "GLEW_", m_api[0].ToUpperInvariant (), "FeatureSetCount"));

    writer.WriteLine ("};");

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer);

    writer.Write (Environment.NewLine);

    //
    // Define function pointers to feature and extension functions (these are usually just exposed via pre-linked functions).
    //

    if (m_featureAndExtensionNodes.Count > 0)
    {
      HashSet<string> definedPrototypes = new HashSet<string> ();

      foreach (var keypair in m_featureAndExtensionNodes)
      {
        XmlNode featureNode = keypair.Value;

        string api = m_api[0];

        {
          XmlNode featureApiNode = featureNode.Attributes.GetNamedItem ("api");

          if (featureApiNode != null)
          {
            api = featureApiNode.Value;
          }
        }

        //
        // Multiple <require> tags can be nested in a feature/extension definition.  It's possible for these to also be api specific.
        //

        XmlNodeList requireNodes = featureNode.SelectNodes ("require");

        if (requireNodes.Count == 0)
        {
          continue;
        }

        foreach (XmlNode requireNode in requireNodes)
        {
          XmlNode requireApiNode = requireNode.Attributes.GetNamedItem ("api");

          if (requireApiNode != null)
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

          XmlNode featureNumberNode = featureNode.Attributes.GetNamedItem ("number");

          if (featureNumberNode != null)
          {
            float version = m_apiBaseSpecVersion[api];

            if (float.TryParse (featureNumberNode.Value, out version))
            {
              baseSpecFeatureSet = version <= m_apiBaseSpecVersion[api];
            }
          }

          //
          // Export code for defining available function/commands.
          //

          XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

          if (requireCommandNodes.Count == 0)
          {
            continue;
          }

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

            bool shouldExternC = !m_api[0].Equals ("wgl");

            if (baseSpecFeatureSet && shouldExternC)
            {
              commandFuncPointerBuilder.AppendFormat ("GLEW_EXTERN_C {0} {1} {2} {3} (", m_funcApiEntryPrefix, commandPrototype.returnType, m_funcApiEntryPostfix, commandPrototype.functionName);

              definedPrototypes.Add (commandPrototype.fullPrototype);
            }
            else if (baseSpecFeatureSet)
            {
              commandFuncPointerBuilder.AppendFormat ("GLEW_EXTERN {0} {1} {2} {3} (", m_funcApiEntryPrefix, commandPrototype.returnType, m_funcApiEntryPostfix, commandPrototype.functionName);

              definedPrototypes.Add (commandPrototype.fullPrototype);
            }
            else
            {
              string mangedFunctionPointer = string.Format ("PFN{0}PROC", commandPrototype.functionName.ToUpperInvariant ());

              commandFuncPointerBuilder.AppendFormat ("typedef {0} {1} ({2} {3}) /* {4} */ (", m_funcPointerApiEntryPrefix, commandPrototype.returnType, m_funcPointerApiEntryPostfix, mangedFunctionPointer, commandPrototype.functionName);
            }

            if (commandPrototype.paramNames.Count > 0)
            {
              for (int i = 0; i < commandPrototype.paramNames.Count; ++i)
              {
                string name = commandPrototype.paramNames[i];

                string type = commandPrototype.paramTypes[i];

                commandFuncPointerBuilder.AppendFormat ("{0} {1}, ", type, name);
              }

              if (commandFuncPointerBuilder.Length >= 2)
              {
                commandFuncPointerBuilder.Length -= 2; // strip trailing ", "
              }
            }

            commandFuncPointerBuilder.Append (')');

            commandFuncPointerBuilder.Replace ("  ", " ");

            string commandFuncPointer = commandFuncPointerBuilder.ToString ();

            writer.WriteLine (string.Format ("{0};", commandFuncPointer));
          }
        }
      }

      writer.Write (Environment.NewLine);
    }

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

    if (m_featureAndExtensionNodes.Count > 0)
    {
      HashSet<string> definedCommands = new HashSet<string> ();

      foreach (var keypair in m_featureAndExtensionNodes)
      {
        XmlNode featureNode = keypair.Value;

        string api = m_api[0];

        {
          XmlNode featureApiNode = featureNode.Attributes.GetNamedItem ("api");

          if (featureApiNode != null)
          {
            api = featureApiNode.Value;
          }
        }

        //
        // Multiple <require> tags can be nested in a feature/extension definition.  It's possible for these to also be api specific.
        //

        XmlNodeList requireNodes = featureNode.SelectNodes ("require");

        if (requireNodes.Count == 0)
        {
          continue;
        }

        foreach (XmlNode requireNode in requireNodes)
        {
          XmlNode requireApiNode = requireNode.Attributes.GetNamedItem ("api");

          if (requireApiNode != null)
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

          XmlNode featureNumberNode = featureNode.Attributes.GetNamedItem ("number");

          bool baseSpecFeatureSet = false;

          if (featureNumberNode != null)
          {
            float version = m_apiBaseSpecVersion[api];

            if (float.TryParse (featureNumberNode.Value, out version))
            {
              baseSpecFeatureSet = version <= m_apiBaseSpecVersion[api];
            }
          }

          //
          // Export code for defining local function/command cached address storage.
          //

          XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

          if (requireCommandNodes.Count == 0)
          {
            continue;
          }

          //writer.Write (Environment.NewLine);

          //writer.WriteLine (string.Format ("      // {0}", keypair.Key));

          foreach (XmlNode commandNode in requireCommandNodes)
          {
            string command = commandNode.Attributes["name"].Value;

            if (definedCommands.Contains (command))
            {
              continue;
            }

            if (baseSpecFeatureSet)
            {
              continue; // Skip any base spec versions.
            }

            definedCommands.Add (command);

            string mangedFunctionPointer = string.Format ("PFN{0}PROC", command.ToUpperInvariant ());

            writer.WriteLine (string.Format ("      {0} m_{1};", mangedFunctionPointer, command));
          }
        }
      }
    }

    writer.WriteLine ($"    }};");

    //
    // Standard GLEW header API.
    //

    writer.Write (Environment.NewLine);

    ExportHppPublicGlewApi (writer);

    writer.Write (Environment.NewLine);

    //WriteCommentDivider (writer, 4);

    //
    // Internal GLEW-managed API functions (seeded from features and extension specifications).
    //

#if false
  writer.Write (Environment.NewLine);

  writer.WriteLine (string.Format ("  public:"));

  writer.Write (Environment.NewLine);

  if (featureAndExtensionNodes.Count > 0)
  {
    HashSet<string> definedCommands = new HashSet<string> ();

    foreach (var keypair in featureAndExtensionNodes)
    {
      XmlNode featureNode = keypair.Value;

      //
      // Multiple <require> tags can be nested in a feature/extension definition.  It's possible for these to also be api specific.
      //

      XmlNodeList requireNodes = featureNode.SelectNodes ("require");

      if (requireNodes.Count == 0)
      {
        continue;
      }

      foreach (XmlNode requireNode in requireNodes)
      {
        string api = m_api [0];

        XmlNode requireApiNode = requireNode.Attributes.GetNamedItem ("api");

        if (requireApiNode != null)
        {
          api = requireApiNode.Value;

          if (!IsApiSupported (requireApiNode.Value))
          {
            continue; // Skip non-supported APIs.
          }
        }

        //
        // Evaluate whether this feature is part of the 'base spec'.
        //

        XmlNode featureNumberNode = featureNode.Attributes.GetNamedItem ("number");

        bool baseSpecFeatureSet = false;

        if (featureNumberNode != null)
        {
          float version = m_apiBaseSpecVersion [api];

          if (float.TryParse (featureNumberNode.Value, out version))
          {
            baseSpecFeatureSet = version <= m_apiBaseSpecVersion [api];
          }
        }

        //
        // Export code for defining local pass-through prototypes.
        //

        XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

        if (requireCommandNodes.Count == 0)
        {
          continue;
        }

        foreach (XmlNode commandNode in requireCommandNodes)
        {
          string command = commandNode.Attributes ["name"].Value;

          if (definedCommands.Contains (command))
          {
            continue;
          }

          definedCommands.Add (command);

          if (baseSpecFeatureSet)
          {
            continue; // Skip any base spec versions.
          }

          string returnType;

          Dictionary<string, string> parameters;

          string prototype = GetFullCommandPrototype (command, out returnType, out parameters);


          //writer.WriteLine (string.Format ("    static {0};", prototype));

          prototype = prototype.Replace (command, "GLEW_" + command);

          writer.WriteLine (string.Format ("    friend {0};", prototype));
        }
      }
    }
  }
#endif

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

    /*writer.Write (Environment.NewLine);

    if (m_featureAndExtensionNodes.Count > 0)
    {
      foreach (string key in m_featureAndExtensionNodes.Keys)
      {
        writer.WriteLine (string.Format ("#define {0}{1} glew::{2}::{0}{1}", "GLEW_", key, m_api [0]));
      }
    }*/

    writer.Write (Environment.NewLine);

    if (m_featureAndExtensionNodes.Count > 0)
    {
      HashSet<string> definedCommands = new HashSet<string> ();

      HashSet<string> exportedCommands = new HashSet<string> ();

      foreach (var keypair in m_featureAndExtensionNodes)
      {
        XmlNode featureNode = keypair.Value;

        //
        // Multiple <require> tags can be nested in a feature/extension definition.  It's possible for these to also be api specific.
        //

        XmlNodeList requireNodes = featureNode.SelectNodes ("require");

        if (requireNodes.Count == 0)
        {
          continue;
        }

        foreach (XmlNode requireNode in requireNodes)
        {
          string api = m_api[0];

          XmlNode requireApiNode = requireNode.Attributes.GetNamedItem ("api");

          if (requireApiNode != null)
          {
            api = requireApiNode.Value;

            if (!IsApiSupported (requireApiNode.Value))
            {
              continue; // Skip non-supported APIs.
            }
          }

          //
          // Evaluate whether this feature is part of the 'base spec'.
          //

          XmlNode featureNumberNode = featureNode.Attributes.GetNamedItem ("number");

          bool baseSpecFeatureSet = false;

          if (featureNumberNode != null)
          {
            float version = m_apiBaseSpecVersion[api];

            if (float.TryParse (featureNumberNode.Value, out version))
            {
              baseSpecFeatureSet = version <= m_apiBaseSpecVersion[api];
            }
          }

          //
          // Export code to #define pass-through prototypes to non-base spec functions.
          //

          XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

          if (requireCommandNodes.Count == 0)
          {
            continue;
          }

          StringBuilder commandFuncBuilder = new StringBuilder ();

          foreach (XmlNode commandNode in requireCommandNodes)
          {
            string command = commandNode.Attributes["name"].Value;

            if (definedCommands.Contains (command))
            {
              continue;
            }

            definedCommands.Add (command);

            if (baseSpecFeatureSet)
            {
              continue; // Skip any base spec versions.
            }

            CommandPrototype commandPrototype = GetCommandPrototype (command);

            commandFuncBuilder.Clear ();

            commandFuncBuilder.AppendFormat ("GLEW_API {0} GLEW_APIENTRY _glew_{1}_{2} (", commandPrototype.returnType, m_api[0], command);

            if (commandPrototype.paramNames.Count > 0)
            {
              for (int i = 0; i < commandPrototype.paramNames.Count; ++i)
              {
                string type = commandPrototype.paramTypes[i];

                string name = commandPrototype.paramNames[i];

                commandFuncBuilder.AppendFormat ("{0} {1}, ", type, name);
              }

              if (commandFuncBuilder.Length >= 2)
              {
                commandFuncBuilder.Length -= 2; // strip trailing ", "
              }
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

            exportedCommands.Add (command);
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

    writer.WriteLine (string.Format ("    static void SetConfig (glew::{0}::DeviceConfig &deviceConfig)", m_api[0]));

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

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer);

    writer.Write (Environment.NewLine);

    //
    // Collate feature and extension nodes together; as this can signifantly improve code re-use later.
    //

    Dictionary<string, XmlNode> featureAndExtensionNodes = new Dictionary<string, XmlNode> ();

    foreach (var keypair in m_featureNodesLookup)
    {
      if (!featureAndExtensionNodes.ContainsKey (keypair.Key))
      {
        featureAndExtensionNodes.Add (keypair.Key, keypair.Value);
      }
    }

    foreach (var keypair in m_extensionNodesLookup)
    {
      if (!featureAndExtensionNodes.ContainsKey (keypair.Key))
      {
        featureAndExtensionNodes.Add (keypair.Key, keypair.Value);
      }
    }

    //
    // Feature and extension function definitions.
    //

    if (featureAndExtensionNodes.Count > 0)
    {
      Dictionary<string, List<XmlNode>> duplicatePrototypeRequireNodes = new Dictionary<string, List<XmlNode>> ();

      foreach (var keypair in featureAndExtensionNodes)
      {
        XmlNode featureNode = keypair.Value;

        string api = m_api[0];

        {
          XmlNode featureApiNode = featureNode.Attributes.GetNamedItem ("api");

          if (featureApiNode != null)
          {
            api = featureApiNode.Value;
          }
        }

        //
        // Multiple <require> tags can be nested in a feature/extension definition.  It's possible for these to also be api specific.
        //

        XmlNodeList requireNodes = featureNode.SelectNodes ("require");

        if (requireNodes.Count == 0)
        {
          continue;
        }

        foreach (XmlNode requireNode in requireNodes)
        {
          XmlNode requireApiNode = requireNode.Attributes.GetNamedItem ("api");

          if (requireApiNode != null)
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

          XmlNode featureNumberNode = featureNode.Attributes.GetNamedItem ("number");

          bool baseSpecFeatureSet = false;

          if (featureNumberNode != null)
          {
            float version = m_apiBaseSpecVersion[api];

            if (float.TryParse (featureNumberNode.Value, out version))
            {
              baseSpecFeatureSet = version <= m_apiBaseSpecVersion[api];
            }
          }

          //
          // Export code for defining the pass-through local-scope GL functions.
          //

          XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

          if (requireCommandNodes.Count == 0)
          {
            continue;
          }

          foreach (XmlNode commandNode in requireCommandNodes)
          {
            string command = commandNode.Attributes["name"].Value;

            /*if (baseSpecFeatureSet)
            {
              continue; // Skip any base spec versions.
            }*/

            List<XmlNode> prototypeRequireNodes;

            if (!duplicatePrototypeRequireNodes.TryGetValue (command, out prototypeRequireNodes))
            {
              prototypeRequireNodes = new List<XmlNode> ();
            }

            prototypeRequireNodes.Add (requireNode);

            duplicatePrototypeRequireNodes[command] = prototypeRequireNodes;

#if false
          bool voidFunction = (commandPrototype.returnType.Contains ("void") && !commandPrototype.returnType.Contains ("*"));

          StringBuilder paramBuilder = new StringBuilder ();

          if (commandPrototype.paramNames.Count > 0)
          {
            for (int i = 0; i < commandPrototype.paramNames.Count; ++i)
            {
              string type = commandPrototype.paramTypes [i];

              string name = commandPrototype.paramNames [i];

              paramBuilder.AppendFormat ("{0} {1}, ", type, name);
            }

            if (paramBuilder.Length >= 2)
            {
              paramBuilder.Length -= 2; // strip trailing ", "
            }
          }

          string prototypeParameters = paramBuilder.ToString ();

          //
          // If the prototype contains non-Khronos standard 'const GLchar **', add a passthrough to accept 'const GLchar *const*'.
          //

#if false
          if (prototypeParameters.Contains ("const GLchar **"))
          {
            //
            // Clear and re-evaluate pass-through parameters.
            //

            paramBuilder.Clear ();

            if (commandPrototype.paramNames.Count > 0)
            {
              for (int i = 0; i < commandPrototype.paramNames.Count; ++i)
              {
                if (commandPrototype.paramTypes [i].Equals ("const GLchar **"))
                {
                  paramBuilder.AppendFormat ("({0}) ", commandPrototype.paramTypes [i]);
                }

                string param = commandPrototype.paramNames [i];

                int arrayOffset = param.IndexOf ('[');

                if (arrayOffset != -1)
                {
                  param = param.Substring (0, arrayOffset);
                }

                paramBuilder.Append (param + ", ");
              }

              if (paramBuilder.Length >= 2)
              {
                paramBuilder.Length -= 2; // strip trailing ", "
              }
            }

            string khronosStandardParameters  = prototypeParameters.Replace ("const GLchar **", "const GLchar *const*");

            writer.Write (Environment.NewLine);

            writer.WriteLine (string.Format ("{0} _glew_{1}_{2} ({3})", commandPrototype.returnType, m_api [0], commandPrototype.functionName, khronosStandardParameters));

            writer.WriteLine ("{");

            writer.Write (string.Format ("  {0}", (voidFunction ? "" : "return ")));

            writer.WriteLine (string.Format ("_glew_{1}_{2} ({3});", commandPrototype.returnType, m_api [0], commandPrototype.functionName, paramBuilder.ToString ()));

            writer.WriteLine ("}");

            writer.Write (Environment.NewLine);

            WriteCommentDivider (writer);
          }
#endif

          //
          // Clear and re-evaluate pass-through parameters.
          //

          paramBuilder.Clear ();

          if (commandPrototype.paramNames.Count > 0)
          {
            for (int i = 0; i < commandPrototype.paramNames.Count; ++i)
            {
              string param = commandPrototype.paramNames [i];

              int arrayOffset = param.IndexOf ('[');

              if (arrayOffset != -1)
              {
                param = param.Substring (0, arrayOffset);
              }

              paramBuilder.Append (param + ", ");
            }

            if (paramBuilder.Length >= 2)
            {
              paramBuilder.Length -= 2; // strip trailing ", "
            }
          }

          writer.WriteLine (Environment.NewLine);

          writer.WriteLine (string.Format ("{0} _glew_{1}_{2} ({3})", commandPrototype.returnType, m_api [0], commandPrototype.functionName, prototypeParameters));

          writer.WriteLine ("{");

          writer.WriteLine (string.Format ("  bool prototypeCalled = false;"));

          writer.WriteLine (string.Format ("  const glew::{0}::DeviceConfig &{0}Config = glew::{0}::GetConfig ();", m_api [0]));

          string feature = keypair.Key;

          writer.WriteLine (string.Format ("  // {0} - {1}", feature, commandPrototype.functionName));

          writer.WriteLine (string.Format ("  if (!prototypeCalled && {0}Config.m_featureSupported [GLEW_{1}] && {0}Config.m_{2})", m_api [0], feature, commandPrototype.functionName));

          writer.WriteLine ("  {");

          writer.WriteLine (string.Format ("    prototypeCalled = true;"));

          writer.Write (string.Format ("    {0}", (voidFunction ? "" : "return ")));

          writer.WriteLine (string.Format ("{0}Config.m_{1} ({2});", m_api [0], commandPrototype.functionName, paramBuilder.ToString ()));

          writer.WriteLine ("  }");

          //
          // Aliases
          //

          List <XmlNode> aliasCommandNodes;

          if (m_commandsAliasNodesLookup.TryGetValue (command, out aliasCommandNodes) && (aliasCommandNodes.Count > 0))
          {
            foreach (XmlNode aliasCommandNode in aliasCommandNodes)
            {
              XmlNode commandProtoNameNode = aliasCommandNode.SelectSingleNode ("proto/name");

              string aliasCommand = commandProtoNameNode.InnerText;

              XmlNode aliasCommandRequireNode;

              if (m_featureCommandNodesLookup.TryGetValue (aliasCommand, out aliasCommandRequireNode))
              {
                XmlNode aliasCommandFeatureNode = aliasCommandRequireNode.ParentNode.ParentNode;

                string aliasFeature = aliasCommandFeatureNode.Attributes ["name"].Value;

                writer.WriteLine (string.Format ("  // {0} - {1}", aliasFeature, command));

                writer.WriteLine (string.Format ("  if (!prototypeCalled && {0}Config.m_featureSupported [GLEW_{1}] && {0}Config.m_{2})", m_api [0], aliasFeature, aliasCommand));

                writer.WriteLine ("  {");

                writer.WriteLine (string.Format ("    prototypeCalled = true;"));

                writer.WriteLine (string.Format ("    {0}", (voidFunction ? "" : "return ")));

                //
                // Sometimes aliases use slightly modified prototypes, so we need to manage casts.
                //

                CommandPrototype aliasPrototype = GetCommandPrototype (aliasCommand);

                paramBuilder.Clear ();

                if (!aliasPrototype.returnType.Equals (aliasPrototype.returnType))
                {
                  writer.Write (string.Format ("({0}) ", commandPrototype.returnType)); // original return type
                }

                if (aliasPrototype.paramNames.Count > 0)
                {
                  for (int i = 0; i < aliasPrototype.paramNames.Count; ++i)
                  {
                    if (!aliasPrototype.paramTypes [i].Equals (commandPrototype.paramTypes [i]))
                    {
                      paramBuilder.AppendFormat ("({0}) ", aliasPrototype.paramTypes [i]);
                    }

                    string param = commandPrototype.paramNames [i]; // original param name

                    int arrayOffset = param.IndexOf ('[');

                    if (arrayOffset != -1)
                    {
                      param = param.Substring (0, arrayOffset);
                    }

                    paramBuilder.Append (param + ", ");
                  }

                  if (paramBuilder.Length >= 2)
                  {
                    paramBuilder.Length -= 2; // strip trailing ", "
                  }
                }

                writer.WriteLine (string.Format ("{0}Config.m_{1} ({2});", m_api [0], aliasPrototype.functionName, paramBuilder.ToString ()));

                writer.WriteLine ("  }");
              }
            }
          }

          writer.WriteLine ("  GLEW_ASSERT (prototypeCalled);");

          if (!voidFunction)
          {
            writer.WriteLine (string.Format ("  return (({0})0);", commandPrototype.returnType));
          }

          writer.WriteLine ("}");

          writer.Write (Environment.NewLine);

          WriteCommentDivider (writer);
#endif
          }
        }
      }

      foreach (var prototypeRequireNodes in duplicatePrototypeRequireNodes)
      {
        string command = prototypeRequireNodes.Key;

        //
        // Evaluate whether this feature should be included, as isn't part of the 'base spec'.
        //

        string api = m_api[0];

        bool baseSpecFeatureSet = false;

        foreach (XmlNode requireNode in prototypeRequireNodes.Value)
        {
          XmlNode featureNode = requireNode.ParentNode;

          {
            XmlNode featureApiNode = featureNode.Attributes.GetNamedItem ("api");

            if (featureApiNode != null)
            {
              api = featureApiNode.Value;
            }
          }

          XmlNode featureNumberNode = featureNode.Attributes.GetNamedItem ("number");

          if (featureNumberNode != null)
          {
            float version = m_apiBaseSpecVersion[api];

            if (float.TryParse (featureNumberNode.Value, out version))
            {
              baseSpecFeatureSet |= version <= m_apiBaseSpecVersion[api];
            }
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

        if (commandPrototype.paramNames.Count > 0)
        {
          for (int i = 0; i < commandPrototype.paramNames.Count; ++i)
          {
            string type = commandPrototype.paramTypes[i];

            string name = commandPrototype.paramNames[i];

            paramBuilder.AppendFormat ("{0} {1}, ", type, name);
          }

          if (paramBuilder.Length >= 2)
          {
            paramBuilder.Length -= 2; // strip trailing ", "
          }
        }

        writer.WriteLine (string.Format ("{0} _glew_{1}_{2} ({3})", commandPrototype.returnType, m_api[0], commandPrototype.functionName, paramBuilder.ToString ()));

        writer.WriteLine ("{");

        writer.WriteLine (string.Format ("  bool prototypeCalled = false;"));

        writer.WriteLine (string.Format ("  const glew::{0}::DeviceConfig &{0}Config = glew::{0}::GetConfig ();", m_api[0]));

        bool voidFunction = (commandPrototype.returnType.Equals ("void", StringComparison.InvariantCultureIgnoreCase) && !commandPrototype.returnType.Contains ("*"));

        if (!voidFunction)
        {
          writer.WriteLine (string.Format ("  {0} result = (({0})0);", commandPrototype.returnType));
        }

        if (m_api[0].Equals ("gl") || m_api[0].Equals ("gles"))
        {
          writer.WriteLine ("#if GLEW_GL_PRE_ERROR_CHECK");

          writer.WriteLine ("  GLEW_ASSERT (glGetError () == GL_NO_ERROR);");

          writer.WriteLine ("#endif");
        }
        else if (m_api[0].Equals ("egl"))
        {
          writer.WriteLine ("#if GLEW_EGL_PRE_ERROR_CHECK");

          writer.WriteLine ("  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);");

          writer.WriteLine ("#endif");
        }

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

          if (commandPrototype.paramNames.Count > 0)
          {
            for (int i = 0; i < commandPrototype.paramNames.Count; ++i)
            {
              string param = commandPrototype.paramNames[i];

              int arrayOffset = param.IndexOf ('[');

              if (arrayOffset != -1)
              {
                param = param.Substring (0, arrayOffset);
              }

              paramBuilder.Append (param + ", ");
            }

            if (paramBuilder.Length >= 2)
            {
              paramBuilder.Length -= 2; // strip trailing ", "
            }
          }

          writer.WriteLine (string.Format ("{0}Config.m_{1} ({2});", m_api[0], commandPrototype.functionName, paramBuilder.ToString ()));

          writer.WriteLine ("  }");
        }

        List<XmlNode> aliasCommandNodes;

        if (m_commandsAliasNodesLookup.TryGetValue (command, out aliasCommandNodes) && (aliasCommandNodes.Count > 0))
        {
          foreach (XmlNode aliasCommandNode in aliasCommandNodes)
          {
            XmlNode commandProtoNameNode = aliasCommandNode.SelectSingleNode ("proto/name");

            string aliasCommand = commandProtoNameNode.InnerText;

            CommandPrototype aliasPrototype = GetCommandPrototype (aliasCommandNode);

            XmlNode aliasCommandRequireNode;

            if (m_featureCommandNodesLookup.TryGetValue (aliasCommand, out aliasCommandRequireNode))
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

              if (aliasPrototype.paramNames.Count > 0)
              {
                for (int i = 0; i < aliasPrototype.paramNames.Count; ++i)
                {
                  if (!aliasPrototype.paramTypes[i].Equals (commandPrototype.paramTypes[i]))
                  {
                    paramBuilder.AppendFormat ("({0}) ", aliasPrototype.paramTypes[i]);
                  }

                  string param = commandPrototype.paramNames[i]; // original param name

                  int arrayOffset = param.IndexOf ('[');

                  if (arrayOffset != -1)
                  {
                    param = param.Substring (0, arrayOffset);
                  }

                  paramBuilder.Append (param + ", ");
                }

                if (paramBuilder.Length >= 2)
                {
                  paramBuilder.Length -= 2; // strip trailing ", "
                }
              }

              writer.WriteLine (string.Format ("{0}Config.m_{1} ({2});", m_api[0], aliasPrototype.functionName, paramBuilder.ToString ()));

              writer.WriteLine ("  }");
            }
          }
        }

        writer.WriteLine ("  GLEW_ASSERT (prototypeCalled);");

        if (m_api[0].Equals ("gl") || m_api[0].Equals ("gles"))
        {
          writer.WriteLine ("#if GLEW_GL_POST_ERROR_CHECK");

          writer.WriteLine ("  GLEW_ASSERT (glGetError () == GL_NO_ERROR);");

          writer.WriteLine ("#endif");
        }
        else if (m_api[0].Equals ("egl"))
        {
          writer.WriteLine ("#if GLEW_EGL_POST_ERROR_CHECK");

          writer.WriteLine ("  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);");

          writer.WriteLine ("#endif");
        }

        if (!voidFunction)
        {
          writer.WriteLine (string.Format ("  return result;", commandPrototype.returnType));
        }

        writer.WriteLine ("}");

        writer.Write (Environment.NewLine);

        WriteCommentDivider (writer);

        writer.Write (Environment.NewLine);
      }
    }

    writer.WriteLine (string.Format ("bool glew::IsSupported (GLEW_{0}_FeatureSet feature)", m_api[0].ToUpperInvariant ()));

    writer.WriteLine ("{");

    writer.WriteLine (string.Format ("  return glew::{0}::IsSupported (feature);", m_api[0]));

    writer.WriteLine ("}");

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer);
  }

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  protected bool IsApiSupported (string apiList)
  {
    string[] queriedApis = apiList.Split (new char[] { '|' }, StringSplitOptions.RemoveEmptyEntries);

    for (int i = 0; i < queriedApis.Length; ++i)
    {
      foreach (string api in m_api)
      {
        if (queriedApis[i].Equals (api))
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
    XmlNode commandNode;

    if (m_commandsNodesLookup.TryGetValue (command, out commandNode))
    {
      return GetCommandPrototype (commandNode);
    }

    return null;
  }

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  protected CommandPrototype GetCommandPrototype (XmlNode commandNode)
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

  protected void WriteCommentDivider (StreamWriter writer, int indentPadding = 0, int linePaddingTop = 0, int linePaddingBottom = 0)
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
