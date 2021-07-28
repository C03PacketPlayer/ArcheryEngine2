#pragma once
#include <GLFW/glfw3.h>
#include <glad/glad.h>

namespace ArcheryEngine {
	class EngineWindow {
	public:
		const char* FrameTitle;
		int FrameX;
		int FrameY;
		bool SetFrameDetails(int x, int y, const char* title);
		bool RenderWindow();
	};
}