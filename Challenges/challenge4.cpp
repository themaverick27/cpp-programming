#include<iostream>
#include<string>
using namespace std;

int main(){

    /*
    Challenge-1: while loop
    Write a program that keeps asking the user to input the number of tea bags they have left. 
    Stop when the number of bags is 0, and print a message that they are out of tea bags.
    */ 
    
    int numberOfTeaBags;

    while(true){
        cout << "How many tea bags do you have? ";
        cin >> numberOfTeaBags;

        if(numberOfTeaBags == 0) break;
    }
    cout << "You are out of tea bags." << endl;

    /*
    Challenge-2: do-while loop
    Write a program that asks the user if they want to add more sugar to their tea. 
    Keep asking until they respond with "enough." Use a do-while loop for this.
    */

    string response;
    do{
        cout << "Do you want to add more sugars to the tea? (type enough to exit): ";
        cin >> response;

    } while(response != "enough");


    /*
    Challenge-3: for loop
    Create a program that prints the first 10 multiples of 2, representing the total tea bags required for making batches of tea.
    */

    int number = 2;
    for(int i = 1; i <= 10; i++){
        cout << "total tea bags required for " << i << " batch of tea: " << (number*i) << endl;
    }


    /*
    Challenge-4: break and continue 
    Write a program that checks a list of tea types and serves tea for each type, except "Herbal Tea." 
    If "Herbal Tea" is encountered, skip it using continue. If "No Tea" is encountered, stop the loop using break.
    */
   /*
    string teaTypes[8] = {"Lemon Tea", "Herbal Tea", "Orange Tea", "Oolong Tea", "Black Tea", "No Tea", "White Tea", "Assam Tea"};

    for(int i = 0; i < 8; i++){
        if(teaTypes[i] == "Herbal Tea"){
            cout << "Skipping the " << teaTypes[i] << endl;
            continue;
        }
        if(teaTypes[i] == "No Tea") break;

        cout << "brewing " << teaTypes[i] << endl;
    }
    */

    /*
    Challenge5: Nested Loops
    Write a program that displays a tea brewing schedule. For each day of the week (outer loop), 
    brew 2 cups of tea for breakfast, lunch, and dinner (inner loop).
    */

    string week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    string teaTypes[3] = {"Lemon Tea", "Herbal Tea", "Black Tea"};

    for(int i = 0; i < 7; i++){
        cout << week[i] << endl;
        for(int j = 0; j < 3; j++){
            if(j == 0){
                cout << "brewing " << teaTypes[j] << " for breakfast." << endl;
            }
            else if(j == 1){
                cout << "brewing " << teaTypes[j] << " for lunch." << endl;
            }
            else{
                cout << "brewing " << teaTypes[j] << " for dinner." << endl;
            }
        }
        cout << endl;
    }

    
    return 0;
}