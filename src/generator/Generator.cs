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

      writer.Write (string.Format ("\nnamespace glew\n{{\n  class {0}\n  {{\n  public:\n\n", m_api [0]));

      // 
      // 'FeatureSet' class; wraps 'features' and 'extension' identifiers.
      // 

      WriteCommentDivider (ref writer, 4);

      writer.Write ("\n    enum FeatureSet\n    {\n");

      if (m_featureNodesLookup.Count > 0)
      {
        writer.Write ("      // Features\n");

        int featureCount = m_featureNodesLookup.Keys.Count;

        foreach (string key in m_featureNodesLookup.Keys)
        {
          writer.Write (string.Format ("      {0}{1},\n", "GLEW_", key));
        }
      }

      if (m_extensionNodesLookup.Count > 0)
      {
        writer.Write ("      // Extensions\n");

        int extensionCount = m_extensionNodesLookup.Keys.Count;

        foreach (string key in m_extensionNodesLookup.Keys)
        {
          writer.Write (string.Format ("      {0}{1},\n", "GLEW_", key));
        }
      }

      writer.Write (string.Format ("      {0}{1}\n", "GLEW_", "GL_FeatureSetCount"));

      writer.Write ("    }\n\n");

      // 
      // 'DeviceState' class.
      // 

      WriteCommentDivider (ref writer, 4);

      writer.Write (string.Format ("\n    class DeviceState\n    {{\n"));

      writer.Write (string.Format ("    private:\n\n"));

      writer.Write (string.Format ("      bool m_featureSupported [glew::{0}::FeatureSet::{1}{2}];\n\n", m_api [0], "GLEW_", "GL_FeatureSetCount"));

      writer.Write (string.Format ("    public:\n\n"));

      writer.Write (string.Format ("      bool IsSupported (glew::{0}::FeatureSet feature);\n", m_api [0]));

      writer.Write (string.Format ("      bool IsSupported (const char *feature);\n"));

      // 
      // 'DeviceState' class - Feature function prototypes.
      // 

      if (m_featureNodesLookup.Count > 0)
      {
        foreach (var keypair in m_featureNodesLookup)
        {
          XmlNode featureNode = keypair.Value;

          XmlNodeList requiredCommandNodes = featureNode.SelectNodes ("require/command");

          if (requiredCommandNodes.Count == 0)
          {
            continue;
          }

          writer.Write (string.Format ("\n      // {0}\n", keypair.Key));

          foreach (XmlNode commandNode in requiredCommandNodes)
          {
            string command = commandNode.Attributes ["name"].Value;

            string mangedFunctionPointer = string.Format ("PFN{0}PROC", command.ToUpperInvariant ());

            writer.Write (string.Format ("      {0} {1};\n", mangedFunctionPointer, command));
          }
        }
      }

      // 
      // Extension function prototypes.
      // 

      if (m_extensionNodesLookup.Count > 0)
      {
        foreach (var keypair in m_extensionNodesLookup)
        {
          XmlNode extensionNode = keypair.Value;

          XmlNodeList requiredCommandNodes = extensionNode.SelectNodes ("require/command");

          if (requiredCommandNodes.Count == 0)
          {
            continue;
          }

          writer.Write (string.Format ("\n      // {0}\n", keypair.Key));

          foreach (XmlNode commandNode in requiredCommandNodes)
          {
            string command = commandNode.Attributes ["name"].Value;

            string mangedFunctionPointer = string.Format ("PFN{0}PROC", command.ToUpperInvariant ());

            writer.Write (string.Format ("      {0} {1};\n", mangedFunctionPointer, command));
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

      writer.Write (string.Format ("    static glew::{0}::DeviceState *GetDeviceState ();\n", m_api [0]));

      writer.Write (string.Format ("\n  protected:\n\n", m_api [0]));

      writer.Write (string.Format ("    static glew::{0}::DeviceState *s_deviceState;\n\n", m_api [0]));

      WriteCommentDivider (ref writer, 4);

      // 
      // Internal GLEW-managed API functions (seeded from features and extension specifications).
      // 

      writer.Write (string.Format ("\n  public:\n"));

      foreach (var keypair in m_featureNodesLookup)
      {
        XmlNode featureNode = keypair.Value;

        XmlNodeList requiredCommandNodes = featureNode.SelectNodes ("require/command");

        if (requiredCommandNodes.Count == 0)
        {
          continue;
        }

        writer.Write (string.Format ("\n    // {0}\n", keypair.Key));

        foreach (XmlNode commandNode in requiredCommandNodes)
        {
          string command = commandNode.Attributes ["name"].Value;

          writer.Write (string.Format ("    {0};\n", GetFullCommandPrototype (command)));
        }
      }

      // 
      // Extensions.
      // 

      foreach (var keypair in m_extensionNodesLookup)
      {
        XmlNode extensionNode = keypair.Value;

        XmlNodeList requiredCommandNodes = extensionNode.SelectNodes ("require/command");

        if (requiredCommandNodes.Count == 0)
        {
          continue;
        }

        writer.Write (string.Format ("\n    // {0}\n", keypair.Key));

        foreach (XmlNode commandNode in requiredCommandNodes)
        {
          string command = commandNode.Attributes ["name"].Value;

          writer.Write (string.Format ("    {0};\n", GetFullCommandPrototype (command)));
        }
      }

      writer.Write (string.Format ("  }};\n}}\n\n"));

      WriteCommentDivider (ref writer, 0);

      // 
      // Pre-processor pass-through defines for redirecting functions to glew alternatives.
      // 

      writer.Write ("\n");

      foreach (var keypair in m_commandsNodesLookup)
      {
        writer.Write (string.Format ("#define {1} glew::{0}::{1}\n", m_api [0], keypair.Key));
      }

      writer.Write ("\n");

      WriteCommentDivider (ref writer);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public virtual void ExportCpp (ref StreamWriter writer)
    {
      WriteCommentDivider (ref writer);

      writer.Write (string.Format ("\n#include <wrangle-{0}.h>\n\n", m_api [0]));

      WriteCommentDivider (ref writer);

      // 
      // Features.
      // 

      foreach (var keypair in m_featureNodesLookup)
      {
        XmlNode featureNode = keypair.Value;

        XmlNodeList requiredCommandNodes = featureNode.SelectNodes ("require/command");

        if (requiredCommandNodes.Count == 0)
        {
          continue;
        }

        foreach (XmlNode commandNode in requiredCommandNodes)
        {
          string command = commandNode.Attributes ["name"].Value;

          writer.Write (string.Format ("\n// {0}\n// {1}\n", keypair.Key, command));

          writer.Write (string.Format ("{0}\n{{\n", GetFullCommandPrototype (command)));

          writer.Write ("}\n\n");

          WriteCommentDivider (ref writer);
        }
      }

      // 
      // Extensions.
      // 

      foreach (var keypair in m_extensionNodesLookup)
      {
        XmlNode extensionNode = keypair.Value;

        XmlNodeList requiredCommandNodes = extensionNode.SelectNodes ("require/command");

        if (requiredCommandNodes.Count == 0)
        {
          continue;
        }

        foreach (XmlNode commandNode in requiredCommandNodes)
        {
          string command = commandNode.Attributes ["name"].Value;

          writer.Write (string.Format ("\n// {0}\n// {1}\n", keypair.Key, command));

          writer.Write (string.Format ("{0}\n{{\n", GetFullCommandPrototype (command)));

          writer.Write ("}\n\n");

          WriteCommentDivider (ref writer);
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
      XmlNode commandNode = null;

      if (m_commandsNodesLookup.TryGetValue (command, out commandNode))
      {
        StringBuilder prototypeBuilder = new StringBuilder ();

        // 
        // Make an identical copy of the XML contents of component of the prototype/params.
        // 

        XmlNode protoNode = commandNode.SelectSingleNode ("proto");

        prototypeBuilder.Append (protoNode.InnerXml);

        prototypeBuilder.Append (" (");

        XmlNodeList protoParamNodes = commandNode.SelectNodes ("param");

        for (int i = 0; i < protoParamNodes.Count; ++i)
        {
          XmlNode paramNode = protoParamNodes.Item (i);

          prototypeBuilder.Append (paramNode.InnerXml);

          if (i < (protoParamNodes.Count - 1))
          {
            prototypeBuilder.Append (", ");
          }
        }

        prototypeBuilder.Append (")");

        // 
        // Strip any unwanted XML tags.
        // 

        prototypeBuilder.Replace ("<ptype>", "");

        prototypeBuilder.Replace ("</ptype>", "");

        prototypeBuilder.Replace ("<name>", " ");

        prototypeBuilder.Replace ("</name>", "");

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
