
/*
In normal term encapsulation is defined as wrapping up of data and information under a single unit.
Encapsulation define as binding together the data and function that manipulates them.

 Encapsulation helps to protect the internal state of an object and restricts access to certain components, allowing only specific methods to modify the data.

Key Features of Encapsulation
Data Hiding: The internal representation of an object is hidden from the outside. Only the object's methods can access or modify its data.
Controlled Access: Access to the object's data is controlled through public methods, known as getters and setters, allowing validation or modification of data before it's changed.
*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance; // Private variable to store the balance

public:
    // Constructor to initialize the account with an initial balance
    BankAccount(double initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0; // Set to 0 if the initial balance is negative
            cout << "Initial balance was invalid. Set to 0." << endl;
        }
    }

    // Method to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    // Method to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    // Method to get the current balance
    double getBalance() const {
        return balance;
    }
};

int main() {
    // Creating a BankAccount object with an initial balance of 1000
    BankAccount myAccount(1000);
    
    // Displaying the current balance
    cout << "Current Balance: " << myAccount.getBalance() << endl;
    
    // Depositing money
    myAccount.deposit(500);
    cout << "Current Balance: " << myAccount.getBalance() << endl;
    
    // Withdrawing money
    myAccount.withdraw(300);
    cout << "Current Balance: " << myAccount.getBalance() << endl;

    // Attempting to withdraw more than the available balance
    myAccount.withdraw(1500);

    return 0;
}
