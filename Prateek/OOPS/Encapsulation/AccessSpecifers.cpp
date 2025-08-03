#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
BankAccount(string name, double bal){
    accountHolder = name;
    balance = bal;
}

//Getter

double getBalance(){
    return balance;
}

// Settter
void deposit(double amount){
    if(amount > 0){
        balance += amount;
        cout << "Deposited :" << amount << endl;
    }
    else{
        cout << "Invalid Deposit amount" << endl;
    }
}
};
int main(){
    BankAccount account("Alice",1000);
    cout << "Current Balance :" << account.getBalance() << endl;
    account.deposit(500);
    cout << "Updated Balance :" << account.getBalance() << endl;
    return 0;
}