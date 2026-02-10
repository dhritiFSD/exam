#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;
    string ownerName;

public:
    BankAccount(int accNo, string name, double initialBalance) {
        accountNumber = accNo;
        ownerName = name;
        balance = initialBalance;
    }

    void credit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount credited: $" << amount << endl;
        } else {
            cout << "Invalid credit amount!" << endl;
        }
    }

    void debit(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount debited: $" << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    void displayBalance() {
        cout << "Account Holder: " << ownerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl << endl;
    }
};

int main() {
    BankAccount account(101, "John Doe", 5000.00);

    account.displayBalance();
    account.credit(1500.00);
    account.debit(2000.00);
    account.displayBalance();

    return 0;
}
