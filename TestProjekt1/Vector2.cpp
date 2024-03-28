#include <math.h>
/*
Vector2 libary made by Nikolai S. Balck
WIP
*/

class Vector2 {
public:
	double x;
	double y;

	Vector2(double _x, double _y) {
		x = _x;
		y = _y;
	}

	static Vector2 Add(Vector2 vector1, Vector2 vector2) {
		return Vector2(vector1.x + vector2.x, vector1.y + vector2.y);
	}

	static Vector2 Subtract(Vector2 vector1, Vector2 vector2) {
		return Vector2(vector1.x - vector2.x, vector1.y - vector2.y);
	}

	static Vector2 Multiply(Vector2 vector1, Vector2 vector2) {
		return Vector2(vector1.x * vector2.x, vector1.y * vector2.y);
	}
	
};