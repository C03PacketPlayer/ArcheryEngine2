#include <iostream>
#include <glfw/glfw3.h>
#include <glad/glad.h>


int main() {
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	GLFWwindow* window = glfwCreateWindow(800, 800, "xd", NULL, NULL);
	if (window == NULL) {
		std::cout << "Failed to create window";
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);
	

	gladLoadGL();

	glViewport(0, 0, 800, 800);

	glColor4f(1.0f, 1.0f, 1.0f, 0.0f); 

	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(window);
	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}