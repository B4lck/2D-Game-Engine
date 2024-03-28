#pragma once

#include "Color.hpp"
#undef GameObject

class GameObject {
public:
	int x, y, width, height;
	Color color;
	GameObject(int _x, int _y, int _width, int _height, Color _color);
};