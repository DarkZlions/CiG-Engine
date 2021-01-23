#include "window.h"

namespace cig
{
	namespace graphics
	{
		Window::Window(const char* title, int width, int height)
		{
			m_Title = title;
			m_Height = height;
			m_Width = width;

			if (!init())
			{
				glfwTerminate();
			}
		}

		// Deconstructor
		Window::~Window()
		{
			glfwTerminate();
		}

		bool Window::init()
		{
			m_Window = glfwCreateWindow(m_Width, m_Height, m_Title, NULL, NULL);

			if (!m_Window)
			{
				glfwTerminate();
				exit(EXIT_FAILURE);
				return false;
			}

			glfwMakeContextCurrent(m_Window);

			return true;
		}

		bool Window::closed() const
		{
			return glfwWindowShouldClose(m_Window);
		}

		void Window::update() const
		{
			glfwSwapBuffers(m_Window);
			glfwPollEvents();
		}
	}
}
