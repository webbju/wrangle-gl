////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(GLEW_USE_OPENGL)
#include <wrangle-gl.h>
#elif defined(GLEW_USE_OPENGL_ES)
#include <wrangle-gles.h>
#endif

#include <wrangle-egl.h>

#include <cstdio>

#define PBUFFER 1

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static const char* DescribeEGLError (EGLint err)
{
  switch (err)
  {
    case EGL_TRUE:                return "EGL_TRUE";
    case EGL_FALSE:               return "EGL_FALSE";
    // Error codes:
    case EGL_NOT_INITIALIZED:     return "EGL_NOT_INITIALIZED";
    case EGL_BAD_ACCESS:          return "EGL_BAD_ACCESS";
    case EGL_BAD_ALLOC:           return "EGL_BAD_ALLOC";
    case EGL_BAD_ATTRIBUTE:       return "EGL_BAD_ATTRIBUTE";
    case EGL_BAD_CONTEXT:         return "EGL_BAD_CONTEXT";
    case EGL_BAD_CONFIG:          return "EGL_BAD_CONFIG";
    case EGL_BAD_CURRENT_SURFACE: return "EGL_BAD_CURRENT_SURFACE";
    case EGL_BAD_DISPLAY:         return "EGL_BAD_DISPLAY";
    case EGL_BAD_SURFACE:         return "EGL_BAD_SURFACE";
    case EGL_BAD_MATCH:           return "EGL_BAD_MATCH";
    case EGL_BAD_PARAMETER:       return "EGL_BAD_PARAMETER";
    case EGL_BAD_NATIVE_PIXMAP:   return "EGL_BAD_NATIVE_PIXMAP";
    case EGL_BAD_NATIVE_WINDOW:   return "EGL_BAD_NATIVE_WINDOW";
    case EGL_CONTEXT_LOST:        return "EGL_CONTEXT_LOST";
    case EGL_SUCCESS:             return "EGL_SUCCESS";
  }

  return "Unknown";
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static void CheckEGLError (const bool shouldAssert, const char* file, const int line)
{
  EGLint err = eglGetError ();

  if (err != EGL_SUCCESS)
  {
    char buffer [512];

    snprintf (buffer, 512, "[%s:%d] eglGetError returned 0x%x (%s)\n", file, line, err, DescribeEGLError (err));

#if WIN32
    OutputDebugString (buffer);
#endif

    fputs (buffer, stderr);

    fflush (stderr);
  }

  if (shouldAssert)
  {
    GLEW_ASSERT (err == EGL_SUCCESS);
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
      char buffer[512];

      snprintf(buffer, 512, "[%s:%d] glGetError returned 0x%x\n", file, line, err);

#if WIN32
      OutputDebugString(buffer);
#endif

      fputs(buffer, stderr);

      fflush(stderr);
  }

  if (shouldAssert)
  {
      GLEW_ASSERT(err == GL_NO_ERROR);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define AssertNoEGLErrors() CheckEGLError(true, __FILE__, __LINE__)

#define AssertNoGLErrors() CheckGLError(true, __FILE__, __LINE__)

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int WINAPI WinMain(__in HINSTANCE hInstance, __in_opt HINSTANCE hPrevInstance, __in LPSTR lpCmdLine, __in int nShowCmd)
{
  (void)hPrevInstance;
  (void)lpCmdLine;
  (void)nShowCmd;

  MSG msg = { 0 };
  WNDCLASS wc = { 0 };
  wc.lpfnWndProc = WndProc;
  wc.hInstance = hInstance;
  wc.hbrBackground = (HBRUSH)(COLOR_BACKGROUND);
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
          sizeof(PIXELFORMATDESCRIPTOR),
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

      HDC deviceContext = GetDC(hWnd);

      int windowsPixelFormat;

      windowsPixelFormat = ChoosePixelFormat(deviceContext, &pfd);

      SetPixelFormat(deviceContext, windowsPixelFormat, &pfd);

      EGLBoolean success = EGL_FALSE;

      EGLDisplay display = eglGetDisplay((EGLNativeDisplayType)deviceContext);

      if (display == EGL_NO_DISPLAY)
      {
        display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
      }

      AssertNoEGLErrors();

      EGLint major = 0, minor = 0;

      success = eglInitialize(display, &major, &minor);

      AssertNoEGLErrors();

      GLEW_ASSERT(success == EGL_TRUE);

      glew::egl::Initialise(display);

      AssertNoEGLErrors();

#if defined(GLEW_USE_OPENGL)
      success = eglBindAPI(EGL_OPENGL_API);
#elif defined(GLEW_USE_OPENGL_ES)
      success = eglBindAPI(EGL_OPENGL_ES_API);
#endif

      AssertNoEGLErrors();

      GLEW_ASSERT(success == EGL_TRUE);

      EGLint configsReturned;

      const EGLint configurationAttributes[] =
      {
        EGL_RED_SIZE, 8,
        EGL_GREEN_SIZE, 8,
        EGL_BLUE_SIZE, 8,
        EGL_DEPTH_SIZE, 8,
        EGL_SURFACE_TYPE, PBUFFER ? EGL_PBUFFER_BIT : EGL_WINDOW_BIT,
        EGL_RENDERABLE_TYPE,
#if defined(GLEW_USE_OPENGL)
        EGL_OPENGL_BIT,
#elif defined(GLEW_USE_OPENGL_ES)
        EGL_OPENGL_ES2_BIT,
#endif
        EGL_NONE
      };

      EGLConfig config;

      success = eglChooseConfig(display, configurationAttributes, &config, 1, &configsReturned);

      AssertNoEGLErrors();

      GLEW_ASSERT(success == EGL_TRUE);

      GLEW_ASSERT(configsReturned == 1);

      EGLSurface surface = EGL_NO_SURFACE;

#if PBUFFER
      EGLint pbufferAttributes[] =
      {
        EGL_WIDTH, 256,
        EGL_HEIGHT, 256,
        EGL_NONE,
      };

      surface = eglCreatePbufferSurface(display, config, pbufferAttributes);
#else
      surface = eglCreateWindowSurface(display, config, (EGLNativeWindowType)hWnd, NULL);

      if (surface == EGL_NO_SURFACE)
      {
          eglGetError(); // Clear error

          surface = eglCreateWindowSurface(display, config, NULL, NULL);
      }
#endif

      AssertNoEGLErrors();

      GLEW_ASSERT(surface != EGL_NO_SURFACE);

      EGLint contextAttributes[] = { EGL_CONTEXT_CLIENT_VERSION, 2, EGL_NONE };

      EGLContext context = eglCreateContext(display, config, EGL_NO_CONTEXT, contextAttributes);

      AssertNoEGLErrors();

      GLEW_ASSERT(context != EGL_NO_CONTEXT);

      success = eglMakeCurrent(display, surface, surface, context);

      AssertNoEGLErrors();

      GLEW_ASSERT(success == EGL_TRUE);

#if defined(GLEW_USE_OPENGL)
      glew::gl::Initialise();
#elif defined(GLEW_USE_OPENGL_ES)
      glew::gles::Initialise();
#endif

      AssertNoGLErrors();

      const char* vendor = (const char*)glGetString(GL_VENDOR);

      AssertNoGLErrors();

      fprintf(stdout, "Vendor: %s", vendor);

      const char* renderer = (const char*)glGetString(GL_RENDERER);

      AssertNoGLErrors();

      fprintf(stdout, "Renderer: %s", renderer);

      const char* version = (const char*)glGetString(GL_VERSION);

      AssertNoGLErrors();

      fprintf(stdout, "Version: %s", version);

      const char* glslVersion = (const char*)glGetString(GL_SHADING_LANGUAGE_VERSION);

      AssertNoGLErrors();

      fprintf(stdout, "GLSL Version: %s", glslVersion);

      const char* extensions = (const char*)glGetString(GL_EXTENSIONS);

      AssertNoGLErrors();

      fprintf(stdout, "Extensions: %s", extensions);

#if defined(GLEW_USE_OPENGL)
      glew::gl::Deinitialise();
#elif defined(GLEW_USE_OPENGL_ES)
      glew::gles::Deinitialise();
#endif

      success = eglTerminate(display);

      AssertNoEGLErrors();

      GLEW_ASSERT(success == EGL_TRUE);

      glew::egl::Deinitialise();

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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
