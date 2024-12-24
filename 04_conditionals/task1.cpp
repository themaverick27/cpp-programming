#include<iostream>
#include<string>
using namespace std;

int main(){

    /*
    task-1:
    Write a program that checks if the user wants to order Green Tea. If the user types "Green Tea," 
    the program should confirm their order.
    */ 
    
    string teaOrder;

    cout << "Enter your tea order: ";
    getline(cin, teaOrder);

    if(teaOrder == "Green Tea"){
        cout << "Your have ordered Green Tea." << endl;
    }


    return 0;
}