#include "ArcheryEngine.h"

bool ArcheryEngine::Initalizator::InitGraphics() {
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); // OpenGL 3.3
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwInit();
	return false;
}