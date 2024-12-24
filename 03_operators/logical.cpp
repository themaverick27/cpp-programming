#include<iostream>
#include<string>
using namespace std;

int main(){
    // Logical Operators (&&, ||, !)

    /*
    Task-4:
    Create a program that checks if a user is eligible for a tea subscription discount. 
    The discount applies if the user is either a student or has purchased more than 15 cups. 
    Ask the user to input their status (student or not) and their cup count.
    */

    bool isStudent;
    int numberOfCups;

    cout << "Are you a Student? Enter (1 for yes and 0 for no): ";
    cin >> isStudent;

    cout << "Enter your cup counts: ";
    cin >> numberOfCups;

    if(isStudent || numberOfCups > 15){
        cout << "You are eligible for a TEA SUBSCRIPTION discount!" << endl;
    }
    else{
        cout << "You are NOT eligible for discount." << endl;
    }

    return 0;
}