////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(GLEW_USE_OPENGL)
#include <wrangle-gl.h>
#elif defined(GLEW_USE_OPENGL_ES)
#include <wrangle-gles.h>
#endif

#include <wrangle-wgl.h>

#include <cstdio>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT CALLBACK WndProc (HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static void CheckGLError (const bool shouldAssert, const char* file, const int line)
{
  GLenum err = glGetError ();

  if (err != GL_NO_ERROR)
  {
    char buffer [512];

    snprintf (buffer, 512, "[%s:%d] glGetError returned 0x%x\n", file, line, err);

#if WIN32
    OutputDebugString (buffer);
#endif

    fputs (buffer, stderr);

    fflush (stderr);
  }

  if (shouldAssert)
  {
    GLEW_ASSERT (err == GL_NO_ERROR);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define AssertNoGLErrors() CheckGLError(true, __FILE__, __LINE__)

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int WINAPI WinMain (__in HINSTANCE hInstance, __in_opt HINSTANCE hPrevInstance, __in LPSTR lpCmdLine, __in int nShowCmd)
{
  (void) hPrevInstance;
  (void) lpCmdLine;
  (void) nShowCmd;

  MSG msg = {0};
  WNDCLASS wc = {0};
  wc.lpfnWndProc = WndProc;
  wc.hInstance = hInstance;
  wc.hbrBackground = (HBRUSH) (COLOR_BACKGROUND);
  wc.lpszClassName = "oglversionchecksample";
  wc.style = CS_OWNDC;

  if (!RegisterClass (&wc))
  {
    return 1;
  }

  CreateWindow (wc.lpszClassName, "openglversioncheck", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 0, 0, 640, 480, 0, 0, hInstance, 0);

  while (GetMessage (&msg, NULL, 0, 0) > 0)
  {
    DispatchMessage (&msg);
  }

  return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT CALLBACK WndProc (HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
  switch (message)
  {
    case WM_CREATE:
    {
      PIXELFORMATDESCRIPTOR pfd =
      {
        sizeof (PIXELFORMATDESCRIPTOR),
        1,
        PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER,    //Flags
        PFD_TYPE_RGBA,            //The kind of framebuffer. RGBA or palette.
        32,                        //Colordepth of the framebuffer.
        0, 0, 0, 0, 0, 0,
        0,
        0,
        0,
        0, 0, 0, 0,
        24,                        //Number of bits for the depthbuffer
        8,                        //Number of bits for the stencilbuffer
        0,                        //Number of Aux buffers in the framebuffer.
        PFD_MAIN_PLANE,
        0,
        0, 0, 0
      };

      HDC deviceContext = GetDC (hWnd);

      int windowsPixelFormat;

      windowsPixelFormat = ChoosePixelFormat (deviceContext, &pfd);

      SetPixelFormat (deviceContext, windowsPixelFormat, &pfd);

      //
      // Context creation and tear-down.
      //

      HGLRC deviceRenderContext = wglCreateContext (deviceContext);

      wglMakeCurrent (deviceContext, deviceRenderContext);

      glew::wgl::Initialise ();

#if 1 && WGL_ARB_create_context
      const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();

      if (wglConfig.m_featureSupported [GLEW_WGL_ARB_create_context]
    #if GLEW_USE_OPENGL_ES && WGL_ARB_create_context_profile
        && wglConfig.m_featureSupported [GLEW_WGL_ARB_create_context_profile]
    #endif
        )
      {
        int attribs [] =
        {
          WGL_CONTEXT_MAJOR_VERSION_ARB, 3,
          WGL_CONTEXT_MINOR_VERSION_ARB, 1,
        #if GLEW_USE_OPENGL_ES && WGL_ARB_create_context_profile
          WGL_CONTEXT_PROFILE_MASK_ARB, WGL_CONTEXT_ES2_PROFILE_BIT_EXT,
        #endif
          WGL_CONTEXT_FLAGS_ARB, 0,
          0
        };

        HGLRC attribsRenderContext = wglCreateContextAttribsARB (deviceContext, 0, attribs);

        wglMakeCurrent (NULL, NULL);

        wglDeleteContext (deviceRenderContext);

        deviceRenderContext = attribsRenderContext;

        wglMakeCurrent (deviceContext, deviceRenderContext);
      }
#endif

#if defined(GLEW_USE_OPENGL)
      glew::gl::Initialise ();
#elif defined(GLEW_USE_OPENGL_ES)
      glew::gles::Initialise ();
#endif

      AssertNoGLErrors ();

      const char* vendor = (const char*)glGetString(GL_VENDOR);

      AssertNoGLErrors();

      fprintf(stdout, "Vendor: %s", vendor);

      const char *renderer = (const char *) glGetString (GL_RENDERER);

      AssertNoGLErrors ();

      fprintf(stdout, "Renderer: %s", renderer);

      const char *version = (const char *) glGetString (GL_VERSION);

      AssertNoGLErrors ();

      fprintf(stdout, "Version: %s", version);

      const char* glslVersion = (const char*)glGetString (GL_SHADING_LANGUAGE_VERSION);

      AssertNoGLErrors();

      fprintf(stdout, "GLSL Version: %s", glslVersion);

      const char *extensions = (const char *) glGetString (GL_EXTENSIONS);

      AssertNoGLErrors ();

      fprintf(stdout, "Extensions: %s", extensions);

#if defined(GLEW_USE_OPENGL)
      glew::gl::Deinitialise ();
#elif defined(GLEW_USE_OPENGL_ES)
      glew::gles::Deinitialise ();
#endif

      AssertNoGLErrors ();

      glew::wgl::Deinitialise ();

      wglDeleteContext (deviceRenderContext);

      PostQuitMessage (0);

      break;
    }
    default:
    {
      return DefWindowProc (hWnd, message, wParam, lParam);
    }
  }

  return 0;
}
