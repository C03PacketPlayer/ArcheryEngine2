#include <iostream>
#include "EngineWindow.h"
#include "ArcheryEngine.h"
#include "Figures.h"

int main() {
	ArcheryEngine::EngineWindow win;
	ArcheryEngine::Initalizator init;
	init.InitGraphics();
	win.SetFrameDetails(1920, 1080, "XD");
	win.RenderWindow();
	ArcheryEngine::Figures::Triangles elo;
	elo.Create3d();
}