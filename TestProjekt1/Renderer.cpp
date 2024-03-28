// Nikolai Balck
#include <SDL.h>
#include <vector>
#include <iostream>

#include "Color.hpp"
#include "GameObject.hpp"

class Renderer {
	SDL_Renderer* renderer = nullptr;

	void SetRenderColor(Color color) {
		SDL_SetRenderDrawColor(renderer, color.red, color.green, color.blue, color.alpha);
	}

	void ClearScreen() {
		//Gør vinduet hvidt
		SetRenderColor(Color::TextToColor("white"));
		SDL_RenderClear(renderer);
	}

	void DrawRect(int x, int y, int w, int h, Color color) {

		SetRenderColor(color);

		// Opret sdl rektangel, og giv den værdier
		SDL_Rect rect = SDL_Rect();
		rect.x = x;
		rect.y = y;
		rect.w = w;
		rect.h = h;

		SDL_RenderFillRect(renderer, &rect);
	}

	// TODO: LAV OM TIL EN LISTE!!! (GPU'er er ik så gode til vectors)
	std::vector <GameObject*> ObjectsToRender;

public:
	Renderer(SDL_Renderer* _ren) {
		renderer = _ren;
	}

	void Render() {
		// Start med at clear skærmen
		ClearScreen();

		// Loop igennem vektor for at tegne alle objekter
		for (int i = 0; i < ObjectsToRender.size(); i++) {
			GameObject* obj = ObjectsToRender[i];

			DrawRect(obj->x, obj->y, obj->width, obj->height, obj->color);
		}

		//Render
		SDL_RenderPresent(renderer);
	}

	void AddObjectToRenderList(GameObject * obj) {
		ObjectsToRender.push_back(obj);
	}

	void RemoveObjectFromRenderList(GameObject * obj) {
		int removeId = -1;

		// Find objekt i listen
		for (int i = 0; i < ObjectsToRender.size(); i++) {
			if (ObjectsToRender[i] == obj) {
				removeId = i;
			}
		}

		// Hvis objektet ikke kunne findes
		if (removeId == -1) {
			return;
		}
		ObjectsToRender.erase(ObjectsToRender.begin()+removeId);
	}
};