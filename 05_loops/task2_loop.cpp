#include<iostream>
using namespace std;

int main(){

    /*
    Task-2: Do-While Loop
    Create a program that asks the user if they want more tea. Keep asking them until 
    they type "no" (case-insensitive), using a do-while loop.
    */  
    
    string needed;

    do{
        cout << "Do you want more tea? (type yes or no): ";
        cin >> needed;
    } while(needed != "no" || needed != "NO");
    
    return 0;
}