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

enum LogLevel
{
	LOG_LEVEL_DEBUG = 0,
	LOG_LEVEL_ERROR = 1,
};

static void Log(LogLevel level, const char* format, ...)
{
  char buffer[1024];

  va_list args;
  va_start(args, format);
  vsnprintf(buffer, sizeof(buffer), format, args);
  va_end(args);

#if WIN32
  OutputDebugString(buffer);
#endif

  switch (level)
  {
    case LOG_LEVEL_DEBUG:
      fputs(buffer, stdout);
      fflush(stdout);
      break;
    case LOG_LEVEL_ERROR:
      fputs(buffer, stderr);
      fflush(stderr);
      break;
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static void CheckGLError(const bool shouldAssert, const char* file, const int line)
{
  GLenum err = glGetError();

  if (err != GL_NO_ERROR)
  {
      Log(LOG_LEVEL_ERROR, "[%s:%d] glGetError returned 0x%x\n", file, line, err);
  }

  if (shouldAssert)
  {
      GLEW_ASSERT(err == GL_NO_ERROR);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define AssertNoGLErrors() CheckGLError(true, __FILE__, __LINE__)

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int WINAPI WinMain(__in HINSTANCE hInstance, __in_opt HINSTANCE hPrevInstance, __in LPSTR lpCmdLine, __in int nShowCmd)
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

  if (!RegisterClass(&wc))
  {
    return 1;
  }

  CreateWindow(wc.lpszClassName, "openglversioncheck", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 0, 0, 640, 480, 0, 0, hInstance, 0);

  while (GetMessage(&msg, NULL, 0, 0) > 0)
  {
    DispatchMessage(&msg);
  }

  return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
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
        32,                       //Colordepth of the framebuffer.
        0, 0, 0, 0, 0, 0,
        0,
        0,
        0,
        0, 0, 0, 0,
        24,                       //Number of bits for the depthbuffer
        8,                        //Number of bits for the stencilbuffer
        0,                        //Number of Aux buffers in the framebuffer.
        PFD_MAIN_PLANE,
        0,
        0, 0, 0
      };

      HDC deviceContext = GetDC(hWnd);

      int windowsPixelFormat = ChoosePixelFormat(deviceContext, &pfd);

      bool success = SetPixelFormat(deviceContext, windowsPixelFormat, &pfd);

      GLEW_ASSERT(success);

      //
      // Context creation and tear-down.
      //

      HGLRC deviceRenderContext = wglCreateContext(deviceContext);

      success = wglMakeCurrent(deviceContext, deviceRenderContext);

      GLEW_ASSERT(success);

      glew::wgl::Initialise();

#if 1 && WGL_ARB_create_context
      const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig();

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

        HGLRC attribsRenderContext = wglCreateContextAttribsARB(deviceContext, 0, attribs);

        success = wglMakeCurrent(NULL, NULL);

        GLEW_ASSERT(success);

        success = wglDeleteContext(deviceRenderContext);

        GLEW_ASSERT(success);

        deviceRenderContext = attribsRenderContext;

        success = wglMakeCurrent(deviceContext, deviceRenderContext);

        GLEW_ASSERT(success);
      }
#endif

#if defined(GLEW_USE_OPENGL)
      glew::gl::Initialise();
#elif defined(GLEW_USE_OPENGL_ES)
      glew::gles::Initialise();
#endif

      AssertNoGLErrors();

      const char* vendor = (const char*)glGetString(GL_VENDOR);

      AssertNoGLErrors();

      Log(LOG_LEVEL_DEBUG, "Vendor: %s\n", vendor);

      const char *renderer = (const char *) glGetString (GL_RENDERER);

      AssertNoGLErrors();

      Log(LOG_LEVEL_DEBUG, "Renderer: %s\n", renderer);

      const char *version = (const char *) glGetString (GL_VERSION);

      AssertNoGLErrors();

      Log(LOG_LEVEL_DEBUG, "Version: %s\n", version);

      const char* extensions = (const char*)glGetString(GL_EXTENSIONS);

      AssertNoGLErrors();

      Log(LOG_LEVEL_DEBUG, "Extensions: %s\n", extensions);

      const char* glslVersion = (const char*)glGetString (GL_SHADING_LANGUAGE_VERSION);

      AssertNoGLErrors();

      Log(LOG_LEVEL_DEBUG, "GLSL Version: %s\n", glslVersion);

#if defined(GLEW_USE_OPENGL)
      glew::gl::Deinitialise();
#elif defined(GLEW_USE_OPENGL_ES)
      glew::gles::Deinitialise();
#endif

      AssertNoGLErrors();

      glew::wgl::Deinitialise();

      success = wglDeleteContext(deviceRenderContext);

      GLEW_ASSERT(success);

      PostQuitMessage(0);

      break;
    }
    default:
    {
      return DefWindowProc(hWnd, message, wParam, lParam);
    }
  }

  return 0;
}
