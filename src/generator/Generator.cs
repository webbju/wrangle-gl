////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Xml;

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

    public Generator (string filename, string [] [] apiSpec)
      : base ()
    {
      m_filename = filename;

      m_api = new string [apiSpec.Length];

      for (int i = 0; i < apiSpec.Length; ++i)
      {
        m_api [i] = apiSpec [i] [0];

        float baseApiVersion;

        float.TryParse (apiSpec [i] [1], out baseApiVersion);

        m_apiBaseSpecVersion.Add (m_api [i], baseApiVersion);
      }

      Load (filename);

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
            string enumNodeName = enumNode.Attributes ["name"].Value;

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

          string featureNodeName = featureNode.Attributes ["name"].Value;

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

                string aliasKey = aliasNode.Attributes ["name"].Value;

                if (!m_commandsAliasNodesLookup.TryGetValue (aliasKey, out aliases))
                {
                  aliases = new List<XmlNode> ();
                }

                aliases.Add (commandNode);

                m_commandsAliasNodesLookup [aliasKey] = aliases;
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

          string extensionNodeName = extensionNode.Attributes ["name"].Value;

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
                string enumNodeName = enumNode.Attributes ["name"].Value;

                if (!m_featureEnumNodesLookup.ContainsKey (enumNodeName))
                {
                  m_featureEnumNodesLookup.Add (enumNodeName, enumNode);
                }
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
                string commandNodeName = commandNode.Attributes ["name"].Value;

                if (!m_featureCommandNodesLookup.ContainsKey (commandNodeName))
                {
                  m_featureCommandNodesLookup.Add (commandNodeName, commandNode);
                }
              }
            }
          }
        }
      }
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public virtual void ExportHpp (ref StreamWriter writer)
    {
      // 
      // 'FeatureSet' class; wraps 'features' and 'extension' identifiers.
      // 

      WriteCommentDivider (ref writer);

      writer.Write (@"
#if defined(__GNUC__)
#if ((__GNUC__ * 10000) + (__GNUC_MINOR__ * 100) + __GNUC_PATCHLEVEL__) >= 40600 
#pragma GCC diagnostic push // push/pop not available before GCC 4.6
#endif
#pragma GCC diagnostic ignored ""-Wunused-function""
#endif

");

      WriteCommentDivider (ref writer);

      writer.Write (string.Format ("\nenum GLEW_{0}_FeatureSet\n{{\n", m_api [0].ToUpperInvariant ()));

      if (m_featureAndExtensionNodes.Count > 0)
      {
        foreach (string key in m_featureAndExtensionNodes.Keys)
        {
          writer.Write (string.Format ("  {0}{1},\n", "GLEW_", key));
        }
      }

      writer.Write (string.Format ("  {0}{1}_{2}\n", "GLEW_", m_api [0].ToUpperInvariant (), "FeatureSetCount"));

      writer.Write ("};\n\n");

      WriteCommentDivider (ref writer);

      writer.Write ("\n");

      // 
      // Define function pointers to feature and extension functions (these are usually just exposed via pre-linked functions).
      // 

      if (m_featureAndExtensionNodes.Count > 0)
      {
        HashSet<string> definedPrototypes = new HashSet<string> ();

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

            bool baseSpecFeatureSet = false;

            XmlNode featureNumberNode = featureNode.Attributes.GetNamedItem ("number");

            if (featureNumberNode != null)
            {
              float version = m_apiBaseSpecVersion [api];

              if (float.TryParse (featureNumberNode.Value, out version))
              {
                baseSpecFeatureSet = version <= m_apiBaseSpecVersion [api];
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

              string command = commandNode.Attributes ["name"].Value;

              string mangedFunctionPointer = string.Format ("PFN{0}PROC", command.ToUpperInvariant ());

              string returnType;

              List<string> paramTypes;

              List<string> paramNames;

              string prototype = GetFullCommandPrototype (command, out returnType, out paramTypes, out paramNames);

              if (definedPrototypes.Contains (prototype))
              {
                continue; // Skip any duplicate prototypes.
              }

              definedPrototypes.Add (prototype);

              bool shouldExternC = !m_api [0].Equals ("wgl");

              if (baseSpecFeatureSet && shouldExternC)
              {
                commandFuncPointerBuilder.AppendFormat ("GLEW_EXTERN_C {0} {1} {2} {3} (", m_funcApiEntryPrefix, returnType, m_funcApiEntryPostfix, command);
              }
              else if (baseSpecFeatureSet)
              {
                commandFuncPointerBuilder.AppendFormat ("GLEW_EXTERN {0} {1} {2} {3} (", m_funcApiEntryPrefix, returnType, m_funcApiEntryPostfix, command);
              }
              else
              {
                commandFuncPointerBuilder.AppendFormat ("typedef {0} {1} ({2} {3}) /* {4} */ (", m_funcPointerApiEntryPrefix, returnType, m_funcPointerApiEntryPostfix, mangedFunctionPointer, command);
              }

              if (paramNames.Count > 0)
              {
                for (int i = 0; i < paramNames.Count; ++i)
                {
                  string name = paramNames [i];

                  string type = paramTypes [i];

                  commandFuncPointerBuilder.AppendFormat ("{0} {1}, ", type, name);
                }

                if (commandFuncPointerBuilder.Length >= 2)
                {
                  commandFuncPointerBuilder.Length -= 2; // strip trailing ", "
                }
              }

              commandFuncPointerBuilder.Append (")");

              commandFuncPointerBuilder.Replace ("  ", " ");

              writer.Write (string.Format ("{0};\n", commandFuncPointerBuilder.ToString ()));
            }
          }
        }

        writer.Write ("\n");
      }

      WriteCommentDivider (ref writer);

      // 
      // 'DeviceConfig' class: Default API.
      // 

      writer.Write (string.Format ("\nnamespace glew\n{{\n\n", m_api [0]));

      WriteCommentDivider (ref writer, 2);

      writer.Write (string.Format ("\n  class {0}\n  {{\n  public:\n\n", m_api [0]));

      WriteCommentDivider (ref writer, 4);

      writer.Write (string.Format ("\n    class DeviceConfig\n    {{\n"));

      writer.Write (string.Format ("    public:\n\n"));

      writer.Write (string.Format ("      bool m_featureSupported [{0}{1}_{2}];\n\n", "GLEW_", m_api [0].ToUpperInvariant (), "FeatureSetCount"));

      // 
      // 'DeviceConfig' class: Feature and extension function prototypes.
      // 

      if (m_featureAndExtensionNodes.Count > 0)
      {
        HashSet<string> definedCommands = new HashSet<string> ();

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
            // Export code for defining local function/command cached address storage.
            // 

            XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

            if (requireCommandNodes.Count == 0)
            {
              continue;
            }

            //writer.Write (string.Format ("\n      // {0}\n", keypair.Key));

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

              string mangedFunctionPointer = string.Format ("PFN{0}PROC", command.ToUpperInvariant ());

              writer.Write (string.Format ("      {0} m_{1};\n", mangedFunctionPointer, command));
            }
          }
        }
      }

      writer.Write ("    };\n\n");

      // 
      // Standard GLEW header API.
      // 

      WriteCommentDivider (ref writer, 4);

      ExportHppPublicGlewApi (ref writer);

      //WriteCommentDivider (ref writer, 4);

      // 
      // Internal GLEW-managed API functions (seeded from features and extension specifications).
      // 

#if false
      writer.Write (string.Format ("\n  public:\n\n"));

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


              //writer.Write (string.Format ("    static {0};\n", prototype));

              prototype = prototype.Replace (command, "GLEW_" + command);

              writer.Write (string.Format ("    friend {0};\n", prototype));
            }
          }
        }
      }
#endif

      writer.Write (string.Format ("  }};\n\n"));

      WriteCommentDivider (ref writer, 2);

      writer.Write (string.Format ("\n  bool IsSupported (GLEW_{1}_FeatureSet feature);\n\n", m_api [0], m_api [0].ToUpperInvariant ()));

      WriteCommentDivider (ref writer, 2);

      writer.Write (string.Format ("\n}}\n\n"));

      WriteCommentDivider (ref writer, 0);

      // 
      // Pre-processor pass-through defines for redirecting functions to glew alternatives.
      // 

      /*writer.Write ("\n");

      if (m_featureAndExtensionNodes.Count > 0)
      {
        foreach (string key in m_featureAndExtensionNodes.Keys)
        {
          writer.Write (string.Format ("#define {0}{1} glew::{2}::{0}{1}\n", "GLEW_", key, m_api [0]));
        }
      }*/

      writer.Write ("\n");

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
            // Export code to #define pass-through prototypes to non-base spec functions.

            XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

            if (requireCommandNodes.Count == 0)
            {
              continue;
            }

            StringBuilder commandFuncBuilder = new StringBuilder ();

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

              List<string> paramTypes;

              List<string> paramNames;

              string prototype = GetFullCommandPrototype (command, out returnType, out paramTypes, out paramNames);

              commandFuncBuilder.Clear ();

              commandFuncBuilder.AppendFormat ("GLEW_EXTERN_C {0} _glew_{1}_{2} (", returnType, m_api [0], command);

              if (paramNames.Count > 0)
              {
                for (int i = 0; i < paramNames.Count; ++i)
                {
                  string type = paramTypes [i];

                  string name = paramNames [i];

                  commandFuncBuilder.AppendFormat ("{0} {1}, ", type, name);
                }

                if (commandFuncBuilder.Length >= 2)
                {
                  commandFuncBuilder.Length -= 2; // strip trailing ", "
                }
              }

              commandFuncBuilder.Append (")");

              commandFuncBuilder.Replace ("  ", " ");

              writer.Write (string.Format ("{0};\n", commandFuncBuilder.ToString ()));

              exportedCommands.Add (command);
            }
          }
        }

        writer.Write ("\n");

        WriteCommentDivider (ref writer, 0);

        writer.Write ("\n");

        foreach (string command in exportedCommands)
        {
          writer.Write (string.Format ("#define {0} _glew_{1}_{0}\n", command, m_api [0]));
        }
      }

      writer.Write ("\n");

      WriteCommentDivider (ref writer);

      writer.Write (@"
#ifdef __GNUC__
#if ((__GNUC__ * 10000) + (__GNUC_MINOR__ * 100) + __GNUC_PATCHLEVEL__) >= 40600 
#pragma GCC diagnostic pop // push/pop not available before GCC 4.6
#endif
#endif

");

      WriteCommentDivider (ref writer);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public virtual void ExportHppPublicGlewApi (ref StreamWriter writer)
    {
      writer.Write (string.Format ("\n  public:\n\n    static void Initialise ();\n\n", m_api [0]));

      writer.Write (string.Format ("    static void Deinitialise ();\n\n"));

      writer.Write (string.Format ("    static bool IsSupported (GLEW_{0}_FeatureSet feature) {{ return s_deviceConfig.m_featureSupported [feature]; }}\n\n", m_api [0].ToUpperInvariant ()));

      writer.Write (string.Format ("    static void SetConfig (glew::{0}::DeviceConfig &deviceConfig) {{ s_deviceConfig = deviceConfig; }}\n\n", m_api [0]));

      writer.Write (string.Format ("    static glew::{0}::DeviceConfig &GetConfig () {{ return s_deviceConfig; }}\n", m_api [0]));

      writer.Write (string.Format ("\n  protected:\n\n", m_api [0]));

      writer.Write (string.Format ("    static glew::{0}::DeviceConfig s_deviceConfig;\n\n", m_api [0]));
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public virtual void ExportCpp (ref StreamWriter writer)
    {
      writer.Write (string.Format ("#include <wrangle-{0}.h>\n\n", m_api [0]));

      WriteCommentDivider (ref writer);

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
        HashSet<string> definedPrototypes = new HashSet<string> ();

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
            // Export code for defining the pass-through local-scope GL functions.
            // 

            XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

            if (requireCommandNodes.Count == 0)
            {
              continue;
            }

            foreach (XmlNode commandNode in requireCommandNodes)
            {
              string returnType;

              List<string> paramTypes;

              List<string> paramNames;

              string command = commandNode.Attributes ["name"].Value;

              string prototype = GetFullCommandPrototype (command, out returnType, out paramTypes, out paramNames);

              if (definedPrototypes.Contains (prototype))
              {
                continue;
              }

              definedPrototypes.Add (prototype);

              if (baseSpecFeatureSet)
              {
                continue; // Skip any base spec versions.
              }

              bool voidFunction = (returnType.Contains ("void") && !returnType.Contains ("*"));

              StringBuilder paramBuilder = new StringBuilder ();

              if (paramNames.Count > 0)
              {
                for (int i = 0; i < paramNames.Count; ++i)
                {
                  string type = paramTypes [i];

                  string name = paramNames [i];

                  paramBuilder.AppendFormat ("{0} {1}, ", type, name);
                }

                if (paramBuilder.Length >= 2)
                {
                  paramBuilder.Length -= 2; // strip trailing ", "
                }
              }

              //writer.Write (string.Format ("\n#undef {0}\n", command));

              writer.Write (string.Format ("\n{0} _glew_{1}_{2} ({3})\n{{\n", returnType, m_api [0], command, paramBuilder.ToString ()));

              // 
              // Clear and re-evaluate pass-through parameters.
              // 

              paramBuilder.Clear ();

              if (paramNames.Count > 0)
              {
                for (int i = 0; i < paramNames.Count; ++i)
                {
                  string param = paramNames [i];

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

              writer.Write (string.Format ("  bool prototypeCalled = false;\n"));

              writer.Write (string.Format ("  const glew::{0}::DeviceConfig &{0}Config = glew::{0}::GetConfig ();\n", m_api [0], command));

              writer.Write (string.Format ("  // {0} - {1}\n", keypair.Key, command));

              writer.Write (string.Format ("  if (!prototypeCalled && {0}Config.m_{1})\n  {{\n", m_api [0], command));

              writer.Write (string.Format ("    prototypeCalled = true;\n"));

              writer.Write (string.Format ("    {0}", (voidFunction ? "" : "return ")));

              writer.Write (string.Format ("{0}Config.m_{1} ({2});\n  }}\n", m_api [0], command, paramBuilder.ToString ()));

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

                    writer.Write (string.Format ("  // {0} - {1}\n", aliasCommandFeatureNode.Attributes ["name"].Value, command));

                    writer.Write (string.Format ("  if (!prototypeCalled && {0}Config.m_{1})\n  {{\n", m_api [0], aliasCommand));

                    writer.Write (string.Format ("    prototypeCalled = true;\n"));

                    writer.Write (string.Format ("    {0}", (voidFunction ? "" : "return ")));

                    // 
                    // Sometimes aliases use slightly modified prototypes, so we need to manage casts.
                    // 

                    string aliasReturnType;

                    List<string> aliasParamTypes;

                    List<string> aliasParamNames;

                    string aliasPrototypex = GetFullCommandPrototype (aliasCommand, out aliasReturnType, out aliasParamTypes, out aliasParamNames);

                    paramBuilder.Clear ();

                    if (!returnType.Equals (aliasReturnType))
                    {
                      writer.Write (string.Format ("({0}) ", returnType)); // original return type
                    }

                    if (paramNames.Count > 0)
                    {
                      for (int i = 0; i < paramNames.Count; ++i)
                      {
                        if (!paramTypes [i].Equals (aliasParamTypes [i]))
                        {
                          paramBuilder.AppendFormat ("({0}) ", aliasParamTypes [i]);
                        }

                        string param = paramNames [i]; // original param name

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

                    writer.Write (string.Format ("{0}Config.m_{1} ({2});\n  }}\n", m_api [0], aliasCommand, paramBuilder.ToString ()));
                  }
                }
              }

              if (!voidFunction)
              {
                writer.Write (string.Format ("  return (({0})0);\n", returnType));
              }

              writer.Write ("}\n\n");

              WriteCommentDivider (ref writer);
            }
          }
        }
      }

      writer.Write (string.Format ("\nbool glew::IsSupported (GLEW_{1}_FeatureSet feature)\n{{\n  return glew::{0}::IsSupported (feature);\n}}\n\n", m_api [0], m_api [0].ToUpperInvariant ()));

      WriteCommentDivider (ref writer);
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

    protected string GetFullCommandPrototype (string command)
    {
      string returnType = null;

      List<string> paramTypes = null;

      List<string> paramNames = null;

      return GetFullCommandPrototype (command, out returnType, out paramTypes, out paramNames);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    protected string GetFullCommandPrototype (string command, out string returnType, out List<string> paramTypes, out List<string> paramNames)
    {
      XmlNode commandNode = null;

      returnType = null;

      paramTypes = null;

      paramNames = null;

      if (m_commandsNodesLookup.TryGetValue (command, out commandNode))
      {
        StringBuilder prototypeBuilder = new StringBuilder ();

        // 
        // Make an identical copy of the XML contents of component of the prototype/params.
        // 

        XmlNode protoNode = commandNode.SelectSingleNode ("proto");

        XmlNodeList protoParamNodes = commandNode.SelectNodes ("param");

        paramTypes = new List<string> ();

        paramNames = new List<string> ();

        {
          int protoNameIndex = protoNode.InnerXml.IndexOf ("<name>");

          string protoType = protoNode.InnerXml.Substring (0, protoNameIndex);

          protoType = protoType.Replace ("<ptype>", "");

          protoType = protoType.Replace ("</ptype>", "");

          returnType = protoType;

          string protoName = protoNode.InnerXml.Substring (protoNameIndex);

          protoName = protoName.Replace ("<name>", "");

          protoName = protoName.Replace ("</name>", "");

          prototypeBuilder.Append (protoType + " " + protoName);

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

          paramTypes.Add (paramType);

          paramNames.Add (paramName);

          if (i < (protoParamNodes.Count - 1))
          {
            prototypeBuilder.Append (", ");
          }
        }

        prototypeBuilder.Append (")");

        prototypeBuilder.Replace ("  ", " ");

        if (paramNames.Count != paramTypes.Count)
        {
          throw new InvalidOperationException ("Output names/types do not match.");
        }

        return prototypeBuilder.ToString ();
      }

      return string.Empty;
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    protected void WriteCommentDivider (ref StreamWriter writer, int whitespacePadding = 0)
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
