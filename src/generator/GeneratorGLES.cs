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

  public class GeneratorGLES : Generator
  {

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public GeneratorGLES (string filename)
      : base (filename, new string [] { "gles", /*"gles1",*/ "gles2" })
    {
      m_funcPointerApiEntryPrefix = "";

      m_funcPointerApiEntryPostfix = "GL_APIENTRYP";
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public override void ExportHpp (ref StreamWriter writer)
    {
      WriteCommentDivider (ref writer);

      writer.Write (string.Format ("\n#ifndef __{0}_{1}_H__\n#define __{0}_{1}_H__\n\n", "GLEW", m_api [0].ToUpperInvariant ()));

      WriteCommentDivider (ref writer);

      writer.Write ("\n#include <GLES3/gl31.h>\n");

      writer.Write ("\n#include <GLES2/gl2ext.h>\n\n");

      base.ExportHpp (ref writer);

      writer.Write (string.Format ("\n#endif // __{0}_{1}_H__\n\n", "GLEW", m_api [0].ToUpperInvariant ()));

      WriteCommentDivider (ref writer);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public override void ExportCpp (ref StreamWriter writer)
    {
      WriteCommentDivider (ref writer);

      writer.Write ("\n");

      base.ExportCpp (ref writer);

      WriteCommentDivider (ref writer);

      writer.Write ("\n");

      // 
      // glew::gles::Initialise
      // 

      writer.Write ("void glew::gles::Initialise ()\n{\n");

      writer.Write ("  memset (&s_deviceConfig, 0, sizeof (s_deviceConfig));\n\n");

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

            writer.Write (string.Format ("  // {0}\n", keypair.Key));

            foreach (XmlNode commandNode in requireCommandNodes)
            {
              string command = commandNode.Attributes ["name"].Value;

              writer.Write (string.Format ("  #undef {0}\n", command));
            }

            foreach (XmlNode commandNode in requireCommandNodes)
            {
              string command = commandNode.Attributes ["name"].Value;

              string mangedFunctionPointer = string.Format ("PFN{0}PROC", command.ToUpperInvariant ());

              writer.Write (string.Format ("  s_deviceConfig.m_{0} = ({1}) glewGetProcAddress (\"{0}\");\n", command, mangedFunctionPointer));
            }

            writer.Write ("\n");
          }
        }
      }

      writer.Write ("  // \n  // Determine current driver's feature reporting.\n  // \n\n");

      writer.Write ("  const GLubyte *glVersion = s_deviceConfig.m_glGetString (GL_VERSION);\n\n");

      writer.Write ("  const GLubyte *glExtensions = s_deviceConfig.m_glGetString (GL_EXTENSIONS);\n\n");

      writer.Write ("  bool es20Supported = strncasecmp ((const char *) glVersion, \"OpenGL ES 2\", 11);\n");

      writer.Write ("  bool es30Supported = strncasecmp ((const char *) glVersion, \"OpenGL ES 3\", 11);\n");

      writer.Write ("  bool es31Supported = strncasecmp ((const char *) glVersion, \"OpenGL ES 3.1\", 13);\n\n");

      writer.Write ("  s_deviceConfig.m_featureSupported [GLEW_GL_ES_VERSION_2_0] = es20Supported;\n");

      writer.Write ("  s_deviceConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] = es30Supported;\n");

      writer.Write ("  s_deviceConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] = es31Supported;\n\n");

      foreach (var keypair in m_extensionNodesLookup)
      {
        writer.Write (string.Format ("  s_deviceConfig.m_featureSupported [GLEW_{0}] = IsExtensionSupported (\"{0}\");\n", keypair.Key));
      }

      writer.Write ("}\n\n");

      WriteCommentDivider (ref writer);
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
