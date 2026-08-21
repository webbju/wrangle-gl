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
#include <stdarg.h>

#ifdef _MSC_VER
#define strtok_r strtok_s
#endif

#define eprintf(...) fprintf(stderr, __VA_ARGS__)

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static GLenum CheckGLError(const bool shouldAssert, const char* file, const int line)
{
  GLenum err = glGetError();

  if (err != GL_NO_ERROR)
  {
      eprintf("[%s:%d] glGetError returned 0x%x\n", file, line, err);
  }

  GLEW_ASSERT_IF(shouldAssert, err == GL_NO_ERROR);

  return err;
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

int main()
{
  // Support a /SUBSYSTEM:CONSOLE application to simplify stdout/stderr output.
  return WinMain(GetModuleHandle(NULL), NULL, GetCommandLineA(), SW_HIDE);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int WINAPI WinMain(__in HINSTANCE hInstance, __in_opt HINSTANCE hPrevInstance, __in LPSTR lpCmdLine, __in int nShowCmd)
{
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

#if WGL_ARB_create_context
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

      printf("GL_VENDOR: %s\n", (const char*)glGetString(GL_VENDOR));

      printf("GL_RENDERER: %s\n", (const char *)glGetString(GL_RENDERER));

      printf("GL_VERSION: %s\n", (const char *)glGetString(GL_VERSION));

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
