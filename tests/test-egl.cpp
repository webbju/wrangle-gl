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
#include <string>
#include <unordered_set>

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
    default:                      return "???";
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static void CheckEGLError(const bool shouldAssert, const char* file, const int line)
{
  EGLint err = eglGetError();

  if (err != EGL_SUCCESS)
  {
    Log(LOG_LEVEL_ERROR, "[%s:%d] eglGetError returned 0x%x (%s)\n", file, line, err, DescribeEGLError(err));
  }

  if (shouldAssert)
  {
    GLEW_ASSERT(err == EGL_SUCCESS);
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define AssertNoEGLErrors() CheckEGLError(true, __FILE__, __LINE__)

#define AssertNoGLErrors() CheckGLError(true, __FILE__, __LINE__)

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static bool SelectBestFitConfig(EGLDisplay display, EGLConfig *bestFitConfig)
{
  EGLint surfaceType = EGL_WINDOW_BIT, renderableType = EGL_OPENGL_BIT;

  EGLint configAttribs[32] = { 0 };

  do
  {
    int i = 0;

    configAttribs[i++] = EGL_BUFFER_SIZE;
    configAttribs[i++] = 16;

    configAttribs[i++] = EGL_SURFACE_TYPE;
    configAttribs[i++] = surfaceType;

    configAttribs[i++] = EGL_RENDERABLE_TYPE;
#if defined(GLEW_USE_OPENGL)
    configAttribs[i++] = EGL_OPENGL_BIT;
#elif defined(GLEW_USE_OPENGL_ES)
    configAttribs[i++] = EGL_OPENGL_ES2_BIT;
#endif

    configAttribs[i++] = EGL_NONE;

    EGLint configsReturned;

    if ((eglChooseConfig (display, configAttribs, NULL, 1, &configsReturned) == EGL_TRUE) && (configsReturned > 0))
    {
      EGLConfig *matchingConfigs = new EGLConfig [configsReturned];

      eglChooseConfig (display, configAttribs, matchingConfigs, configsReturned, &configsReturned);

      AssertNoEGLErrors();

      *bestFitConfig = matchingConfigs[0];

      return true;
    }

    AssertNoEGLErrors();

    // Couldn't pick a suitable supported config, reducing request requirements.

    if (surfaceType & EGL_WINDOW_BIT)
    {
        surfaceType &= ~EGL_WINDOW_BIT;
        surfaceType &= EGL_PBUFFER_BIT;
    }
    else
    {
        break; // Nothing left to try.
    }
  }
  while (true);

  return false;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

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

      const char* eglVendor = (const char*)eglQueryString(display, EGL_VENDOR);

      AssertNoEGLErrors();

      Log(LOG_LEVEL_DEBUG, "EGL Vendor: %s\n", eglVendor);

      const char* eglVersion = (const char*)eglQueryString(display, EGL_VERSION);

      AssertNoEGLErrors();

      Log(LOG_LEVEL_DEBUG, "EGL Version: %s\n", eglVersion);

      const char* eglExtensions = (const char*)eglQueryString(display, EGL_EXTENSIONS);

      AssertNoEGLErrors();

      Log(LOG_LEVEL_DEBUG, "EGL Extensions: %s\n", eglExtensions);

      const char* eglClientApis = (const char*)eglQueryString(display, EGL_CLIENT_APIS);

      AssertNoEGLErrors();

      Log(LOG_LEVEL_DEBUG, "EGL Client APIs: %s\n", eglClientApis);

      {
        std::unordered_set <std::string> supportedClientApis;

        char* token = strtok((char*)eglClientApis, " ");

        while (token)
        {
          std::string thisApi(token);

          supportedClientApis.insert(thisApi);

          token = strtok(NULL, " ");
        }

#if defined(GLEW_USE_OPENGL)
        const char* targetClientApi = "OpenGL";
#elif defined(GLEW_USE_OPENGL_ES)
        const char* targetClientApi = "OpenGL_ES";
#endif

        if (supportedClientApis.find(targetClientApi) == supportedClientApis.end())
        {
          Log(LOG_LEVEL_ERROR, "EGL Client API \"%s\" is not supported. Exiting early.\n", targetClientApi);

          PostQuitMessage(0);

          return 0;
        }
      }

      glew::egl::Initialise(display);

      AssertNoEGLErrors();

#if defined(GLEW_USE_OPENGL)
      success = eglBindAPI(EGL_OPENGL_API);
#elif defined(GLEW_USE_OPENGL_ES)
      success = eglBindAPI(EGL_OPENGL_ES_API);
#endif

      AssertNoEGLErrors();

      GLEW_ASSERT(success == EGL_TRUE);

      EGLConfig config;

      bool found = SelectBestFitConfig(display, &config);

      GLEW_ASSERT(found);

      EGLSurface surface = EGL_NO_SURFACE;

      EGLint surfaceType;

      eglGetConfigAttrib(display, config, EGL_SURFACE_TYPE, &surfaceType);

      AssertNoEGLErrors();

      if (surfaceType & EGL_PBUFFER_BIT)
      {
        EGLint pbufferAttributes[] =
        {
          EGL_WIDTH, 256,
          EGL_HEIGHT, 256,
          EGL_NONE,
        };

        surface = eglCreatePbufferSurface(display, config, pbufferAttributes);

        AssertNoEGLErrors();
      }
      else if (surfaceType & EGL_WINDOW_BIT)
      {
        surface = eglCreateWindowSurface(display, config, (EGLNativeWindowType)hWnd, NULL);

        if (surface == EGL_NO_SURFACE)
        {
            eglGetError(); // Clear error

            surface = eglCreateWindowSurface(display, config, NULL, NULL);
        }

        AssertNoEGLErrors();
      }

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

      const char* glVendor = (const char*)glGetString(GL_VENDOR);

      AssertNoGLErrors();

      Log(LOG_LEVEL_DEBUG, "Vendor: %s\n", glVendor);

      const char* glRenderer = (const char*)glGetString(GL_RENDERER);

      AssertNoGLErrors();

      Log(LOG_LEVEL_DEBUG, "Renderer: %s\n", glRenderer);

      const char* glVersion = (const char*)glGetString(GL_VERSION);

      AssertNoGLErrors();

      Log(LOG_LEVEL_DEBUG, "Version: %s\n", glVersion);

      const char* glExtensions = (const char*)glGetString(GL_EXTENSIONS);

      AssertNoGLErrors();

      Log(LOG_LEVEL_DEBUG, "Extensions: %s\n", glExtensions);

      const char* glslVersion = (const char*)glGetString(GL_SHADING_LANGUAGE_VERSION);

      AssertNoGLErrors();

      Log(LOG_LEVEL_DEBUG, "GLSL Version: %s\n", glslVersion);

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
