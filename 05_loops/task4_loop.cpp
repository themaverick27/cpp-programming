#include<iostream>
using namespace std;

int main(){
    /*
    Task-4: break Keyword
    Write a program that keeps serving tea until the user says they’ve had enough (input 'stop'). 
    Use a break statement to exit the loop when the user types 'stop'.
    */
    string response;

    while(true){
        cout << "Do you want more tea? (type stop to exit): ";
        cin >> response;

        if(response == "stop") break;

        cout << "Tea serving!" << endl;
    }
    cout << "No more tea cups will be served." << endl;
    
    return 0;
}