#include <GLFW/glfw3.h>
#include <iostream>

#include "src/misc/errorCallback.h"

int main(void)
{
	glfwSetErrorCallback(error_callback);

	// kdlsjfal�s

	if (!glfwInit()) 
	{
		exit(EXIT_FAILURE);
	}

	system("PAUSE");
	return 0;
}