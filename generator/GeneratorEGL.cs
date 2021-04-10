﻿////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
      : base (filename, new string [] []
      {
        new string []{ "egl", "1.0" }
      })
    {
      m_funcApiEntryPrefix = "EGLAPI";

      m_funcApiEntryPostfix = "EGLAPIENTRY";

      m_funcPointerApiEntryPrefix = "";

      m_funcPointerApiEntryPostfix = "EGLAPIENTRYP";

      m_funcGetProcAddress = "_glew_eglGetProcAddress";
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public override void ExportHppIncludes(StreamWriter writer)
    {
      base.ExportHppIncludes(writer);

      writer.Write("\n#include <EGL/egl.h>\n");

      writer.Write("\n#include <EGL/eglext.h>\n\n");
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public override void ExportHppPublicApi(StreamWriter writer)
    {
      writer.Write (@"
      Context(EGLDisplay display, std::unordered_set<std::string> &supportedFeatures, void* (*eglGetProcAddressFunc)(const char*)) {
        // Client features and extensions.
        PopulateFeatures(EGL_NO_DISPLAY, supportedFeatures);
        PopulateExtensions(EGL_NO_DISPLAY, supportedFeatures);
        if (display != EGL_NO_DISPLAY) {
          // Display features and extensions.
          PopulateFeatures(display, supportedFeatures);
          PopulateExtensions(display, supportedFeatures);
        }
        Context(supportedFeatures, eglGetProcAddressFunc);
      }

      bool PopulateFeatures(EGLDisplay display, std::unordered_set<std::string> &supportedFeatures) {
        const unsigned char *version = (const unsigned char *) eglQueryString(display, EGL_VERSION);
        const size_t versionLen = (version != nullptr) ? strlen((const char *) version) : 0;
        if (versionLen) {
          unsigned int major = 0, minor = 0;
          const char *divisor = strchr((const char *) version, '.');
          if (divisor) {
            major = (*(char *)(divisor - 1)) - '0';
            minor = (*(char *)(divisor + 1)) - '0';
          }
          unsigned int versionCode = (major * 10) + minor;
          if (versionCode >= 10) supportedFeatures.insert(std::string(""EGL_VERSION_1_0""));
          if (versionCode >= 11) supportedFeatures.insert(std::string(""EGL_VERSION_1_1""));
          if (versionCode >= 12) supportedFeatures.insert(std::string(""EGL_VERSION_1_2""));
          if (versionCode >= 13) supportedFeatures.insert(std::string(""EGL_VERSION_1_3""));
          if (versionCode >= 14) supportedFeatures.insert(std::string(""EGL_VERSION_1_4""));
          if (versionCode >= 15) supportedFeatures.insert(std::string(""EGL_VERSION_1_5""));
          return (versionCode >= 10);
        }
        return false;
      }

      bool PopulateExtensions(EGLDisplay display, std::unordered_set<std::string> &supportedFeatures) {
        // If `display` is EGL_NO_DISPLAY then EGL_EXTENSIONS describes the supported client extensions.
        // If `display` is a valid initialised display, then EGL_EXTENSIONS describes the supported display extensions.
        // The set of supported client extensions is disjoint from the set of extensions supported by any given display.
        const unsigned char* extensions = (const unsigned char*) eglQueryString(display, EGL_EXTENSIONS);
        const size_t extensionsLen = (extensions != nullptr) ? strlen((const char*)extensions) : 0;
        if (extensionsLen) {
          unsigned char* start = const_cast<unsigned char*>(extensions);
          unsigned char* end = nullptr;
          char buffer[256];
          memset(buffer, 0, sizeof(buffer));
          do {
            const char* seperator = strchr((const char*)start, ' ');
            if (seperator) {
              const size_t len = (((uintptr_t)seperator - (uintptr_t)start) / sizeof(unsigned char));
    #if _WIN32
              strncpy_s(buffer, sizeof(buffer), (const char *)start, len);
    #else
              strncpy(buffer, (const char*)start, len);
    #endif
              buffer[GLEW_MIN(len, sizeof(buffer) - 1)] = '\0';
              end = (unsigned char*)(seperator + 1); // skip tokenize character
            } else {
              const size_t len = strlen((const char*)start);
    #if _WIN32
              strncpy_s(buffer, sizeof(buffer), (const char *)start, len);
    #else
              strncpy(buffer, (const char*)start, len);
    #endif
              buffer[GLEW_MIN(len + 1, sizeof(buffer) - 1)] = '\0';
              end = nullptr;
            }
            std::string extension(buffer);
            if (supportedFeatures.find(extension) == supportedFeatures.end()) {
              supportedFeatures.insert(extension);
            }
          } while ((start && *start != '\0') && (end && *end != '\0'));
          return true;
        }
        return false;
      }
");
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
