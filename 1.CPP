CODE :

#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    void read_data() {
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter year: ";
        cin >> year;
    }

    void display_data() {
        cout << "\nCar Details:\n";
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car car1, car2, car3;

    cout << "Enter details for Car 1:\n";
    car1.read_data();

    cout << "\nEnter details for Car 2:\n";
    car2.read_data();

    cout << "\nEnter details for Car 3:\n";
    car3.read_data();

    cout << "\n--- Car Information ---";
    car1.display_data();
    car2.display_data();
    car3.display_data();

    return 0;
}


OUTPUT :

Enter details for Car 1:
Enter brand: Toyota
Enter model: Camry
Enter year: 2021

Enter details for Car 2:
Enter brand: Ford
Enter model: Focus
Enter year: 2020

Enter details for Car 3:
Enter brand: Honda
Enter model: Civic
Enter year: 2019

--- Car Information ---
Car Details:
Brand: Toyota
Model: Camry
Year: 2021

Car Details:
Brand: Ford
Model: Focus
Year: 2020

Car Details:
Brand: Honda
Model: Civic
Year: 2019

