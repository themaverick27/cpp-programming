#include<iostream>
using namespace std;

int main(){

    /*
    task-3:
    A tea shop offers discounts based on the number of tea cups ordered. Write a program that checks the 
    number of cups ordered and applies a discount:
    More than 20 cups: 20% discount
    Between 10 and 20 cups: 10% discount
    Less than 10 cups: No discount
    */

    int numberOfCups;
    float pricePerCup = 9.5, discount, totalPrice;

    cout << "How many tea cups you want to order? ";
    cin >> numberOfCups;

    totalPrice = numberOfCups * pricePerCup;

    if(numberOfCups > 20){
        discount = 0.20;
    }
    else if(numberOfCups >= 10){
        discount = 0.10;
    } else{
        discount = 0;
    }

    totalPrice -= (totalPrice * discount);
    cout << "your total bill is: " << endl;


    return 0;
}