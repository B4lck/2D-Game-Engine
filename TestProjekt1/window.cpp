#include <string>
#include <iostream>
#include <SDL.h>
#include "Renderer.cpp"
#undef window

class Window {
	int width;
	int height;

	SDL_Window* window = nullptr;
	SDL_Renderer* _renderer = nullptr;
public:
	Renderer renderer = NULL;

	Window(int w, int h, const char * name) {
		// Setup variables
		width = w;
		height = h;

		// Creating window and renderer
		SDL_CreateWindowAndRenderer(w, h, 0, &window, &_renderer);
		SDL_SetWindowTitle(window, name);

		// Renderer ting
		renderer = Renderer(_renderer);
	}

	void Close() {
		SDL_DestroyRenderer(_renderer);
		SDL_DestroyWindow(window);
	}
};