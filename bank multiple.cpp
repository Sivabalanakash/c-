#include <iostream>
using namespace std;

class BankAccount {
	public:
    string accountNumber;
    string accountHolderName;
    double balance;
    BankAccount(string num, string name, double bal) {
        accountNumber = num;
        accountHolderName = name;
        balance = bal;
    }
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. New balance: $" << balance << endl;
    }
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: $" << balance << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }
    void display() {
        cout << "Account number: " << accountNumber << endl;
        cout << "Account holder name: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAccount("19221066121", "kishore", 1000.0);
    myAccount.display();
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.withdraw(1500.0); 
    myAccount.display();
    return 0;
}

