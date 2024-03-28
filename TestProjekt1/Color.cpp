#include "Color.hpp"

Color::Color(int r, int g, int b, int a = 255) {
    red = r;
    green = g;
    blue = b;
    alpha = a;
}

Color::Color() { // HVORFOR ER DET HER EN TING!??!?!?!?
    red = 0;
    green = 0;
    blue = 0;
    alpha = 255;
}

Color Color::TextToColor(const char * text) {
     if (text == "red") {
        return Color(255, 0, 0);
     }
     else if (text == "green") {
        return Color(0, 255, 0);
     }
     else if (text == "blue") {
        return Color(0, 0, 255);
     }
     else if (text == "yellow") {
        return Color(255, 255, 0);
     }
     else if (text == "purple") {
        return Color(128, 0, 128);
     }
     else if (text == "orange") {
        return Color(255, 165, 0);
     }
     else if (text == "pink") {
        return Color(255, 192, 203);
     }
     else if (text == "white") {
        return Color(255, 255, 255);
     }
     else {
        return Color(0, 0, 0); // Hvis ingen af farverne er nævnt, gør den sort
     }

     // Tak til ChatGPT for slavearbejdet.
}


