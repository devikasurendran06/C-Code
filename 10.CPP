CODE:

#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;

public:
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int roll_number;

public:
    void input() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter roll number: ";
        cin >> roll_number;
    }

    void showDetails() {
        display(); // Call base class function
        cout << "Roll Number: " << roll_number << endl;
    }
};

int main() {
    Student s;
    s.input();

    cout << "\nStudent Details:\n";
    s.showDetails(); // Calls both base and derived class functions

    return 0;
}


OUTPUT:

Enter name: John Doe
Enter age: 20
Enter roll number: 101

Student Details:
Name: John Doe
Age: 20
Roll Number: 101
