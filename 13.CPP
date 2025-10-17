CODE:

#include <iostream>
using namespace std;

class c_polygon {
protected:
    float width, height;

public:
    void set_values(float w, float h) {
        width = w;
        height = h;
    }

    virtual float area() {
        return 0;
    }
};

class c_rectangle : public c_polygon {
public:
    float area() override {
        return width * height;
    }
};

class c_triangle : public c_polygon {
public:
    float area() override {
        return 0.5 * width * height;
    }
};

int main() {
    c_polygon* poly;  // Base class pointer

    c_rectangle rect;
    c_triangle tri;

    // Rectangle
    poly = &rect;
    poly->set_values(10, 5);
    cout << "Rectangle Area: " << poly->area() << endl;

    // Triangle
    poly = &tri;
    poly->set_values(10, 5);
    cout << "Triangle Area: " << poly->area() << endl;

    return 0;
}


OUTPUT:

Rectangle Area: 50
Triangle Area: 25

