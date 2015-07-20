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

      writer.Write (string.Format ("\nclass {0}Capabilities\n{{\npublic:\n\n", m_api [0].ToUpperInvariant ()));

      writer.Write (string.Format ("  bool Initialise ();\n\n"));

      writer.Write (string.Format ("  bool Deinitialise ();\n\n"));

      writer.Write (string.Format ("  bool IsSupported (const char *extension);\n\n"));

      if (m_featureNodesLookup.Count > 0)
      {
        writer.Write ("  bool\n");

        int featureCount = m_featureNodesLookup.Keys.Count;

        foreach (string key in m_featureNodesLookup.Keys)
        {
          writer.Write (string.Format ("    __{0}{1}\n", key, ((--featureCount) > 0) ? "," : ";"));
        }
      }

      if (m_extensionNodesLookup.Count > 0)
      {
        writer.Write ("\n  bool\n");

        int extensionCount = m_extensionNodesLookup.Keys.Count;

        foreach (string key in m_extensionNodesLookup.Keys)
        {
          writer.Write (string.Format ("    __{0}{1}\n", key, ((--extensionCount) > 0) ? "," : ";"));
        }
      }

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

          writer.Write (string.Format ("\n  // {0}\n", keypair.Key));

          foreach (XmlNode commandNode in requiredCommandNodes)
          {
            string command = commandNode.Attributes ["name"].Value;

            string mangedFunctionPointer = string.Format ("PFN{0}PROC", command.ToUpperInvariant ());

            writer.Write (string.Format ("  {0}\n    {1};\n", mangedFunctionPointer, command));
          }
        }
      }

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

          writer.Write (string.Format ("\n  // {0}\n", keypair.Key));

          foreach (XmlNode commandNode in requiredCommandNodes)
          {
            string command = commandNode.Attributes ["name"].Value;

            string mangedFunctionPointer = string.Format ("PFN{0}PROC", command.ToUpperInvariant ());

            writer.Write (string.Format ("  {0}\n    {1};\n", mangedFunctionPointer, command));
          }
        }
      }

      writer.Write ("};\n\n");

      WriteCommentDivider (ref writer);

      writer.Write (string.Format ("\n{0}Boolean {1}GetCapabilities ({0}Capabilities *capabilities);\n\n", m_api [0].ToUpperInvariant (), m_api [0]));

      foreach (var keypair in m_commandsNodesLookup)
      {
        writer.Write (string.Format ("#define {0} __{0}\n", keypair.Key));
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

      foreach (var keypair in m_extensionNodesLookup)
      {
        writer.Write (string.Format ("// {0}\n", keypair.Key));
      }

      WriteCommentDivider (ref writer);
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

    protected void WriteCommentDivider (ref StreamWriter writer)
    {
      writer.WriteLine ("////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////");
      writer.WriteLine ("////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////");
      writer.WriteLine ("////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////");
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
