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

      //
      // KHR
      //

      try
      {
        Directory.CreateDirectory("KHR");

        await File.WriteAllBytesAsync("KHR/khrplatform.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/EGL-Registry/refs/heads/main/api/KHR/khrplatform.h"));
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
        Directory.CreateDirectory("EGL");

        await File.WriteAllBytesAsync("EGL/egl.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/EGL-Registry/refs/heads/main/api/EGL/egl.h"));

        await File.WriteAllBytesAsync("EGL/eglext.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/EGL-Registry/refs/heads/main/api/EGL/eglext.h"));

        await File.WriteAllBytesAsync("EGL/eglplatform.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/EGL-Registry/refs/heads/main/api/EGL/eglplatform.h"));

        using Stream stream = await httpClient.GetStreamAsync("https://raw.githubusercontent.com/KhronosGroup/EGL-Registry/refs/heads/main/api/egl.xml");

        GeneratorEGL generator = new GeneratorEGL(stream);

        using (var writer = new StreamWriter("wrangle-egl.h"))
        {
          generator.ExportHpp(writer);
        }

        using (var writer = new StreamWriter("wrangle-egl.cpp"))
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
        Directory.CreateDirectory("GL");

        await File.WriteAllBytesAsync("GL/wgl.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GL/wgl.h"));

        await File.WriteAllBytesAsync("GL/wglext.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GL/wglext.h"));

        using Stream stream = await httpClient.GetStreamAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/xml/wgl.xml");

        GeneratorWGL generator = new GeneratorWGL(stream);

        using (var writer = new StreamWriter("wrangle-wgl.h"))
        {
          generator.ExportHpp(writer);
        }

        using (var writer = new StreamWriter("wrangle-wgl.cpp"))
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
        Directory.CreateDirectory("GL");

        await File.WriteAllBytesAsync("GL/glxext.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GL/glxext.h"));

        using Stream stream = await httpClient.GetStreamAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/xml/glx.xml");

        GeneratorGLX generator = new GeneratorGLX(stream);

        using (var writer = new StreamWriter("wrangle-glx.h"))
        {
          generator.ExportHpp(writer);
        }

        using (var writer = new StreamWriter("wrangle-glx.cpp"))
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
        Directory.CreateDirectory("GL");

        await File.WriteAllBytesAsync("GL/glcorearb.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GL/glcorearb.h"));

        await File.WriteAllBytesAsync("GL/glext.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GL/glext.h"));

        using Stream stream = await httpClient.GetStreamAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/xml/gl.xml");

        GeneratorGL generator = new GeneratorGL(stream);

        using (var writer = new StreamWriter("wrangle-gl.h"))
        {
          generator.ExportHpp(writer);
        }

        using (var writer = new StreamWriter("wrangle-gl.cpp"))
        {
          generator.ExportCpp(writer);
        }
      }
      catch (Exception e)
      {
        Log.Error(e, "Failed GL export");
      }

      //
      // GLES 1.x/2.x/3.x
      //

      try
      {
        Directory.CreateDirectory(Path.Combine("GLES", "1.0"));

        await File.WriteAllBytesAsync("GLES/1.0/gl.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES/1.0/gl.h"));

        await File.WriteAllBytesAsync("GLES/egl.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES/egl.h"));

        await File.WriteAllBytesAsync("GLES/gl.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES/gl.h"));

        await File.WriteAllBytesAsync("GLES/glext.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES/glext.h"));

        await File.WriteAllBytesAsync("GLES/glplatform.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES/glplatform.h"));

        Directory.CreateDirectory("GLES2");

        await File.WriteAllBytesAsync("GLES2/gl2.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES2/gl2.h"));

        await File.WriteAllBytesAsync("GLES2/gl2ext.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES2/gl2ext.h"));

        await File.WriteAllBytesAsync("GLES2/gl2platform.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES2/gl2platform.h"));

        Directory.CreateDirectory("GLES3");

        await File.WriteAllBytesAsync("GLES3/gl3.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES3/gl3.h"));

        await File.WriteAllBytesAsync("GLES3/gl3platform.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES3/gl3platform.h"));

        await File.WriteAllBytesAsync("GLES3/gl31.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES3/gl31.h"));

        await File.WriteAllBytesAsync("GLES3/gl32.h", await httpClient.GetByteArrayAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/api/GLES3/gl32.h"));

        using Stream stream = await httpClient.GetStreamAsync("https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/refs/heads/main/xml/gl.xml");

        GeneratorGLES generator = new GeneratorGLES(stream);

        using (var writer = new StreamWriter("wrangle-gles.h"))
        {
          generator.ExportHpp(writer);
        }

        using (var writer = new StreamWriter("wrangle-gles.cpp"))
        {
          generator.ExportCpp(writer);
        }
      }
      catch (Exception e)
      {
        Log.Error(e, "Failed GLEX export");
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
