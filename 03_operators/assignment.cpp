#include<iostream>
using namespace std;

int main(){
    // Assignment Operators (=, +=, -=, *=, /=, %=)

    /*
    Task-2: 
    Write a program that allows a user to input the number of tea bags they have. 
    Assign additional bags to them based on certain conditions (e.g., if they have
    fewer than 10 bags, give them 5 extra). Update the original number using 
    assignment operators.
    */

   int numberOfTeaBags;
   cout << "How many tea bags you have? ";
   cin >> numberOfTeaBags;

   if(numberOfTeaBags < 10){
    // numberOfTeabags = numberOfTeaBags + 5;
    numberOfTeaBags += 5;
   }

   cout << "Total number of tea bags now you have: " << "numberOfTeaBags" << endl;

   return 0;
}