#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Getter for account number
    string getAccountNumber() {
        return accountNumber;
    }

    // Method to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit of $" << amount << " successful. New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Method to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful. New balance: $" << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    // Getter for balance (read-only)
    double getBalance() {
        return balance;
    }
};

int main() {
    // Creating a BankAccount object
    BankAccount account("123456", 1000.00);

    // Accessing account information using getters
    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Current Balance: $" << account.getBalance() << endl;

    // Making deposits and withdrawals
    account.deposit(500.00);
    account.withdraw(200.00);

    // Displaying updated balance
    cout << "Updated Balance: $" << account.getBalance() << endl;

    return 0;
}
