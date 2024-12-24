#include<iostream>
using namespace std;

int main(){

    /*
    task-2:
    Write a program that checks if a tea shop is open. If the current hour (input by the user) is 
    between 8 AM and 6 PM, the shop is open; otherwise, it’s closed.
    */

    int timeInHours;

    cout << "Enter the current time (hours only 0-23): ";
    cin >> timeInHours;

    if(timeInHours >= 8 && timeInHours <= 18){
        cout << "The Shop is OPEN!" << endl;
    }
    else{
        cout << "The Shop is CLOSED." << endl;
    }

    return 0;
}