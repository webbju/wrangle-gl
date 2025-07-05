////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;
using Serilog;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace wrangle_gl_generator
{

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  class Program
  {

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    static async Task<int> Main (string [] args)
    {
      Log.Logger = new LoggerConfiguration()
        .WriteTo.Debug()
        .WriteTo.Console()
        .CreateLogger();

      using HttpClient httpClient = new HttpClient();

      var includeDir = Directory.CreateDirectory("include");

      var srcDir = Directory.CreateDirectory("src");

      //
      // KHR
      //

      try
      {
        var khrDir = Directory.CreateDirectory(Path.Combine(includeDir.FullName, "KHR"));

        await File.WriteAllBytesAsync(Path.Combine(khrDir.FullName, "khrplatform.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/EGL-Registry/refs/heads/main/api/KHR/khrplatform.h"));
      }
      catch (Exception e)
      {
        Log.Error(e, "Failed KHR export");
      }

      //
      // EGL
      //

      try
      {
        var eglDir = Directory.CreateDirectory(Path.Combine(includeDir.FullName, "EGL"));

        await File.WriteAllBytesAsync(Path.Combine(eglDir.FullName, "egl.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/EGL-Registry/refs/heads/main/api/EGL/egl.h"));

        await File.WriteAllBytesAsync(Path.Combine(eglDir.FullName, "eglext.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/EGL-Registry/refs/heads/main/api/EGL/eglext.h"));

        await File.WriteAllBytesAsync(Path.Combine(eglDir.FullName, "eglplatform.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/EGL-Registry/refs/heads/main/api/EGL/eglplatform.h"));

        using Stream stream = await httpClient.GetStreamAsync("https://raw.githubusercontent.com/KhronosGroup/EGL-Registry/refs/heads/main/api/egl.xml");

        var generator = new GeneratorEGL(stream);

        using (var writer = new StreamWriter(Path.Combine(includeDir.FullName, "wrangle-egl.h")))
        {
          generator.ExportHpp(writer);
        }

        using (var writer = new StreamWriter(Path.Combine(srcDir.FullName, "wrangle-egl.cpp")))
        {
          generator.ExportCpp(writer);
        }
      }
      catch (Exception e)
      {
        Log.Error(e, "Failed EGL export");
      }

      //
      // WGL
      //

      try
      {
        var glDir = Directory.CreateDirectory(Path.Combine(includeDir.FullName, "GL"));

        await File.WriteAllBytesAsync(Path.Combine(glDir.FullName, "wgl.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GL/wgl.h"));

        await File.WriteAllBytesAsync(Path.Combine(glDir.FullName, "wglext.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GL/wglext.h"));

        using Stream stream = await httpClient.GetStreamAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/xml/wgl.xml");

        var generator = new GeneratorWGL(stream);

        using (var writer = new StreamWriter(Path.Combine(includeDir.FullName, "wrangle-wgl.h")))
        {
          generator.ExportHpp(writer);
        }

        using (var writer = new StreamWriter(Path.Combine(srcDir.FullName, "wrangle-wgl.cpp")))
        {
          generator.ExportCpp(writer);
        }
      }
      catch (Exception e)
      {
        Log.Error(e, "Failed WGL export");
      }

      //
      // GLX
      //

      try
      {
        var glDir = Directory.CreateDirectory(Path.Combine(includeDir.FullName, "GL"));

        await File.WriteAllBytesAsync(Path.Combine(glDir.FullName, "glxext.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GL/glxext.h"));

        using Stream stream = await httpClient.GetStreamAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/xml/glx.xml");

        var generator = new GeneratorGLX(stream);

        using (var writer = new StreamWriter(Path.Combine(includeDir.FullName, "wrangle-glx.h")))
        {
          generator.ExportHpp(writer);
        }

        using (var writer = new StreamWriter(Path.Combine(srcDir.FullName, "wrangle-glx.cpp")))
        {
          generator.ExportCpp(writer);
        }
      }
      catch (Exception e)
      {
        Log.Error(e, "Failed GLX export");
      }

      //
      // GL Core ARB
      //

      try
      {
        var glDir = Directory.CreateDirectory(Path.Combine(includeDir.FullName, "GL"));

        await File.WriteAllBytesAsync(Path.Combine(glDir.FullName, "glcorearb.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GL/glcorearb.h"));

        await File.WriteAllBytesAsync(Path.Combine(glDir.FullName, "glext.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GL/glext.h"));

        using Stream stream = await httpClient.GetStreamAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/xml/gl.xml");

        var generator = new GeneratorGL(stream);

        using (var writer = new StreamWriter(Path.Combine(includeDir.FullName, "wrangle-gl.h")))
        {
          generator.ExportHpp(writer);
        }

        using (var writer = new StreamWriter(Path.Combine(srcDir.FullName, "wrangle-gl.cpp")))
        {
          generator.ExportCpp(writer);
        }
      }
      catch (Exception e)
      {
        Log.Error(e, "Failed OpenGL Core ARB export");
      }

      //
      // GLES 1.x/2.x/3.x
      //

      try
      {
        var glESDir = Directory.CreateDirectory(Path.Combine(includeDir.FullName, "GLES"));

        var glES1Dir = glESDir.CreateSubdirectory("1.0");

        await File.WriteAllBytesAsync(Path.Combine(glES1Dir.FullName, "gl.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES/1.0/gl.h"));

        await File.WriteAllBytesAsync(Path.Combine(glESDir.FullName, "egl.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES/egl.h"));

        await File.WriteAllBytesAsync(Path.Combine(glESDir.FullName, "gl.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES/gl.h"));

        await File.WriteAllBytesAsync(Path.Combine(glESDir.FullName, "glext.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES/glext.h"));

        await File.WriteAllBytesAsync(Path.Combine(glESDir.FullName, "glplatform.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES/glplatform.h"));

        var glES2Dir = Directory.CreateDirectory(Path.Combine(includeDir.FullName, "GLES2"));

        await File.WriteAllBytesAsync(Path.Combine(glES2Dir.FullName, "gl2.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES2/gl2.h"));

        await File.WriteAllBytesAsync(Path.Combine(glES2Dir.FullName, "gl2ext.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES2/gl2ext.h"));

        await File.WriteAllBytesAsync(Path.Combine(glES2Dir.FullName, "gl2platform.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES2/gl2platform.h"));

        var glES3Dir = Directory.CreateDirectory(Path.Combine(includeDir.FullName, "GLES3"));

        await File.WriteAllBytesAsync(Path.Combine(glES3Dir.FullName, "gl3.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES3/gl3.h"));

        await File.WriteAllBytesAsync(Path.Combine(glES3Dir.FullName, "gl3platform.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES3/gl3platform.h"));

        await File.WriteAllBytesAsync(Path.Combine(glES3Dir.FullName, "gl31.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES3/gl31.h"));

        await File.WriteAllBytesAsync(Path.Combine(glES3Dir.FullName, "gl32.h"), await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES3/gl32.h"));

        using Stream stream = await httpClient.GetStreamAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/xml/gl.xml");

        var generator = new GeneratorGLES(stream);

        using (var writer = new StreamWriter(Path.Combine(includeDir.FullName, "wrangle-gles.h")))
        {
          generator.ExportHpp(writer);
        }

        using (var writer = new StreamWriter(Path.Combine(srcDir.FullName, "wrangle-gles.cpp")))
        {
          generator.ExportCpp(writer);
        }
      }
      catch (Exception e)
      {
        Log.Error(e, "Failed OpenGL ES export");
      }

      return 0;
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
