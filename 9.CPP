CODE:

#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0) {
        value = v;
    }

    void display() const {
        cout << "Value: " << value << endl;
    }

    // Overload prefix ++ operator
    Counter operator++() {
        ++value;
        return *this;
    }

    // Overload postfix ++ operator
    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }
};

int main() {
    Counter c1(5);

    cout << "Initial ";
    c1.display();

    ++c1; // prefix increment
    cout << "After prefix ++c1: ";
    c1.display();

    c1++; // postfix increment
    cout << "After postfix c1++: ";
    c1.display();

    return 0;
}


OUTPUT:

Initial Value: 5
After prefix ++c1: Value: 6
After postfix c1++: Value: 7
