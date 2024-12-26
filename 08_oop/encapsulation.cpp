#include<iostream>
using namespace std;

class BankAccount{
    private:
        string accountNumber;
        double balance;

    public:
        BankAccount(string accNum, double initialBalance){
            accountNumber = accNum;
            balance = initialBalance;
        }

        // getter
        double getBalance() const{
            return balance;
        }

        // method to deposit money
        void deposit(double amount){
            if(amount > 0){
                balance +=  amount;
                cout << "Deposited amount: " << amount << endl;
            }
            else{
                cout << "Invalid amount deposit" << endl;
            }
        }

        void withdraw(double amount){
            if(amount > 0 && amount <= balance){
                balance -= amount;
                cout << "Withdrawn amount: " << amount << endl;
            }
            else{
                cout << "Invalid withdrawn amount" << endl;
            }
        }
};

int main(){
    BankAccount myAccount("271202002", 1000);

    myAccount.getBalance();

    myAccount.deposit(200);
    myAccount.withdraw(100);

    return 0;
}