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

#include <assert.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

LRESULT CALLBACK WndProc (HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static const char* DescribeGLError (GLenum err)
{
  const char *errorText = "Unknown";

  return errorText;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static const char* DescribeEGLError (EGLint err)
{
  const char *errorText = "Unknown";

  switch (err)
  {
    case EGL_TRUE:                errorText = "EGL_TRUE"; break;
    case EGL_FALSE:               errorText = "EGL_FALSE"; break;
    // Error codes:
    case EGL_NOT_INITIALIZED:     errorText = "EGL_NOT_INITIALIZED"; break;
    case EGL_BAD_ACCESS:          errorText = "EGL_BAD_ACCESS"; break;
    case EGL_BAD_ALLOC:           errorText = "EGL_BAD_ALLOC"; break;
    case EGL_BAD_ATTRIBUTE:       errorText = "EGL_BAD_ATTRIBUTE"; break;
    case EGL_BAD_CONTEXT:         errorText = "EGL_BAD_CONTEXT"; break;
    case EGL_BAD_CONFIG:          errorText = "EGL_BAD_CONFIG"; break;
    case EGL_BAD_CURRENT_SURFACE: errorText = "EGL_BAD_CURRENT_SURFACE"; break;
    case EGL_BAD_DISPLAY:         errorText = "EGL_BAD_DISPLAY"; break;
    case EGL_BAD_SURFACE:         errorText = "EGL_BAD_SURFACE"; break;
    case EGL_BAD_MATCH:           errorText = "EGL_BAD_MATCH"; break;
    case EGL_BAD_PARAMETER:       errorText = "EGL_BAD_PARAMETER"; break;
    case EGL_BAD_NATIVE_PIXMAP:   errorText = "EGL_BAD_NATIVE_PIXMAP"; break;
    case EGL_BAD_NATIVE_WINDOW:   errorText = "EGL_BAD_NATIVE_WINDOW"; break;
    case EGL_CONTEXT_LOST:        errorText = "EGL_CONTEXT_LOST"; break;
    case EGL_SUCCESS:             errorText = "EGL_SUCCESS"; break;
  }

  return errorText;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static void CheckGLError (const bool shouldAssert, const char* file, const int line)
{
  GLenum err = glGetError ();

  if (err != GL_NO_ERROR)
  {
    char buffer [512];

    sprintf (buffer, "[%s : %d] glGetError returned %d (%s)", file, line, err, DescribeGLError (err));

    OutputDebugString (buffer);

    fprintf (stderr, buffer);

    fflush (stderr);
  }

  if (shouldAssert)
  {
    assert (err == GL_NO_ERROR);
  }
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

    sprintf (buffer, "[%s : %d] eglGetError returned %d (%s)", file, line, err, DescribeEGLError (err));

    OutputDebugString (buffer);

    fprintf (stderr, buffer);

    fflush (stderr);
  }

  if (shouldAssert)
  {
    assert (err == EGL_SUCCESS);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define AssertNoGLErrors() CheckGLError(true, __FILE__, __LINE__)

#define AssertNoEGLErrors() CheckEGLError(true, __FILE__, __LINE__)

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int WINAPI WinMain (__in HINSTANCE hInstance, __in_opt HINSTANCE hPrevInstance, __in_opt LPSTR lpCmdLine, __in int nShowCmd)
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
      // EGL prerequisites.
      // 

      EGLBoolean success = EGL_FALSE;

      EGLNativeDisplayType nativeDisplay = (EGLNativeDisplayType) deviceContext;// EGL_DEFAULT_DISPLAY;

      EGLDisplay eglDisplay = eglGetDisplay (nativeDisplay);

      AssertNoEGLErrors ();

      EGLint major = 0, minor = 0;

      success = eglInitialize (eglDisplay, &major, &minor);

      AssertNoEGLErrors ();

      EGLint attributes [] =
      {
        // Request OpenGL ES 2.0 configs
        EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
        EGL_SURFACE_TYPE, EGL_WINDOW_BIT,
        EGL_RED_SIZE, 8,
        EGL_GREEN_SIZE, 8,
        EGL_BLUE_SIZE, 8,
        EGL_NONE
      };

      EGLint numConfig = 0;

      EGLConfig eglConfig = 0;

      success = eglChooseConfig (eglDisplay, attributes, &eglConfig, 1, &numConfig);

      AssertNoEGLErrors ();

      // 
      // Context creation.
      // 

      EGLContext eglContext;

      EGLint ctxattrs [] = {EGL_CONTEXT_CLIENT_VERSION, 2, EGL_NONE};

      eglContext = eglCreateContext (eglDisplay, eglConfig, EGL_NO_CONTEXT, ctxattrs);

      AssertNoEGLErrors ();

      int nativeVid;

      success = eglGetConfigAttrib (eglDisplay, eglConfig, EGL_NATIVE_VISUAL_ID, &nativeVid);

      AssertNoEGLErrors ();

      EGLNativeWindowType nativeWin = (EGLNativeWindowType) hWnd;

      EGLSurface eglSurface;

      eglSurface = eglCreateWindowSurface (eglDisplay, eglConfig, nativeWin, NULL);

      AssertNoEGLErrors ();

      success = eglMakeCurrent (eglDisplay, eglSurface, eglSurface, eglContext);

      AssertNoEGLErrors ();

      glew::egl::Initialise (eglDisplay);

  #if defined(GLEW_USE_OPENGL)
      glew::gl::Initialise ();
  #elif defined(GLEW_USE_OPENGL_ES)
      glew::gles::Initialise ();
  #endif

      AssertNoGLErrors ();

      const char *renderer = (const char *) glGetString (GL_RENDERER);

      AssertNoGLErrors ();

      const char *version = (const char *) glGetString (GL_VERSION);

      AssertNoGLErrors ();

      const char *extensions = (const char *) glGetString (GL_EXTENSIONS);

      AssertNoGLErrors ();

  #if defined(GLEW_USE_OPENGL)
      glew::gl::Deinitialise ();
  #elif defined(GLEW_USE_OPENGL_ES)
      glew::gles::Deinitialise ();
  #endif

      AssertNoGLErrors ();

      glew::egl::Deinitialise ();

      eglMakeCurrent (EGL_NO_DISPLAY, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);

      AssertNoEGLErrors ();

      eglDestroyContext (eglDisplay, eglContext);

      AssertNoEGLErrors ();

      eglDestroySurface (eglDisplay, eglSurface);

      AssertNoEGLErrors ();

      eglTerminate (eglDisplay);

      AssertNoEGLErrors ();

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
