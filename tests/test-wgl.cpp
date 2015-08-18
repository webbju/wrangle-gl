////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define GLEW_USE_WGL 1

#include <wrangle.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT CALLBACK WndProc (HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int WinMain (__in HINSTANCE hInstance, __in_opt HINSTANCE hPrevInstance, __in_opt LPSTR lpCmdLine, __in int nShowCmd)
{
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

      const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();

#if WGL_ARB_create_context && WGL_ARB_create_context_profile
      if (wglConfig.m_featureSupported [GLEW_WGL_ARB_create_context]
        && wglConfig.m_featureSupported [GLEW_WGL_ARB_create_context_profile])
      {
        int attribs [] =
        {
          WGL_CONTEXT_MAJOR_VERSION_ARB, 3,
          WGL_CONTEXT_MINOR_VERSION_ARB, 1,
          WGL_CONTEXT_PROFILE_MASK_ARB, WGL_CONTEXT_ES2_PROFILE_BIT_EXT,
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

      const char *renderer = (const char *) glGetString (GL_RENDERER);

      const char *version = (const char *) glGetString (GL_VERSION);

      const char *extensions = (const char *) glGetString (GL_EXTENSIONS);

      int swapInterval = wglGetSwapIntervalEXT ();

      (void) swapInterval;

      //glew::glcore::Initialise ();

      //glew::glcore::Deinitialise ();

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