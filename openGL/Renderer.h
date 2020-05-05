#pragma once

#include <GL/glew.h>


#define ASSERT(x) if (!(x)) __debugbreak();
#define GLCall(x) GLClearError();\
	x;\
	ASSERT(GLCheckError(#x, __FILE__, __LINE__));
// \ ignores the new line char 
// so you don't have to write everything in the same line 

void GLClearError();
bool GLCheckError(const char* function, const char* file, int line);
