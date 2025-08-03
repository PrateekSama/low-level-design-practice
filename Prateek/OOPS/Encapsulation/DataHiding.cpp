#include<iostream>
using namespace std;

class Account{
private:
    double balance;

    bool validateWithdrawal(double amount){
        return amount > 0 && amount <= balance;
    }
public:
    Account(double initailBalance){
        balance = initailBalance;
    }

    void withdraw(double amount){
        if(validateWithdrawal(amount)){
            balance -= amount;
            cout << "wuthdrawal Sucessfull:" << amount << endl;
        }
        else{
            cout << "Insufficient balance or Invalid amount" << endl;
        }
    }
    double getBalance(){
        return balance;
    }
};
int main(){
    Account myAccount(1000);
    myAccount.withdraw(300);
    cout << "Remaining Balance: " << myAccount.getBalance() << endl;
    return 0;

}