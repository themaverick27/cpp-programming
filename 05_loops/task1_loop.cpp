#include<iostream>
using namespace std;

int main(){

    /*
    Task-1: While Loop
    Write a program that keeps track of tea orders. Each time a cup of tea is made, 
    decrease the number of cups remaining. The loop should run until all cups are served.
    */
     
    int numberOfCups;
    cout << "Enter the number of cups to be served: ";
    cin >> numberOfCups;

    while(numberOfCups > 0){
        numberOfCups--;
        cout << "A tea cup is served!" << endl;
        cout << "remaining cups: " << numberOfCups << endl;
    }

    
    return 0;
}