#include<iostream>
using namespace std;

int main(){

    /*
    Challenge-1:
    Write a program that calculates the price of tea packs. A user enters the number of tea packs they want, 
    and the price per pack. Apply a 10% tax to the total price and display the final cost.
    */
    
    int numberOfTeaPacks;
    float pricePerPack, totalPrice;

    cout << "How many tea packs you want? ";
    cin >> numberOfTeaPacks;

    cout << "Enter price per tea pack: ";
    cin >> pricePerPack;

    totalPrice = totalPrice + (totalPrice * 0.1);
    cout << "final cost: " << totalPrice << endl;


    /*
    Challenge-2:
    Create a program where the user inputs the number of tea bags they have. If the number is less than 20, give 
    them 10 extra bags using the += assignment operator. Display the updated total.
    */

    int teabags;

    cout << "How many tea bags you have? ";
    cin >> teabags;

    if(teabags < 20){
        teabags += 10;
    }
    cout << "total number of tea bags: " << teabags << endl;

    /*
    Challenge-3:
    A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for
    more than a year. Write a program that checks if the user qualifies for a discount based on their input.
    */

    bool isMember;
    int numberOfCups;

    cout << "Are you a member for more than 1 year? (Enter 1 for yes and 0 for no): ";
    cin >> isMember;

    cout << "How many cups do you want to buy? ";
    cin >> numberOfCups;

    if(isMember || numberOfCups > 12){
        cout << "you are ELIGIBLE for tea subscription service offers." << endl;
    }
    else{
        cout << "you are NOT ELIGIBLE for discount offer." << endl;
    }
   
    /*
    Challenge-4:
    Write a program that uses bitwise AND (&) to check which tea types are in stock. The stock is encoded in an 
    integer (1 for Green, 2 for Black, 4 for Oolong). Allow the user to check availability by inputting the tea 
    type (1, 2, or 4), and display a message saying whether that tea is in stock or not.
    */

    const int green = 1;
    const int black = 2;
    const int oolong = 4;

    int stock = green | oolong; // stock has green and oolong tea but not black

    int teaType;
    cout << "Enter tea type you want (1 for Green, 2 for Black, 4 for Oolong): ";
    cin >> teaType;
    
    if((stock & teaType) != 0){
        cout << "Tea is in stock" << endl;
    }
    else{
        cout << "Tea is not in stock" << endl;
    }

  
    return 0;
}