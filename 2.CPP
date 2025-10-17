CODE:

#include <iostream>
using namespace std;

class Book {
private:
    int BookID;
    string BookName;
    float BookPrice;

    float total_cost(int n) {
        return BookPrice * n;
    }

public:
    void input_details() {
        cout << "Enter Book ID: ";
        cin >> BookID;
        cin.ignore();  // To ignore newline after ID
        cout << "Enter Book Name: ";
        getline(cin, BookName);
        cout << "Enter Book Price: ";
        cin >> BookPrice;
    }

    void display_details() {
        cout << "\nBook Details:\n";
        cout << "ID: " << BookID << endl;
        cout << "Name: " << BookName << endl;
        cout << "Price: " << BookPrice << endl;
    }

    void buy_copies() {
        int n;
        cout << "\nEnter number of copies to buy: ";
        cin >> n;
        float cost = total_cost(n);
        cout << "Total cost for " << n << " copies: " << cost << endl;
    }
};

int main() {
    Book b;
    b.input_details();
    b.display_details();
    b.buy_copies();
    return 0;
}


OUTPUT:

Enter Book ID: 101
Enter Book Name: C++ Programming
Enter Book Price: 450

Book Details:
ID: 101
Name: C++ Programming
Price: 450

Enter number of copies to buy: 3
Total cost for 3 copies: 1350

