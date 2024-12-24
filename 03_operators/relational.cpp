#include<iostream>
using namespace std;

int main(){
    // Relational Operator (==, >, <, >=, <=, !=)

    /*
    Task-3:
    A tea shop offers a loyalty program. Customers who buy more than 20 cups of tea get a 
    special "Gold" badge, and those who buy 10 to 20 cups get a "Silver" badge. Write a 
    program to display the badge they will receive based on the number of cups they buy.
    */
    
    int numberOfCups;
    cout << "How many tea cups you have? ";
    cin >> numberOfCups;

    if(numberOfCups > 20){
        cout << "You received GOLD Badge" << endl;
    }
    else if(numberOfCups >= 10){
        cout << "You received SILVER Badge" << endl;
    }
    else{
        cout << "NO badge" << endl;
    }

    return 0;
}