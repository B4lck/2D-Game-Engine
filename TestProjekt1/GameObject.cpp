#include "Color.hpp"
#include "GameObject.hpp"

GameObject::GameObject(int _x, int _y, int _width, int _height, Color _color)
{
	x = _x;
	y = _y;
	width = _width;
	height = _height;
	color = _color;
}