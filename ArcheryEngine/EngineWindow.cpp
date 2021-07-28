#include "EngineWindow.h"
#include <iostream>
#include "ArcheryEngine.h"

extern "C" {
	bool ArcheryEngine::EngineWindow::SetFrameDetails(int x, int y, const char* title) {
		FrameX = x;
		FrameY = y;
		FrameTitle = title;
		return true;
	}

	bool ArcheryEngine::EngineWindow::RenderWindow()
	{
		GLFWwindow* window = glfwCreateWindow(FrameX, FrameY, FrameTitle, NULL, NULL);
		if (window == NULL) {
			std::cout << "Failed to create window";
		}
		glfwMakeContextCurrent(window);


		gladLoadGL();

		glViewport(0, 0, FrameX, FrameY);

		glColor4f(1.0f, 1.0f, 1.0f, 0.0f);

		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);
		while (!glfwWindowShouldClose(window)) {
			glfwPollEvents();
		}

		glfwDestroyWindow(window);
		Engine en;
		en.RequestExit();
		return false;
	}
}


