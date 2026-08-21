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
#include <stdarg.h>
#include <string>
#include <string.h>
#include <unordered_set>

#ifdef _MSC_VER
#define strtok_r strtok_s
#endif

#define eprintf(...) fprintf(stderr, __VA_ARGS__)

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
    eprintf("[%s:%d] eglGetError returned 0x%x (%s)\n", file, line, err, DescribeEGLError(err));
  }

  GLEW_ASSERT_IF(shouldAssert, err == EGL_SUCCESS);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static void CheckGLError(const bool shouldAssert, const char* file, const int line)
{
  GLenum err = glGetError();

  if (err != GL_NO_ERROR)
  {
      eprintf("[%s:%d] glGetError returned 0x%x\n", file, line, err);
  }

  GLEW_ASSERT_IF(shouldAssert, err == GL_NO_ERROR);
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

#ifndef _WIN32
typedef unsigned long LPARAM;
typedef unsigned long LRESULT;
typedef unsigned long UINT;
typedef unsigned long WPARAM;
typedef EGLNativeDisplayType HWND;
#define CALLBACK
#define WM_CREATE 0x0001
#define WM_QUIT 0x0012
static LRESULT CALLBACK DefWindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
  return 0;
}
#endif

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
#ifdef _WIN32
  // Support a /SUBSYSTEM:CONSOLE application to simplify stdout/stderr output.
  return WinMain(GetModuleHandle(NULL), NULL, GetCommandLineA(), SW_HIDE);
#else
  HWND hWnd = NULL;
  WndProc(hWnd, WM_CREATE, 0, 0);
  WndProc(hWnd, WM_QUIT, 0, 0);
  return 0;
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef _WIN32
int WINAPI WinMain(__in HINSTANCE hInstance, __in_opt HINSTANCE hPrevInstance, __in LPSTR lpCmdLine, __in int nShowCmd)
{
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
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
  switch (message)
  {
    case WM_CREATE:
    {
      //
      // Context creation and tear-down.
      //

#ifdef _WIN32
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

      bool success = SetPixelFormat(deviceContext, windowsPixelFormat, &pfd);

      GLEW_ASSERT(success);

      EGLDisplay display = eglGetDisplay((EGLNativeDisplayType)deviceContext);
#else
      EGLDisplay display = EGL_NO_DISPLAY;

      EGLBoolean success = EGL_FALSE;
#endif

      if (display == EGL_NO_DISPLAY)
      {
        display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
      }

      AssertNoEGLErrors();

      EGLint major = 0, minor = 0;

      success = eglInitialize(display, &major, &minor);

      AssertNoEGLErrors();

      GLEW_ASSERT(success == EGL_TRUE);

      char* eglClientApis = (char*)eglQueryString(display, EGL_CLIENT_APIS);

      AssertNoEGLErrors();

      printf("EGL_CLIENT_APIS:\n");

      {
        std::unordered_set <std::string> supportedClientApis;

        int i = 0;

        char* token;

        while ((token = strtok_r(eglClientApis, " ", &eglClientApis)))
        {
          printf("[%d] %s\n", i++, token);

          std::string thisApi(token);

          supportedClientApis.insert(thisApi);
        }

#if defined(GLEW_USE_OPENGL)
        const char* targetClientApi = "OpenGL";
#elif defined(GLEW_USE_OPENGL_ES)
        const char* targetClientApi = "OpenGL_ES";
#endif

        if (supportedClientApis.find(targetClientApi) == supportedClientApis.end())
        {
          eprintf("\"%s\" is not supported. Exiting early.\n", targetClientApi);
#ifdef _WIN32
          PostQuitMessage(1);
#endif
          return 1;
        }
      }

      const char* eglVendor = (const char*)eglQueryString(display, EGL_VENDOR);

      AssertNoEGLErrors();

      printf("EGL_VENDOR: %s\n", eglVendor);

      const char* eglVersion = (const char*)eglQueryString(display, EGL_VERSION);

      AssertNoEGLErrors();

      printf("EGL_VERSION: %s\n", eglVersion);

      char* eglExtensions = (char*)eglQueryString(display, EGL_EXTENSIONS);

      AssertNoEGLErrors();

      printf("EGL_EXTENSIONS:\n");

      {
        int i = 0;

        char* token;

        while ((token = strtok_r(eglExtensions, " ", &eglExtensions)))
        {
          printf("[%d] %s\n", i++, token);
        }
      }

      glew::egl::Initialise(display);

      AssertNoEGLErrors();

      printf("GLEW_EGL_VERSION_1_0: %d\n", glew::egl::IsSupported(GLEW_EGL_VERSION_1_0));
      printf("GLEW_EGL_VERSION_1_1: %d\n", glew::egl::IsSupported(GLEW_EGL_VERSION_1_1));
      printf("GLEW_EGL_VERSION_1_2: %d\n", glew::egl::IsSupported(GLEW_EGL_VERSION_1_2));
      printf("GLEW_EGL_VERSION_1_3: %d\n", glew::egl::IsSupported(GLEW_EGL_VERSION_1_3));
      printf("GLEW_EGL_VERSION_1_4: %d\n", glew::egl::IsSupported(GLEW_EGL_VERSION_1_4));
      printf("GLEW_EGL_VERSION_1_5: %d\n", glew::egl::IsSupported(GLEW_EGL_VERSION_1_5));

#if defined(GLEW_USE_OPENGL)
      success = eglBindAPI(EGL_OPENGL_API);
#elif defined(GLEW_USE_OPENGL_ES)
      success = eglBindAPI(EGL_OPENGL_ES_API);
#else
      success = EGL_FALSE;
#endif

      AssertNoEGLErrors();

      GLEW_ASSERT(success == EGL_TRUE);

      EGLConfig config;

      bool found = SelectBestFitConfig(display, &config);

      GLEW_ASSERT(found);

      EGLSurface surface = EGL_NO_SURFACE;

      EGLint surfaceType;

      success = eglGetConfigAttrib(display, config, EGL_SURFACE_TYPE, &surfaceType);

      AssertNoEGLErrors();

      GLEW_ASSERT(success == EGL_TRUE);

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

            surface = eglCreateWindowSurface(display, config, EGL_CAST(EGLNativeWindowType,0), NULL);
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

      printf("GL_VENDOR: %s\n", (const char*)glGetString(GL_VENDOR));

      printf("GL_RENDERER: %s\n", (const char *) glGetString(GL_RENDERER));

      printf("GL_VERSION: %s\n", (const char*)glGetString(GL_VERSION));

      printf("GL_SHADING_LANGUAGE_VERSION: %s\n", (const char*)glGetString(GL_SHADING_LANGUAGE_VERSION));

      printf("GL_EXTENSIONS:\n");

      {
        int i = 0;

        char* token;

        char* glExtensions = (char*)glGetString(GL_EXTENSIONS);

        while ((token = strtok_r(glExtensions, " ", &glExtensions)))
        {
          printf("[%d] %s\n", i++, token);
        }
      }

      AssertNoGLErrors();

#if defined(GLEW_USE_OPENGL)
      glew::gl::Deinitialise();
#elif defined(GLEW_USE_OPENGL_ES)
      glew::gles::Deinitialise();
#endif

      success = eglTerminate(display);

      AssertNoEGLErrors();

      GLEW_ASSERT(success == EGL_TRUE);

      glew::egl::Deinitialise();

#ifdef _WIN32
      PostQuitMessage(0);
#endif

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
