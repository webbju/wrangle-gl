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

  public class GeneratorGLCore : Generator
  {

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public GeneratorGLCore (string filename)
      : base (filename, new string [] []
      {
        new string []{ "glcore", "1.0" }
      })
    {
      m_funcApiEntryPrefix = "GLAPI";

      m_funcApiEntryPostfix = "APIENTRY";

      m_funcPointerApiEntryPrefix = "";

      m_funcPointerApiEntryPostfix = "APIENTRYP";
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public override void ExportHpp (ref StreamWriter writer)
    {
      WriteCommentDivider (ref writer);

      writer.Write (string.Format ("\n#ifndef __{0}_{1}_H__\n#define __{0}_{1}_H__\n\n", "GLEW", m_api [0].ToUpperInvariant ()));

      WriteCommentDivider (ref writer);

      writer.Write ("\n#include <wrangle.h>\n");

      writer.Write ("\n#if !defined (GL_GLEXT_PROTOTYPES)\n#define GL_GLEXT_PROTOTYPES 1\n#endif\n");

      writer.Write ("\n#include <GL/glcorearb.h>\n\n");

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
      // glew::glcore::Initialise
      // 

      writer.Write ("glew::glcore::DeviceConfig glew::glcore::s_deviceConfig;\n\n");

      WriteCommentDivider (ref writer);

      writer.Write ("\nvoid glew::glcore::Initialise ()\n{\n");

      writer.Write ("  memset (&s_deviceConfig, 0, sizeof (s_deviceConfig));\n\n");

      writer.Write (@"  // 
  // Determine current driver's feature reporting.
  // 

  const unsigned char *glVersion = glGetString (GL_VERSION);

  if (!glVersion)
  {
    glVersion = (const unsigned char*) """";
  }

  /*const size_t glVersionLen = strlen ((const char *) glVersion);

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
  }*/

  // 
  // Evaluate extension support.
  // 

  std::unordered_set <std::string> supportedExtensions;

  const unsigned char *glExtensions = (const unsigned char*) glGetString (GL_EXTENSIONS);

  if (!glExtensions)
  {
    glExtensions = (const unsigned char*) """"; // Protect against some drivers will happily passing back NULL.
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

      #if _WIN32
        strncpy_s (thisExtBuffer, 128, (const char *)thisExtStart, len);
      #else 
        strncpy (thisExtBuffer, (const char *)thisExtStart, len);
      #endif

        thisExtBuffer [GLEW_MIN (len, 127)] = '\0';

        thisExtEnd = (unsigned char *) seperator + 1; // skip tab character
      }
      else
      {
        const size_t len = strlen ((const char *) thisExtStart);

      #if _WIN32
        strncpy_s (thisExtBuffer, 128, (const char *)thisExtStart, len);
      #else 
        strncpy (thisExtBuffer, (const char *)thisExtStart, len);
      #endif

        thisExtBuffer [GLEW_MIN (len + 1, 127)] = '\0';

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

        Dictionary<string, HashSet<string>> featureBasedPrototypes = new Dictionary<string, HashSet<string>> ();

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
            // Export code for seeding available function/command addresses.
            // 

            XmlNodeList requireCommandNodes = requireNode.SelectNodes ("command");

            if (requireCommandNodes.Count == 0)
            {
              continue;
            }

            HashSet<string> requiredCommands;

            if (!featureBasedPrototypes.TryGetValue (keypair.Key, out requiredCommands))
            {
              requiredCommands = new HashSet<string> ();
            }

            foreach (XmlNode commandNode in requireCommandNodes)
            {
              string command = commandNode.Attributes ["name"].Value;

              if (definedPrototypes.Contains (command))
              {
                continue;
              }

              definedPrototypes.Add (command);

              if (baseSpecFeatureSet)
              {
                continue; // Skip any base spec versions.
              }

              requiredCommands.Add (command);
            }

            featureBasedPrototypes [keypair.Key] = requiredCommands;
          }
        }

        // 
        // Output condensed feature organised prototypes.
        // 

        if (featureBasedPrototypes.Count > 0)
        {
          foreach (var keypair in featureBasedPrototypes)
          {
            if (keypair.Value.Count == 0)
            {
              continue;
            }

            writer.Write (string.Format ("  // {0}\n", keypair.Key));

            writer.Write (string.Format ("  if (s_deviceConfig.m_featureSupported [GLEW_{0}])\n  {{\n", keypair.Key));

            foreach (string command in keypair.Value)
            {
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
      // glew::glcore::Deinitialise
      // 

      writer.Write ("\nvoid glew::glcore::Deinitialise ()\n{\n");

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
