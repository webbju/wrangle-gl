﻿////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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

public class GeneratorGLES : Generator
{

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public GeneratorGLES (Stream stream)
    : base (stream, new string[][]
    {
    new string [] {"gles", "2.0"},
    //new string [] {"gles1", "2.0"},
    new string [] {"gles2", "2.0"},
    })
  {
    m_funcApiEntryPrefix = "GL_APICALL";

    m_funcApiEntryPostfix = "GL_APIENTRY";

    m_funcPointerApiEntryPrefix = "";

    m_funcPointerApiEntryPostfix = "GL_APIENTRYP";
  }

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public override void ExportHpp (StreamWriter writer)
  {
    WriteCommentDivider (writer);

    writer.Write (Environment.NewLine);

    writer.WriteLine (string.Format ("#ifndef __{0}_{1}_H__", "GLEW", m_api[0].ToUpperInvariant ()));

    writer.WriteLine (string.Format ("#define __{0}_{1}_H__", "GLEW", m_api[0].ToUpperInvariant ()));

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer);

    writer.Write (Environment.NewLine);

    writer.Write (@"#if defined (_WIN32)
#define GL_APICALL WINGDIAPI
#define GL_APIENTRY WINAPI
#define GL_APIENTRYP WINAPI*
#endif
");

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer);

    writer.Write (Environment.NewLine);

    writer.WriteLine ("#include <wrangle.h>");

    writer.WriteLine ("#include <GLES3/gl32.h>");

    writer.WriteLine ("#include <GLES2/gl2ext.h>");

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer);

    writer.Write (Environment.NewLine);

    writer.Write (@"// iOS/OSX frameworks use a slightly different style of header guard.
#ifndef __gl_es20_h_
#define __gl_es20_h_
#endif
#ifndef __gl_es20ext_h_
#define __gl_es20ext_h_
#endif
#ifndef __gl_es30_h_
#define __gl_es30_h_
#endif
#ifndef __gl_es30ext_h_
#define __gl_es30ext_h_
#endif
#ifndef __gl_es31_h_
#define __gl_es31_h_
#endif
#ifndef __gl_es31ext_h_
#define __gl_es31ext_h_
#endif
#ifndef __gl_es32_h_
#define __gl_es32_h_
#endif
#ifndef __gl_es32ext_h_
#define __gl_es32ext_h_
#endif
");

    writer.Write (Environment.NewLine);

    base.ExportHpp (writer);

    writer.Write (Environment.NewLine);

    writer.WriteLine (string.Format ("#endif // __{0}_{1}_H__", "GLEW", m_api[0].ToUpperInvariant ()));

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer);
  }

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public override void ExportCpp (StreamWriter writer)
  {
    WriteCommentDivider (writer);

    writer.Write (Environment.NewLine);

    writer.WriteLine ("#include <cstring>");

    writer.WriteLine ("#include <string>");

    writer.WriteLine ("#include <unordered_set>");

    writer.Write (Environment.NewLine);

    base.ExportCpp (writer);

    writer.Write (Environment.NewLine);

    //
    // glew::gles::Initialise
    //

    writer.WriteLine ("bool glew::gles::s_initialised = false;");

    writer.Write (Environment.NewLine);

    writer.WriteLine ("glew::gles::DeviceConfig glew::gles::s_deviceConfig;");

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer);

    writer.Write (Environment.NewLine);

    writer.WriteLine ("void glew::gles::Initialise ()");

    writer.WriteLine ("{");

    writer.WriteLine ("  memset (&s_deviceConfig, 0, sizeof (s_deviceConfig));");

    writer.WriteLine (@"  //
  // Determine current driver's feature reporting.
  //

  const unsigned char *glVersion = glGetString (GL_VERSION);

  if (!glVersion)
  {
    glVersion = (const unsigned char*) """";
  }

  const size_t glVersionLen = strlen ((const char *) glVersion);

  if (glVersionLen)
  {
    unsigned int major = 0, minor = 0;

#if _WIN32
  #define strncasecmp _strnicmp
#endif

    const bool openGlEsSupported = (strncasecmp ((const char *) glVersion, ""OpenGL ES"", 9) == 0);

    const char *divisor = strchr ((const char *) glVersion, '.');

    if (divisor)
    {
      major = (*(char *) (divisor - 1)) - '0';
      minor = (*(char *) (divisor + 1)) - '0';
    }

    if (openGlEsSupported)
    {
      s_deviceConfig.m_featureSupported [GLEW_GL_ES_VERSION_2_0] = ((major >= 2));
      s_deviceConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] = ((major >= 3));
      s_deviceConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] = ((major >= 3) && (minor >= 1));
      s_deviceConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] = ((major >= 3) && (minor >= 2));
    }
  }

  //
  // Evaluate extension support.
  //

  std::unordered_set <std::string> supportedExtensions;

  const unsigned char *glExtensions = glGetString (GL_EXTENSIONS);

  if (!glExtensions)
  {
    glExtensions = (const unsigned char*) """"; // Protect against some drivers will happily pass back NULL.
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
      writer.WriteLine (string.Format ("  s_deviceConfig.m_featureSupported [GLEW_{0}] = (supportedExtensions.find (\"{0}\") != supportedExtensions.end ());", keypair.Key));
    }

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

    if (featureAndExtensionNodes.Count > 0)
    {
      HashSet<string> definedPrototypes = new HashSet<string> ();

      Dictionary<string, HashSet<string>> featureBasedPrototypes = new Dictionary<string, HashSet<string>> ();

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
            string command = commandNode.Attributes["name"].Value;

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

          featureBasedPrototypes[keypair.Key] = requiredCommands;
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

          writer.WriteLine (string.Format ("  // {0}", keypair.Key));

          writer.WriteLine (string.Format ("  if (s_deviceConfig.m_featureSupported [GLEW_{0}])", keypair.Key));

          writer.WriteLine ("  {");

          foreach (string command in keypair.Value)
          {
            string mangedFunctionPointer = string.Format ("PFN{0}PROC", command.ToUpperInvariant ());

            writer.WriteLine (string.Format ("    s_deviceConfig.m_{0} = ({1}) glewGetProcAddress (\"{0}\");", command, mangedFunctionPointer));
          }

          writer.WriteLine ("  }");

          writer.Write (Environment.NewLine);
        }
      }
    }

    writer.WriteLine ("  s_initialised = true;");

    writer.WriteLine ("}");

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer);

    writer.Write (Environment.NewLine);

    //
    // glew::gles::Deinitialise
    //

    writer.WriteLine ("void glew::gles::Deinitialise ()");

    writer.WriteLine ("{");

    writer.WriteLine ("  s_initialised = false;");

    writer.WriteLine ("}");

    writer.Write (Environment.NewLine);

    WriteCommentDivider (writer);
  }

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
