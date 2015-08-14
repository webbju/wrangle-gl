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

    protected readonly XmlNodeList m_typesNodes;

    protected readonly XmlNodeList m_enumsNodes;

    protected readonly XmlNodeList m_commandsNodes;

    protected readonly XmlNodeList m_featureNodes;

    protected readonly XmlNodeList m_extensionNodes;

    protected Dictionary<string, XmlNode> m_enumsNodesLookup = new Dictionary<string, XmlNode> ();

    protected Dictionary<string, XmlNode> m_commandsNodesLookup = new Dictionary<string, XmlNode> ();

    protected Dictionary<string, XmlNode> m_featureNodesLookup = new Dictionary<string, XmlNode> ();

    protected Dictionary<string, XmlNode> m_extensionNodesLookup = new Dictionary<string, XmlNode> ();

    protected string m_funcPointerApiEntryPrefix = "";

    protected string m_funcPointerApiEntryPostfix = "";

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public Generator (string filename, string [] api)
      : base ()
    {
      m_filename = filename;

      m_api = api;

      Load (filename);

      m_typesNodes = SelectNodes ("//registry/types");

      m_enumsNodes = SelectNodes ("//registry/enums");

      m_commandsNodes = SelectNodes ("//registry/commands");

      m_featureNodes = SelectNodes ("//registry/feature");

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
            XmlNode enumApiNode = enumNode.Attributes.GetNamedItem ("api");

            if ((enumApiNode != null) && (!IsApiSupported (enumApiNode.Value)))
            {
              continue;
            }

            string enumNodeName = enumNode.Attributes ["name"].Value;

            m_enumsNodesLookup.Add (enumNodeName, enumNode);
          }
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
            continue;
          }

          string featureNodeName = featureNode.Attributes ["name"].Value;

          m_featureNodesLookup.Add (featureNodeName, featureNode);
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

          m_extensionNodesLookup.Add (extensionNodeName, extensionNode);
        }
      }
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public virtual void ExportHpp (ref StreamWriter writer)
    {
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
      // Define function pointers to feature and extension functions (these are usually just exposed via pre-linked functions).
      // 

      if (featureAndExtensionNodes.Count > 0)
      {
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
            XmlNode requireApiNode = requireNode.Attributes.GetNamedItem ("api");

            if ((requireApiNode != null) && (!IsApiSupported (requireApiNode.Value)))
            {
              continue;
            }

            XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

            if (requireCommandNodes.Count == 0)
            {
              continue;
            }

            writer.Write (string.Format ("\n// {0}\n", keypair.Key));

            StringBuilder commandFuncPointerBuilder = new StringBuilder ();

            foreach (XmlNode commandNode in requireCommandNodes)
            {
              commandFuncPointerBuilder.Clear ();

              string command = commandNode.Attributes ["name"].Value;

              string mangedFunctionPointer = string.Format ("PFN{0}PROC", command.ToUpperInvariant ());

              string returnType;

              Dictionary<string, string> parameters;

              GetFullCommandPrototype (command, out returnType, out parameters);

              commandFuncPointerBuilder.AppendFormat ("typedef {0} {1} ({2} {3}) (", m_funcPointerApiEntryPrefix, returnType, m_funcPointerApiEntryPostfix, mangedFunctionPointer);

              if (parameters.Count > 0)
              {
                foreach (var parameter in parameters)
                {
                  string name = parameter.Key;

                  string type = parameter.Value;

                  commandFuncPointerBuilder.AppendFormat ("{0} {1}, ", type, name);
                }

                if (commandFuncPointerBuilder.Length >= 2)
                {
                  commandFuncPointerBuilder.Length -= 2; // strip trailing ", "
                }
              }

              commandFuncPointerBuilder.Append (")");

              writer.Write (string.Format ("{0};\n", commandFuncPointerBuilder.ToString ()));
            }
          }
        }

        writer.Write ("\n");
      }

      WriteCommentDivider (ref writer);

      // 
      // 'FeatureSet' class; wraps 'features' and 'extension' identifiers.
      // 

      writer.Write (string.Format ("\nnamespace glew\n{{\n  class {0}\n  {{\n  public:\n\n", m_api [0]));

      WriteCommentDivider (ref writer, 4);

      writer.Write ("\n    enum FeatureSet\n    {\n");

      if (featureAndExtensionNodes.Count > 0)
      {
        foreach (string key in featureAndExtensionNodes.Keys)
        {
          writer.Write (string.Format ("      {0}{1},\n", "GLEW_", key));
        }
      }

      writer.Write (string.Format ("      {0}{1}_{2}\n", "GLEW_", m_api [0].ToUpperInvariant (), "FeatureSetCount"));

      writer.Write ("    };\n\n");

      // 
      // 'DeviceState' class.
      // 

      WriteCommentDivider (ref writer, 4);

      writer.Write (string.Format ("\n    class DeviceState\n    {{\n"));

      writer.Write (string.Format ("    private:\n\n"));

      writer.Write (string.Format ("      bool m_featureSupported [glew::{0}::FeatureSet::{1}{2}_{3}];\n\n", m_api [0], "GLEW_", m_api [0].ToUpperInvariant (), "FeatureSetCount"));

      writer.Write (string.Format ("    public:\n\n"));

      writer.Write (string.Format ("      bool IsSupported (glew::{0}::FeatureSet feature);\n\n", m_api [0]));

      writer.Write (string.Format ("      bool IsSupported (const char *feature);\n\n"));

      // 
      // 'DeviceState' class
      // Feature and extension function prototypes.
      // 

      if (featureAndExtensionNodes.Count > 0)
      {
        HashSet<string> prototypes = new HashSet<string> ();

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
            XmlNode requireApiNode = requireNode.Attributes.GetNamedItem ("api");

            if ((requireApiNode != null) && (!IsApiSupported (requireApiNode.Value)))
            {
              continue;
            }

            XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

            if (requireCommandNodes.Count == 0)
            {
              continue;
            }

            //writer.Write (string.Format ("\n      // {0}\n", keypair.Key));

            foreach (XmlNode commandNode in requireCommandNodes)
            {
              string command = commandNode.Attributes ["name"].Value;

              if (!prototypes.Contains (command))
              {
                prototypes.Add (command);

                string mangedFunctionPointer = string.Format ("PFN{0}PROC", command.ToUpperInvariant ());

                writer.Write (string.Format ("      {0} m_{1};\n", mangedFunctionPointer, command));
              }
            }
          }
        }
      }

      writer.Write ("    };\n\n");

      WriteCommentDivider (ref writer, 4);

      // 
      // Standard GLEW header API.
      // 

      writer.Write (string.Format ("\n  public:\n\n    static void Initialise (glew::{0}::DeviceState *deviceState);\n\n", m_api [0]));

      writer.Write (string.Format ("    static void Deinitialise ();\n\n"));

      writer.Write (string.Format ("    static const glew::{0}::DeviceState *GetDeviceState () {{ return s_deviceState; }}\n", m_api [0]));

      writer.Write (string.Format ("\n  protected:\n\n", m_api [0]));

      writer.Write (string.Format ("    static glew::{0}::DeviceState *s_deviceState;\n\n", m_api [0]));

      WriteCommentDivider (ref writer, 4);

      // 
      // Internal GLEW-managed API functions (seeded from features and extension specifications).
      // 

      writer.Write (string.Format ("\n  public:\n\n"));

      if (featureAndExtensionNodes.Count > 0)
      {
        HashSet<string> prototypes = new HashSet<string> ();

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
            XmlNode requireApiNode = requireNode.Attributes.GetNamedItem ("api");

            if ((requireApiNode != null) && (!IsApiSupported (requireApiNode.Value)))
            {
              continue;
            }

            XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

            if (requireCommandNodes.Count == 0)
            {
              continue;
            }

            //writer.Write (string.Format ("\n    // {0}\n", keypair.Key));

            foreach (XmlNode commandNode in requireCommandNodes)
            {
              string command = commandNode.Attributes ["name"].Value;

              if (!prototypes.Contains (command))
              {
                prototypes.Add (command);

                writer.Write (string.Format ("    {0};\n", GetFullCommandPrototype (command)));
              }
            }
          }
        }
      }

      writer.Write (string.Format ("  }};\n}}\n\n"));

      WriteCommentDivider (ref writer, 0);

      // 
      // Pre-processor pass-through defines for redirecting functions to glew alternatives.
      // 

      writer.Write ("\n");

      if (featureAndExtensionNodes.Count > 0)
      {
        HashSet<string> prototypes = new HashSet<string> ();

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
            XmlNode requireApiNode = requireNode.Attributes.GetNamedItem ("api");

            if ((requireApiNode != null) && (!IsApiSupported (requireApiNode.Value)))
            {
              continue;
            }

            XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

            if (requireCommandNodes.Count == 0)
            {
              continue;
            }

            foreach (XmlNode commandNode in requireCommandNodes)
            {
              string command = commandNode.Attributes ["name"].Value;

              if (!prototypes.Contains (command))
              {
                prototypes.Add (command);

                writer.Write (string.Format ("#define {1} glew::{0}::{1}\n", m_api [0], command));
              }
            }
          }
        }
      }

      writer.Write ("\n");

      WriteCommentDivider (ref writer);
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
            XmlNode requireApiNode = requireNode.Attributes.GetNamedItem ("api");

            if ((requireApiNode != null) && (!IsApiSupported (requireApiNode.Value)))
            {
              continue;
            }

            XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

            if (requireCommandNodes.Count == 0)
            {
              continue;
            }

            foreach (XmlNode commandNode in requireCommandNodes)
            {
              string returnType;

              Dictionary<string, string> parameters;

              string command = commandNode.Attributes ["name"].Value;

              string prototype = GetFullCommandPrototype (command, out returnType, out parameters);

              if (definedPrototypes.Contains (prototype))
              {
                continue;
              }

              definedPrototypes.Add (prototype);

              bool voidFunction = (returnType.Contains ("void") && !returnType.Contains ("*"));

              writer.Write (string.Format ("\n{0}\n{{\n", prototype));

              writer.Write (string.Format ("  // {0} - {1}\n", keypair.Key, command));

              writer.Write (string.Format ("  const glew::{0}::DeviceState *deviceState = glew::{0}::GetDeviceState ();\n", m_api [0]));

              StringBuilder paramBuilder = new StringBuilder ();

              if (parameters.Count > 0)
              {
                foreach (string key in parameters.Keys)
                {
                  string param = key;

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

              writer.Write (string.Format ("  if (deviceState && deviceState->m_{0})\n  {{\n", command));

              writer.Write (string.Format ("    {0}", (voidFunction ? "" : "return ")));

              writer.Write (string.Format ("deviceState->m_{0} ({1});\n  }}\n", command, paramBuilder.ToString ()));

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
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    private bool IsApiSupported (string apiList)
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
    
    private string GetFullCommandPrototype (string command)
    {
      string returnType = null;

      Dictionary<string, string> parameters = null;

      return GetFullCommandPrototype (command, out returnType, out parameters);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    private string GetFullCommandPrototype (string command, out string returnType, out Dictionary <string, string> parameters)
    {
      XmlNode commandNode = null;

      returnType = null;

      parameters = null;

      if (m_commandsNodesLookup.TryGetValue (command, out commandNode))
      {
        StringBuilder prototypeBuilder = new StringBuilder ();

        // 
        // Make an identical copy of the XML contents of component of the prototype/params.
        // 

        XmlNode protoNode = commandNode.SelectSingleNode ("proto");

        XmlNodeList protoParamNodes = commandNode.SelectNodes ("param");

        parameters = new Dictionary<string, string> ();

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

          parameters.Add (paramName, paramType);

          if (i < (protoParamNodes.Count - 1))
          {
            prototypeBuilder.Append (", ");
          }
        }

        prototypeBuilder.Append (")");

        prototypeBuilder.Replace ("  ", " ");

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
