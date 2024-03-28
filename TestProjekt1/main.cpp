/*
|------------------------|
|		Lavet af		 |
|	Nikolai S. Balck	 |
|		  2024			 |
|------------------------|
*/
#include <SDL.h>
#include <Math.h>
#include <iostream>
#undef main

#include "window.cpp"
#include "GameObject.hpp"

int main() {
	// INIT
	SDL_Init(SDL_INIT_EVERYTHING);

	// Setup window & renderer
	Window* window = new Window(640, 480, "Window Test");
	Renderer renderer = window->renderer;

	// Test objekt
	GameObject gameobject = GameObject(50, 50, 50, 50, Color::TextToColor("red"));
	renderer.AddObjectToRenderList(&gameobject);

	// Første render
	renderer.Render();


	// Hold programmet kørende, så længe brugeren ikke trykker "x"
	SDL_Event event;
	while (true) {
		if (SDL_PollEvent(&event) && event.type == SDL_QUIT) {
			window->Close();
			break;
		}
	}

	return 0;
}