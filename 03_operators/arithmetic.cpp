#include<iostream>
using namespace std;

int main(){
    // Arithmetic Operators (+, -, *, /, %, //)

    /*
    Task-1:
    Create a program that calculates the total price of tea cups.
    The user inputs the number of cups they want and the price per 
    cup. The program should calculate the total price, apply a 5% 
    discount if the total is above a certain amount (x), and show the
    final price.
    */

    int numberOfCups;
    float pricePerCup, discount, totalPrice;

    cout << "How many cups of tea? ";
    cin >> numberOfCups;

    cout << "the price for each cup is: ";
    cin >> pricePerCup;

    totalPrice = numberOfCups * pricePerCup;

    if(totalPrice >= 299){
        discount = (totalPrice * 0.05);
        totalPrice = totalPrice - discount;
        cout << "final Price after discount: " << totalPrice << endl;
    } else{
        cout << "final price: " << totalPrice << endl;
    }


    return 0;
}