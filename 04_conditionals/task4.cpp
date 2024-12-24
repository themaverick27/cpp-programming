#include<iostream>
#include<string>
using namespace std;

int main(){

    /*
    task-4:
    Write a program that lets the user select a tea type from a menu. Use a switch statement to display 
    the price based on the selected tea:
    Green Tea: $2
    Black Tea: $3
    Oolong Tea: $4
    */
    int choice;
    double price;
    
    cout << "All the Tea types available which are available!" << endl;
    cout << "1. Green Tea \n 2. Black Tea \n3.Oolong Tea" << endl; 
    

    cout << "Select tea from the menu and enter choice number: ";
    cin >> choice;

    switch(choice){
        case 1:
            price = 2;
            cout << "You ordered Green Tea. Bill: " << price << endl;
            break;
        case 2:
            price = 3;
            cout << "You ordered Black Tea. Bill: " << price << endl;
            break;
        case 3:
            price = 4;
            cout << "You ordered Oolong Tea. Bill: " << price << endl;
            break;
        default:
            cout << "Invalid! Choose valid tea type from the menu" << endl;
            break;
    }

    return 0;
}