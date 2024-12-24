#include<iostream>
using namespace std;

int main(){

    float price = 199.99;
    int roundedPrice = (int) price;

    cout << roundedPrice << endl;

    int quantity = 5;
    double totalPrice = quantity * price;

    cout << totalPrice << endl;

    return 0;
}