CODE:

#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    // Member function to input time
    void input() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    // Member function to display time
    void display() const {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    // Declare friend function
    friend Time addTime(const Time& t1, const Time& t2);
};

// Friend function to add two Time objects
Time addTime(const Time& t1, const Time& t2) {
    Time sum;
    sum.seconds = t1.seconds + t2.seconds;
    sum.minutes = t1.minutes + t2.minutes + (sum.seconds / 60);
    sum.seconds %= 60;
    sum.hours = t1.hours + t2.hours + (sum.minutes / 60);
    sum.minutes %= 60;
    return sum;
}

int main() {
    Time t1, t2, result;

    cout << "Enter first time:\n";
    t1.input();

    cout << "\nEnter second time:\n";
    t2.input();

    cout << "\nFirst Time: ";
    t1.display();

    cout << "Second Time: ";
    t2.display();

    result = addTime(t1, t2);

    cout << "Sum of Times: ";
    result.display();

    return 0;
}


OUTPUT:

Enter first time:
Enter hours: 2
Enter minutes: 45
Enter seconds: 50

Enter second time:
Enter hours: 1
Enter minutes: 30
Enter seconds: 20

First Time: 2:45:50
Second Time: 1:30:20
Sum of Times: 4:16:10


