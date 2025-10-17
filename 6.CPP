CODE:

#include <iostream>
using namespace std;

class TelephoneBill {
private:
    string Name;
    string Address;
    string Tel_No;
    int No_of_calls;

public:

    void read_data() {
        cout << "Enter Name: ";
        getline(cin, Name);
        cout << "Enter Address: ";
        getline(cin, Address);
        cout << "Enter Telephone Number: ";
        getline(cin, Tel_No);
        cout << "Enter Number of Calls: ";
        cin >> No_of_calls;
    }

    void display_data() const {
        cout << "\n--- Customer Details ---\n";
        cout << "Name      : " << Name << endl;
        cout << "Address   : " << Address << endl;
        cout << "Tel. No.  : " << Tel_No << endl;
        cout << "Calls Made: " << No_of_calls << endl;
    }

    friend void calculate_bill(const TelephoneBill& tb);
};

void calculate_bill(const TelephoneBill& tb) {
    int charge_per_call = 2;
    int total = tb.No_of_calls * charge_per_call;
    cout << "Total Amount to be Paid: Rs. " << total << endl;
}

int main() {
    TelephoneBill customer;

    customer.read_data();
    customer.display_data();
    calculate_bill(customer);

    return 0;
}


OUTPUT:

Enter Name: Raj Sharma
Enter Address: Delhi
Enter Telephone Number: 1234567890
Enter Number of Calls: 50

--- Customer Details ---
Name      : Raj Sharma
Address   : Delhi
Tel. No.  : 1234567890
Calls Made: 50
Total Amount to be Paid: Rs. 100


