CODE:

#include <iostream>
using namespace std;

class AreaCalculator {
public:
    // Area of circle
    float area(float radius) {
        return 3.1416 * radius * radius;
    }

    // Area of square
    int area(int side) {
        return side * side;
    }

    // Area of rectangle
    int area(int length, int width) {
        return length * width;
    }

    // Area of triangle
    float area(float base, float height) {
        return 0.5 * base * height;
    }
};

int main() {
    AreaCalculator obj;

    float radius = 5.0;
    int side = 4;
    int length = 6, width = 3;
    float base = 4.0, height = 5.0;

    cout << "Area of Circle: " << obj.area(radius) << endl;
    cout << "Area of Square: " << obj.area(side) << endl;
    cout << "Area of Rectangle: " << obj.area(length, width) << endl;
    cout << "Area of Triangle: " << obj.area(base, height) << endl;

    return 0;
}


OUTPUT:

Area of Circle: 78.54
Area of Square: 16
Area of Rectangle: 18
Area of Triangle: 10

