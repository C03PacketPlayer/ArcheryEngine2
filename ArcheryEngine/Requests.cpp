#include "ArcheryEngine.h"
#include <iostream>

bool ArcheryEngine::Engine::RequestExit() {
	std::cout << "Thank you for use Archery::Engine";
	glfwTerminate();
	return 0;
}