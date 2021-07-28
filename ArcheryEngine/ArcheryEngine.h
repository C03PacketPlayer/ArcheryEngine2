#pragma once
#include <GLFW/glfw3.h>
#include <glad/glad.h>

namespace ArcheryEngine {
	class Initalizator {
	public:
		bool InitGraphics();
	};
	class Engine {
	public:
		bool RequestExit();
	};
	class Vectors {
	public:
		struct Vector3d;
	};
}