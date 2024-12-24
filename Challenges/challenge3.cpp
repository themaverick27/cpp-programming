#include<iostream>
using namespace std;

int main(){

    /*
    Challenge-1:
    Write a program that asks the user for their favorite tea. If they choose "Oolong," print a message saying, 
    "You have excellent taste!"
    */
     
     string favouriteTea;
     cout << "What's your favourite tea? ";
     cin >> favouriteTea;

     if(favouriteTea == "Oolong"){
        cout << "You have excellent taste!";
     }

    /*
    Challenge-2:
    Create a program that asks the user for their age. If the user is older than 18, allow them to proceed with 
    purchasing tea; otherwise, print a message saying they are too young to purchase.
    */

    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age > 18){
        cout << "You can purchase tea!";
    }
    else{
        cout << "You are too young to purchase tea." << endl;
    }

    /*
    Challenge-3:
    Write a program that checks the temperature of tea water input by the user:
    If the temperature is above 100°C, print "Too hot!"
    If the temperature is between 80°C and 100°C, print "Perfect temperature."
    If the temperature is below 80°C, print "Too cold!"
    */

    float temperature;
    cout << "Enter the temperature of tea water: ";
    cin >> temperature;

    if(temperature > 100){
        cout << "Too hot!" << endl;
    }
    else if(temperature >= 80){
        cout << "Perfect temperature" << endl;
    }
    else{
        cout << "Too Cold!" << endl;
    }

    /*
    Challenge-4:
    Write a program that offers different tea brewing methods. The user selects a method 
    (1 for Boiling, 2 for Steeping, 3 for Iced Tea), and the program prints the instructions 
    for the selected brewing method. Use a switch statement to handle the selections.
    */
    int choice;

    cout << "Select methods for tea brewing: " << endl;
    cout << "1. Boiling \n2. Steeping \n3. Iced Tea" << endl;
    cout << "Enter choice (1, 2 or 3): ";
    cin >> choice;

    switch (choice){
        case 1:
            cout << "Instructions for Boiling method!" << endl;
            break;
        case 2:
            cout << "Instructions for Steeping method!" << endl;
            break;
        case 3:
            cout << "Instructions for Iced Tea method!" << endl;
            break;
        default:
            cout << "invalid choice!" << endl;
            break;
    }
    
    return 0;
}