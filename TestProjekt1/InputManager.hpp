#include <SDL.h>
#include <map>

class InputManager {
private:
	static std::map<SDL_Keycode, bool> keysDown;
	static std::map<int,int> mouseButtonsDown;
public:
	static bool isKeyDown(SDL_Keycode keyCode);
	static void setKeyState(SDL_Keycode keyCode, bool state);
};

bool InputManager::isKeyDown(SDL_Keycode keyCode) {
	// Hvis keycoden ikke er oprettet i keysDown, opret den som false
	if (InputManager::keysDown.find(keyCode) == InputManager::keysDown.end()) {
		InputManager::keysDown[keyCode] = false;
	}

	return InputManager::keysDown[keyCode];
}

void InputManager::setKeyState(SDL_Keycode keyCode, bool state) {
	InputManager::keysDown[keyCode] = state;
}