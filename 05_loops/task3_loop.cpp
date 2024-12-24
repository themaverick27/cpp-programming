#include<iostream>
using namespace std;

int main(){
    /*
    Task-3: For Loop
    Write a program that prints the brewing instructions for making 5 cups of tea. The brewing process 
    should be printed once for each cup using a for loop.
    */
    int teaCups = 5;

    for(int i = 1; i <= teaCups; i++){
        cout << "brewing " << i << " cup of tea." << endl; 
    }

    return 0;
}