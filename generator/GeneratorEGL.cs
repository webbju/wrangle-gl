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

    public GeneratorEGL (Stream stream)
      : base (stream, new string [] []
      {
        new string []{ "egl", "1.0" }
      })
    {
      m_funcApiEntryPrefix = "EGLAPI";

      m_funcApiEntryPostfix = "EGLAPIENTRY";

      m_funcPointerApiEntryPrefix = "";

      m_funcPointerApiEntryPostfix = "EGLAPIENTRYP";
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public override void ExportHpp (StreamWriter writer)
    {
      WriteCommentDivider (writer);

      writer.Write (string.Format ("\n#ifndef __{0}_{1}_H__\n#define __{0}_{1}_H__\n\n", "GLEW", m_api [0].ToUpperInvariant ()));

      WriteCommentDivider (writer);

      writer.Write ("\n#include <wrangle.h>\n");

      writer.Write ("\n#include <EGL/egl.h>\n");

      writer.Write ("\n#include <EGL/eglext.h>\n\n");

      base.ExportHpp (writer);

      writer.Write (string.Format ("\n#endif // __{0}_{1}_H__\n\n", "GLEW", m_api [0].ToUpperInvariant ()));

      WriteCommentDivider (writer);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public override void ExportHppPublicGlewApi (StreamWriter writer)
    {
      writer.Write (string.Format ("\n  public:\n\n    static void Initialise (EGLDisplay display);\n\n", m_api [0]));

      writer.Write (string.Format ("    static void Deinitialise ();\n\n"));

      writer.Write (string.Format ("    static bool IsSupported (GLEW_{0}_FeatureSet feature)\n    {{\n      GLEW_ASSERT (s_initialised);\n\n      return s_deviceConfig.m_featureSupported [feature];\n    }}\n\n", m_api [0].ToUpperInvariant ()));

      writer.Write (string.Format ("    static void SetConfig (glew::{0}::DeviceConfig &deviceConfig)\n    {{\n      GLEW_ASSERT (s_initialised);\n\n      s_deviceConfig = deviceConfig;\n    }}\n\n", m_api [0]));

      writer.Write (string.Format ("    static glew::{0}::DeviceConfig &GetConfig ()\n    {{\n      GLEW_ASSERT (s_initialised);\n\n      return s_deviceConfig;\n    }}\n", m_api [0]));

      writer.Write (string.Format ("\n  protected:\n\n", m_api [0]));

      writer.Write (string.Format ("    static bool s_initialised;\n\n"));

      writer.Write (string.Format ("    static EGLDisplay s_display;\n\n"));

      writer.Write (string.Format ("    static glew::{0}::DeviceConfig s_deviceConfig;\n\n", m_api [0]));
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public override void ExportCpp (StreamWriter writer)
    {
      WriteCommentDivider (writer);

      writer.Write ("\n#include <cstring>\n\n#include <string>\n\n#include <unordered_set>\n\n");

      base.ExportCpp (writer);

      writer.Write ("\n");

      //
      // glew::egl::Initialise
      //

      writer.Write ("bool glew::egl::s_initialised = false;\n\n");

      writer.Write ("EGLDisplay glew::egl::s_display = EGL_NO_DISPLAY;\n\n");

      writer.Write ("glew::egl::DeviceConfig glew::egl::s_deviceConfig;\n\n");

      WriteCommentDivider (writer);

      writer.Write (@"
void glew::egl::Initialise (EGLDisplay display)
{
  s_display = display;

  if (s_display == EGL_NO_DISPLAY)
  {
    s_display = eglGetDisplay (EGL_DEFAULT_DISPLAY);
  }

  memset (&s_deviceConfig, 0, sizeof (s_deviceConfig));

  //
  // Determine current driver's feature reporting.
  //

  const unsigned char *eglVersion = (const unsigned char *) eglQueryString (s_display, EGL_VERSION);

  if (!eglVersion)
  {
    eglVersion = (const unsigned char*) """"; // Protect against some drivers will happily pass back NULL.
  }

  const size_t eglVersionLen = strlen ((const char *) eglVersion);

  if (eglVersionLen)
  {
    unsigned int major = 0, minor = 0;

    const char *divisor = strchr ((const char *) eglVersion, '.');

    if (divisor)
    {
      major = (*(char *) (divisor - 1)) - '0';
      minor = (*(char *) (divisor + 1)) - '0';
    }

    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_0] = ((major >= 1));
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_1] = ((major >= 1) && (minor >= 1));
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_2] = ((major >= 1) && (minor >= 2));
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_3] = ((major >= 1) && (minor >= 3));
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_4] = ((major >= 1) && (minor >= 4));
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_5] = ((major >= 1) && (minor >= 5));
  }

  //
  // Evaluate extension support.
  //

  std::unordered_set <std::string> supportedExtensions;

  const unsigned char *eglExtensions = (const unsigned char *) eglQueryString (s_display, EGL_EXTENSIONS);

  if (!eglExtensions)
  {
    eglExtensions = (const unsigned char*) """"; // Protect against some drivers will happily pass back NULL.
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

        Dictionary <string, HashSet <string>> featureBasedPrototypes = new Dictionary<string,HashSet<string>> ();

        foreach (var keypair in featureAndExtensionNodes)
        {
          XmlNode featureNode = keypair.Value;

          string api = m_api [0];

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

      writer.Write ("  s_initialised = true;\n");

      writer.Write ("}\n\n");

      WriteCommentDivider (writer);

      //
      // glew::egl::Deinitialise
      //

      writer.Write ("\nvoid glew::egl::Deinitialise ()\n{\n");

      writer.Write ("  s_initialised = false;\n");

      writer.Write ("}\n\n");

      WriteCommentDivider (writer);
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
