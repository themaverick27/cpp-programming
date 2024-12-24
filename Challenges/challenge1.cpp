#include<iostream>
#include<string>
using namespace std;

int main(){
    /*
    Challenge-1:
    Tea Information display - Write a program that declares variables to store the type of tea, 
    its price per kilogram (float), and its rating (char). Use data types effectively and 
    print them in a formatted output using escape sequences.
    */

    string teaType = "\"lemon tea\"";
    float teaPrice = 49.99;
    char teaRating = 'A';

    cout << "Tea Information: \n" << "Type of Tea: " << teaType << "\nPrice per Kilogram: " << teaPrice << "\nRating: " << teaRating << endl; 

    /*
    Challenge-2:
    Modify Tea Prices - Create a program where the user inputs a base price for tea. 
    Use type casting to increase the price by 10% and display the rounded new price using explicit casting.
    */

    int teaBasePrice;
    cout << "Enter a base price for tea: ";
    cin >> teaBasePrice;

    float modifiedPrice = teaBasePrice + (teaBasePrice * (0.1));
    // cout << modifiedPrice << endl;
    int roundedNewPrice = (int) modifiedPrice;

    cout << "rounded new price: " << roundedNewPrice << endl;

    /*
    Challenge-3:
    Favorite Tea Input - Write a program that takes the user’s favorite tea as input using getline and
    also asks how many cups of tea they want using cin. Display the result in a fun message.
    */

    string favouriteTea;
    int numberOfCups;

    cout << "Input your favourite tea: ";
    getline(cin, favouriteTea);

    cout << "How many cups of " << favouriteTea << " your want to order? ";
    cin >> numberOfCups; 

    cout << "Here's your " << numberOfCups << " cups of " << favouriteTea << "!" <<endl;
    cout << "That's a lot of tea to enjoy, sip by sip!" << endl;

    return 0;
}