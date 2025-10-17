CODE:

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Default constructor
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called." << endl;
    }

    // Parameterized constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Parameterized constructor called." << endl;
    }

    // Member function to display dimensions
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    // Destructor
    ~Rectangle() {
        cout << "Destructor called for Rectangle with Length: " << length 
             << " and Width: " << width << endl;
    }
};

int main() {
    // Creating object using default constructor
    Rectangle r1;

    // Creating object using parameterized constructor
    Rectangle r2(10, 5);

    cout << "\nRectangle 1: ";
    r1.display();

    cout << "Rectangle 2: ";
    r2.display();

    return 0;
}



OUTPUT :

Default constructor called.
Parameterized constructor called.

Rectangle 1: Length: 0, Width: 0
Rectangle 2: Length: 10, Width: 5
Destructor called for Rectangle with Length: 10 and Width: 5
Destructor called for Rectangle with Length: 0 and Width: 0
