#include <GLFW/glfw3.h>
#include <iostream>

#include "src/misc/errorCallback.h"
#include "src/graphics/window.h"

int main(void)
{
	glfwSetErrorCallback(error_callback);

	using namespace cig;
	using namespace graphics;

	if (!glfwInit()) 
	{
		exit(EXIT_FAILURE);
	}

	Window window("CiG Engine", 640, 480);

	while (!window.closed())
	{
		window.update();
	}

	system("PAUSE");
	return 0;
}