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
      m_baseSpecVersion = 2.0f;

      m_funcApiEntryPrefix = "GL_APICALL";

      m_funcApiEntryPostfix = "GL_APIENTRY";

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

      //writer.Write ("\n#ifdef GL_GLEXT_PROTOTYPES\n#undef GL_GLEXT_PROTOTYPES\n#endif\n");

      writer.Write (@"
#if defined (_WIN32)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN 1
#define _WIN32_LEAN_AND_MEAN 1
#endif
#include <windows.h>
#define GL_APICALL WINGDIAPI
#define GL_APIENTRY WINAPI
#define GL_APIENTRYP WINAPI*
#ifdef _WIN32_LEAN_AND_MEAN
#undef WIN32_LEAN_AND_MEAN
#undef _WIN32_LEAN_AND_MEAN
#endif
#endif

");

      WriteCommentDivider (ref writer);

      writer.Write ("\n#include <wrangle.h>\n");

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

      writer.Write ("\n#include <string>\n\n#include <unordered_set>\n\n");

      base.ExportCpp (ref writer);

      writer.Write ("\n");

      // 
      // glew::gles::Initialise
      // 

      writer.Write ("glew::gles::DeviceConfig glew::gles::s_deviceConfig;\n\n");

      WriteCommentDivider (ref writer);

      writer.Write ("\nvoid glew::gles::Initialise ()\n{\n");

      writer.Write ("  memset (&s_deviceConfig, 0, sizeof (s_deviceConfig));\n\n");

      writer.Write (@"  // 
  // Determine current driver's feature reporting.
  // 

  #undef glGetString

  const unsigned char *glVersion = glGetString (GL_VERSION);

  if (!glVersion)
  {
    glVersion = (const unsigned char*) """";
  }

  const size_t glVersionLen = strlen ((const char *) glVersion);

  if (glVersionLen)
  {
#if _WIN32
  #define strncasecmp _strnicmp
#endif

    const bool es20Supported = (strncasecmp ((const char *) glVersion, ""OpenGL ES 2"", 11) == 0);
    const bool es30Supported = (strncasecmp ((const char *) glVersion, ""OpenGL ES 3"", 11) == 0);
    const bool es31Supported = (strncasecmp ((const char *) glVersion, ""OpenGL ES 3.1"", 13) == 0);

    s_deviceConfig.m_featureSupported [GLEW_GL_ES_VERSION_2_0] = es20Supported;
    s_deviceConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] = es30Supported;
    s_deviceConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] = es31Supported;
  }

  // 
  // Evaluate extension support.
  // 

  std::unordered_set <std::string> supportedExtensions;

  const unsigned char *glExtensions = glGetString (GL_EXTENSIONS);

  if (!glExtensions)
  {
    glExtensions = (const unsigned char*) """";
  }

  const size_t glExtensionsLen = strlen ((const char *) glExtensions);

  if (glExtensionsLen)
  {
    unsigned char *thisExtStart = (unsigned char *) glExtensions;

    unsigned char *thisExtEnd = NULL;

    char thisExtBuffer [128];

    memset (thisExtBuffer, 0, sizeof (thisExtBuffer));

    do 
    {
      const char * seperator = strchr ((const char *) thisExtStart, ' ');

      if (seperator)
      {
        const size_t len = (((uintptr_t) seperator - (uintptr_t) thisExtStart) / sizeof (unsigned char));

        strncpy (thisExtBuffer, (const char *)thisExtStart, len);

        thisExtBuffer [min (len, 127)] = '\0';

        thisExtEnd = (unsigned char *) seperator + 1; // skip tab character
      }
      else
      {
        const size_t len = strlen ((const char *) thisExtStart);

        strncpy (thisExtBuffer, (const char *) thisExtStart, len);

        thisExtBuffer [min (len + 1, 127)] = '\0';

        thisExtEnd = NULL;
      }

      std::string thisExt (thisExtBuffer);

      if (supportedExtensions.find (thisExt) == supportedExtensions.end ())
      {
        supportedExtensions.insert (thisExt);
      }

      thisExtStart = thisExtEnd;
    }
    while ((thisExtStart && *thisExtStart != '\0') && (thisExtEnd && *thisExtEnd != '\0'));
  }

");

      foreach (var keypair in m_extensionNodesLookup)
      {
        writer.Write (string.Format ("  s_deviceConfig.m_featureSupported [GLEW_{0}] = (supportedExtensions.find (\"{0}\") != supportedExtensions.end ());\n", keypair.Key));
      }

      writer.Write ("\n");

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
          // Evaluate whether this feature is part of the 'base spec'.
          // 

          XmlNode featureNumberNode = featureNode.Attributes.GetNamedItem ("number");

          bool baseSpecFeatureSet = false;

          if (featureNumberNode != null)
          {
            float version = m_baseSpecVersion;

            if (float.TryParse (featureNumberNode.Value, out version))
            {
              baseSpecFeatureSet = version <= m_baseSpecVersion;
            }
          }

          if (baseSpecFeatureSet)
          {
            continue; // Skip any base spec versions.
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

            writer.Write (string.Format ("  if (s_deviceConfig.m_featureSupported [GLEW_{0}])\n  {{\n", keypair.Key));

            /*foreach (XmlNode commandNode in requireCommandNodes)
            {
              string command = commandNode.Attributes ["name"].Value;

              writer.Write (string.Format ("    #undef {0}\n", command));
            }*/

            foreach (XmlNode commandNode in requireCommandNodes)
            {
              string command = commandNode.Attributes ["name"].Value;

              string mangedFunctionPointer = string.Format ("PFN{0}PROC", command.ToUpperInvariant ());

              writer.Write (string.Format ("    s_deviceConfig.m_{0} = ({1}) glewGetProcAddress (\"{0}\");\n", command, mangedFunctionPointer));
            }

            writer.Write ("  }\n\n");
          }
        }
      }

      writer.Write ("}\n\n");

      WriteCommentDivider (ref writer);

      // 
      // glew::gles::Deinitialise
      // 

      writer.Write ("\nvoid glew::gles::Deinitialise ()\n{\n");

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
