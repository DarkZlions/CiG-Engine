#pragma once
#include <iostream>

static void error_callback(int error, const char* description)
{
	fprintf(stderr, "Error: %s\n", description);
}