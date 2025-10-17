CODE:

#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;
    string course;

public:
    void getStudentDetails() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Course: ";
        getline(cin, course);
    }

    void displayStudentDetails() const {
        cout << "Name   : " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Course : " << course << endl;
    }
};

class Test : virtual public Student {
protected:
    int marks[3];

public:
    void getMarks() {
        cout << "Enter marks for 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
        }
    }

    void displayMarks() const {
        cout << "Subject Marks: ";
        for (int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

class GraceMarks : virtual public Student {
protected:
    int bonusMark;

public:
    void getBonus() {
        cout << "Enter Grace Marks: ";
        cin >> bonusMark;
    }

    void displayBonus() const {
        cout << "Grace Marks: " << bonusMark << endl;
    }
};

class Result : public Test, public GraceMarks {
private:
    int total;

public:
    void calculateTotal() {
        total = bonusMark;
        for (int i = 0; i < 3; i++) {
            total += marks[i];
        }
    }

    void displayResult() {
        cout << "\n--- Student Result ---" << endl;
        displayStudentDetails();
        displayMarks();
        displayBonus();
        cout << "Total Marks (including Grace): " << total << endl;
    }
};

int main() {
    Result r;
    r.getStudentDetails();
    r.getMarks();
    r.getBonus();
    r.calculateTotal();
    r.displayResult();

    return 0;
}


OUTPUT:

Enter Name: Priya 
Enter Roll No: 102
Enter Course: Computer Science
Enter marks for 3 subjects: 78 85 90
Enter Grace Marks: 5

--- Student Result ---
Name   : Priya 
Roll No: 102
Course : Computer Science
Subject Marks: 78 85 90
Grace Marks: 5
Total Marks (including Grace): 258
