////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text;

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

    static int Main (string [] args)
    {
      // 
      // EGL
      // 

      try
      {
        string api = @"khronos\repository\api\egl.xml";

        string hpp = @"include\wrangle-egl.h";

        string cpp = @"src\wrangle-egl.cpp";

        GeneratorEGL generator = new GeneratorEGL (api);

        StreamWriter writer;

        using (writer = new StreamWriter (hpp, false))
        {
          generator.ExportHpp (ref writer);

          writer.Close ();
        }

        using (writer = new StreamWriter (cpp, false))
        {
          generator.ExportCpp (ref writer);

          writer.Close ();
        }
      }
      catch (Exception e)
      {
        string exception = string.Format ("Exception: {0}\nStack trace:\n{1}", e.Message, e.StackTrace);

        Console.WriteLine (exception);

        Trace.WriteLine (exception);
      }

      // 
      // WGL
      // 

      try
      {
        string api = @"khronos\repository\api\wgl.xml";

        string hpp = @"include\wrangle-wgl.h";

        string cpp = @"src\wrangle-wgl.cpp";

        GeneratorWGL generator = new GeneratorWGL (api);

        StreamWriter writer;

        using (writer = new StreamWriter (hpp, false))
        {
          generator.ExportHpp (ref writer);

          writer.Close ();
        }

        using (writer = new StreamWriter (cpp, false))
        {
          generator.ExportCpp (ref writer);

          writer.Close ();
        }
      }
      catch (Exception e)
      {
        string exception = string.Format ("Exception: {0}\nStack trace:\n{1}", e.Message, e.StackTrace);

        Console.WriteLine (exception);

        Trace.WriteLine (exception);
      }

      // 
      // GLX
      // 

      try
      {
        string api = @"khronos\repository\api\glx.xml";

        string hpp = @"include\wrangle-glx.h";

        string cpp = @"src\wrangle-glx.cpp";

        GeneratorGLX generator = new GeneratorGLX (api);

        StreamWriter writer;

        using (writer = new StreamWriter (hpp, false))
        {
          generator.ExportHpp (ref writer);

          writer.Close ();
        }

        using (writer = new StreamWriter (cpp, false))
        {
          generator.ExportCpp (ref writer);

          writer.Close ();
        }
      }
      catch (Exception e)
      {
        string exception = string.Format ("Exception: {0}\nStack trace:\n{1}", e.Message, e.StackTrace);

        Console.WriteLine (exception);

        Trace.WriteLine (exception);
      }

      // 
      // GL Core ARB
      // 

      try
      {
        string api = @"khronos\repository\api\gl.xml";

        string hpp = @"include\wrangle-gl.h";

        string cpp = @"src\wrangle-gl.cpp";

        GeneratorGL generator = new GeneratorGL (api);

        StreamWriter writer;

        using (writer = new StreamWriter (hpp, false))
        {
          generator.ExportHpp (ref writer);

          writer.Close ();
        }

        using (writer = new StreamWriter (cpp, false))
        {
          generator.ExportCpp (ref writer);

          writer.Close ();
        }
      }
      catch (Exception e)
      {
        string exception = string.Format ("Exception: {0}\nStack trace:\n{1}", e.Message, e.StackTrace);

        Console.WriteLine (exception);

        Trace.WriteLine (exception);
      }

      // 
      // GL Core ARB
      // 

      try
      {
        string api = @"khronos\repository\api\gl.xml";

        string hpp = @"include\wrangle-glcore.h";

        string cpp = @"src\wrangle-glcore.cpp";

        GeneratorGLCore generator = new GeneratorGLCore (api);

        StreamWriter writer;

        using (writer = new StreamWriter (hpp, false))
        {
          generator.ExportHpp (ref writer);

          writer.Close ();
        }

        using (writer = new StreamWriter (cpp, false))
        {
          generator.ExportCpp (ref writer);

          writer.Close ();
        }
      }
      catch (Exception e)
      {
        string exception = string.Format ("Exception: {0}\nStack trace:\n{1}", e.Message, e.StackTrace);

        Console.WriteLine (exception);

        Trace.WriteLine (exception);
      }

      // 
      // GLES 1.x/2.x/3.x
      // 

      try
      {
        string api = @"khronos\repository\api\gl.xml";

        string hpp = @"include\wrangle-gles.h";

        string cpp = @"src\wrangle-gles.cpp";

        GeneratorGLES generator = new GeneratorGLES (api);

        StreamWriter writer;

        using (writer = new StreamWriter (hpp, false))
        {
          generator.ExportHpp (ref writer);

          writer.Close ();
        }

        using (writer = new StreamWriter (cpp, false))
        {
          generator.ExportCpp (ref writer);

          writer.Close ();
        }
      }
      catch (Exception e)
      {
        string exception = string.Format ("Exception: {0}\nStack trace:\n{1}", e.Message, e.StackTrace);

        Console.WriteLine (exception);

        Trace.WriteLine (exception);
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
