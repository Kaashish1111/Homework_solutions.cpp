// 1. Bank Customer Class:
// Challenge: Design a Customer class for a bank system that manages customer information and basic operations.
// Attributes:
// name: String containing the customer's full name.
// accountNumber: Unique integer identifying the customer's account.
// accountBalance: Double representing the current balance in the account.
// isActive: Boolean indicating whether the account is active.
// Methods:
// deposit(amount): Adds the specified amount to the account balance.
// withdraw(amount): Deducts the specified amount from the account balance (check for sufficient funds).
// transfer(amount, targetAccount): Transfers the specified amount to another customer's account (within the system).
// printDetails(): Prints the customer's name, account number, and current balance.


// ans:
#include<iostream>
using namespace std;

class Customer {
    private:
    string name;
    int accountNumber;
    double accountBalance;
    bool isActive;

    public:
    Customer(string n, int an, double ab, bool ia){
        name = n;
        accountNumber = an;
        accountBalance = ab;
        isActive = ia;
    }
    void deposit(double amount){
        accountBalance += amount;
    }
    bool withdraw(double amount){
        if(accountBalance >= amount){
            accountBalance -= amount;
            return true;
        }else{
            return false;
        }
    }
    bool transfer(double amount, Customer& targetAccount){
        if(withdraw(amount)){
            targetAccount.deposit(amount);
            return true;
        } else{
            return false;
        }
    }
    void printDetails(){
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: $" << accountBalance << endl;
        cout << "Account Active: " << (isActive? "Yes" : "No") << endl;
    }
};
int main(){
    Customer c1("John Doe", 12345, 1000.0, true);
    c1.printDetails();
    c1.deposit(500.0);
    cout<<endl;
    c1.printDetails();
    Customer c2("Jane Smith", 67890, 2000.0, true);
    c1.transfer(300.0, c2);
    cout<<endl;
    c1.printDetails();
    cout<<endl;
    c2.printDetails();
    return 0;
}