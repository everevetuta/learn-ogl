#include <iostream>

//GLEW
#include "GL/glew.h"
#define GLEW_STATIC

//GLFW
#include "GLFW/glfw3.h"

//Window dimensions
const GLint WIDTH = 800, HEIGHT = 600;

int main() {
	// Init GLFW
	glfwInit();

	// Set all the required options for GLFW
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); 
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3); // OpenGL 3.3

	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

}
