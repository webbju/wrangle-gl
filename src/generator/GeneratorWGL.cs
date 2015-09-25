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

  public class GeneratorWGL : Generator
  {

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public GeneratorWGL (string filename)
      : base (filename, new string [] []
      {
        new string []{ "wgl", "1.0" }
      })
    {
      m_funcApiEntryPrefix = "WINGDIAPI";

      m_funcApiEntryPostfix = "WINAPI";

      m_funcPointerApiEntryPrefix = "";

      m_funcPointerApiEntryPostfix = "WINAPI *";
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public override void ExportHpp (ref StreamWriter writer)
    {
      WriteCommentDivider (ref writer);

      writer.Write (string.Format ("\n#ifndef __{0}_{1}_H__\n#define __{0}_{1}_H__\n\n", "GLEW", m_api [0].ToUpperInvariant ()));

      WriteCommentDivider (ref writer);

      writer.Write ("\n#include <wrangle.h>\n\n");

      writer.Write (@"typedef unsigned int GLenum;
typedef unsigned char GLboolean;
typedef unsigned int GLbitfield;
typedef signed char GLbyte;
typedef short GLshort;
typedef int GLint;
typedef int GLsizei;
typedef unsigned char GLubyte;
typedef unsigned short GLushort;
typedef unsigned int GLuint;
typedef float GLfloat;
typedef float GLclampf;
typedef double GLdouble;
typedef double GLclampd;
typedef void GLvoid;
");

      writer.Write ("\n#include <GL/wgl.h>\n");

      writer.Write ("\n#include <GL/wglext.h>\n\n");

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

      writer.Write ("\n#include <string>\n");

      writer.Write ("\n#include <unordered_set>\n\n");

      base.ExportCpp (ref writer);

      writer.Write ("\n");

      // 
      // glew::wgl::Initialise
      // 

      writer.Write ("glew::wgl::DeviceConfig glew::wgl::s_deviceConfig;\n\n");

      WriteCommentDivider (ref writer);

      writer.Write ("\nvoid glew::wgl::Initialise ()\n{\n");

      writer.Write ("  memset (&s_deviceConfig, 0, sizeof (s_deviceConfig));\n\n");

      writer.Write (@"  // 
  // Determine current driver's feature reporting.
  // 

  PFNWGLGETEXTENSIONSSTRINGARBPROC _wglewGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC) wglGetProcAddress (""wglGetExtensionsStringARB"");

  PFNWGLGETEXTENSIONSSTRINGEXTPROC _wglewGetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC) wglGetProcAddress (""wglGetExtensionsStringEXT"");

  s_deviceConfig.m_featureSupported [GLEW_WGL_VERSION_1_0] = true;

  // 
  // Evaluate extension support.
  // 

  std::unordered_set <std::string> supportedExtensions;

  const unsigned char *wglExtensions = NULL;

  if (_wglewGetExtensionsStringEXT != NULL)
  {
    wglExtensions = (const unsigned char*) _wglewGetExtensionsStringEXT ();
  }
  else if (_wglewGetExtensionsStringARB != NULL)
  {
    wglExtensions = (const unsigned char*) _wglewGetExtensionsStringARB (wglGetCurrentDC());
  }

  if (!wglExtensions)
  {
    wglExtensions = (const unsigned char*) """"; // Protect against some drivers will happily passing back NULL.
  }

  const size_t wglExtensionsLen = strlen ((const char *) wglExtensions);

  if (wglExtensionsLen)
  {
    unsigned char *thisExtStart = (unsigned char *) wglExtensions;

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

            HashSet<string> requiredCommands = new HashSet<string> ();

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

            if (requiredCommands.Count > 0)
            {
              writer.Write (string.Format ("  // {0}\n", keypair.Key));

              writer.Write (string.Format ("  //if (s_deviceConfig.m_featureSupported [GLEW_{0}])\n  {{\n", keypair.Key));

              foreach (string command in requiredCommands)
              {
                string mangedFunctionPointer = string.Format ("PFN{0}PROC", command.ToUpperInvariant ());

                writer.Write (string.Format ("    s_deviceConfig.m_{0} = ({1}) glewGetProcAddress (\"{0}\");\n", command, mangedFunctionPointer));
              }

              writer.Write ("  }\n\n");
            }
          }
        }
      }

      writer.Write ("}\n\n");

      WriteCommentDivider (ref writer);

      // 
      // glew::wgl::Deinitialise
      // 

      writer.Write ("\nvoid glew::wgl::Deinitialise ()\n{\n");

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
