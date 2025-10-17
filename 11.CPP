CODE:

#include <iostream>
using namespace std;

class BankAccount {
protected:
    int account_number;
    float balance;

public:
    void openAccount(int accNo, float initialBalance) {
        account_number = accNo;
        balance = initialBalance;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: Rs. " << amount << endl;
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: Rs. " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display() const {
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

// Derived class 1 - Savings Account
class SavingsAccount : public BankAccount {
private:
    float rate_of_interest; // in percentage

public:
    void setInterestRate(float rate) {
        rate_of_interest = rate;
    }

    void calculateInterest() {
        float interest = balance * rate_of_interest / 100;
        cout << "Interest earned: Rs. " << interest << endl;
    }
};

// Derived class 2 - Current Account
class CurrentAccount : public BankAccount {
private:
    const float minimum_balance = 500.0;
    const float service_charge = 50.0;

public:
    void checkAndApplyServiceCharge() {
        if (balance < minimum_balance) {
            balance -= service_charge;
            cout << "Balance below minimum. Service charge of Rs. " << service_charge << " applied." << endl;
        } else {
            cout << "No service charge. Minimum balance maintained." << endl;
        }
    }
};

int main() {
    cout << "--- Savings Account ---" << endl;
    SavingsAccount sa;
    sa.openAccount(1001, 1000);
    sa.deposit(500);
    sa.withdraw(300);
    sa.setInterestRate(5);  // 5% interest
    sa.display();
    sa.calculateInterest();

    cout << "\n--- Current Account ---" << endl;
    // Current Account demo
    CurrentAccount ca;
    ca.openAccount(2001, 400); // Below minimum balance
    ca.deposit(100);
    ca.withdraw(50);
    ca.display();
    ca.checkAndApplyServiceCharge();
    ca.display(); // Show balance after charge

    return 0;
}


OUTPUT:

--- Savings Account ---
Deposited: Rs. 500
Withdrawn: Rs. 300
Account Number: 1001
Balance: Rs. 1200
Interest earned: Rs. 60

--- Current Account ---
Deposited: Rs. 100
Withdrawn: Rs. 50
Account Number: 2001
Balance: Rs. 450
Balance below minimum. Service charge of Rs. 50 applied.
Account Number: 2001
Balance: Rs. 400


