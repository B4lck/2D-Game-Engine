#pragma once

class Color {
public:
	int red, green, blue, alpha;
	Color(); // Jeg har ingen ide om hvorfor den her skal være der, men lortet vil ik compile uden
	Color(int r, int g, int b, int a);
	static Color TextToColor(const char* text);
};