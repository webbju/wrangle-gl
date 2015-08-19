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

  public class GeneratorEGL : Generator
  {

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public GeneratorEGL (string filename)
      : base (filename, new string [] { "egl" })
    {
      m_funcApiEntryPrefix = "EGLAPI";

      m_funcApiEntryPostfix = "EGLAPIENTRY";

      m_funcPointerApiEntryPrefix = "";

      m_funcPointerApiEntryPostfix = "EGLAPIENTRYP";
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public override void ExportHpp (ref StreamWriter writer)
    {
      WriteCommentDivider (ref writer);

      writer.Write (string.Format ("\n#ifndef __{0}_{1}_H__\n#define __{0}_{1}_H__\n\n", "GLEW", m_api [0].ToUpperInvariant ()));

      WriteCommentDivider (ref writer);

      writer.Write ("\n#include <EGL/egl.h>\n");

      writer.Write ("\n#include <EGL/eglext.h>\n\n");

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
      // glew::egl::Initialise
      // 

      writer.Write ("glew::egl::DeviceConfig glew::egl::s_deviceConfig;\n\n");

      WriteCommentDivider (ref writer);

      writer.Write ("\nvoid glew::egl::Initialise ()\n{\n");

      writer.Write ("  memset (&s_deviceConfig, 0, sizeof (s_deviceConfig));\n\n");

      writer.Write (@"  // 
  // Determine current driver's feature reporting.
  // 

  //PFNEGLQUERYSTRINGPROC _eglQueryString = &eglQueryString;

  const unsigned char *eglVersion = (const unsigned char*) """";

  //if (_eglQueryString != 0)
  {
    eglVersion = (const unsigned char *) eglQueryString (EGL_NO_DISPLAY, EGL_VERSION);
  }

  const size_t eglVersionLen = strlen ((const char *) eglVersion);

  if (eglVersionLen)
  {
#if _WIN32
  #define strncasecmp _strnicmp
#endif

    const bool egl10Supported = (strncasecmp ((const char *) eglVersion, ""1.0"", 3) == 0);
    const bool egl11Supported = (strncasecmp ((const char *) eglVersion, ""1.1"", 3) == 0);
    const bool egl12Supported = (strncasecmp ((const char *) eglVersion, ""1.2"", 3) == 0);
    const bool egl13Supported = (strncasecmp ((const char *) eglVersion, ""1.3"", 3) == 0);
    const bool egl14Supported = (strncasecmp ((const char *) eglVersion, ""1.4"", 3) == 0);
    const bool egl15Supported = (strncasecmp ((const char *) eglVersion, ""1.5"", 3) == 0);

    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_0] = egl10Supported;
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_1] = egl11Supported;
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_2] = egl12Supported;
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_3] = egl13Supported;
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_4] = egl14Supported;
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_5] = egl15Supported;
  }

  // 
  // Evaluate extension support.
  // 

  std::unordered_set <std::string> supportedExtensions;

  const unsigned char *eglExtensions = (const unsigned char*) """";

  //if (_eglQueryString != 0)
  {
    eglExtensions = (const unsigned char *) eglQueryString (EGL_NO_DISPLAY, EGL_EXTENSIONS);
  }

  const size_t eglExtensionsLen = strlen ((const char *) eglExtensions);

  if (eglExtensionsLen)
  {
    unsigned char *thisExtStart = (unsigned char *) eglExtensions;

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

            foreach (XmlNode commandNode in requireCommandNodes)
            {
              string command = commandNode.Attributes ["name"].Value;

              writer.Write (string.Format ("    #undef {0}\n", command));
            }

            foreach (XmlNode commandNode in requireCommandNodes)
            {
              string command = commandNode.Attributes ["name"].Value;

              string mangedFunctionPointer = string.Format ("PFN{0}PROC", command.ToUpperInvariant ());

              writer.Write (string.Format ("    s_deviceConfig.m_{0} = ({1}) eglGetProcAddress (\"{0}\");\n", command, mangedFunctionPointer));
            }

            writer.Write ("  }\n\n");
          }
        }
      }

      writer.Write ("}\n\n");

      WriteCommentDivider (ref writer);

      // 
      // glew::egl::Deinitialise
      // 

      writer.Write ("\nvoid glew::egl::Deinitialise ()\n{\n");

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
