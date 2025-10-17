CODE:

#include <iostream>
using namespace std;

// Inline function for area of circle
inline float area_circle(float radius) {
    return 3.1416 * radius * radius;
}

// Inline function for area of square
inline float area_square(float side) {
    return side * side;
}

// Inline function for area of rectangle
inline float area_rectangle(float length, float width) {
    return length * width;
}

// Inline function for area of triangle
inline float area_triangle(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float radius = 5, side = 4, length = 6, width = 3, base = 4, height = 5;

    cout << "Area of Circle: " << area_circle(radius) << endl;
    cout << "Area of Square: " << area_square(side) << endl;
    cout << "Area of Rectangle: " << area_rectangle(length, width) << endl;
    cout << "Area of Triangle: " << area_triangle(base, height) << endl;

    return 0;
}


OUTPUT:

Area of Circle: 78.54
Area of Square: 16
Area of Rectangle: 18
Area of Triangle: 10
