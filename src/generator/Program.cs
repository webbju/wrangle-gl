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
        string api = @"egl.xml";

        string hpp = @"wrangle-egl.h";

        string cpp = @"wrangle-egl.cpp";

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
        string api = @"wgl.xml";

        string hpp = @"wrangle-wgl.h";

        string cpp = @"wrangle-wgl.cpp";

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
        string api = @"glx.xml";

        string hpp = @"wrangle-glx.h";

        string cpp = @"wrangle-glx.cpp";

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
        string api = @"gl.xml";

        string hpp = @"wrangle-gl.h";

        string cpp = @"wrangle-gl.cpp";

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
      // GLES 1.x/2.x/3.x
      //

      try
      {
        string api = @"gl.xml";

        string hpp = @"wrangle-gles.h";

        string cpp = @"wrangle-gles.cpp";

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
