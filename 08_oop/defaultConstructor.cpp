#include<iostream>
#include<vector>

using namespace std;

class Tea{
    public:
        string teaName;
        int cups;
        vector<string> ingredients;

        // default constructor
        Tea(){
            teaName = "unknown tea";
            cups = 2;
            ingredients = {"water", "tea leaves"};
            cout << "default constructor called" << endl;
        }

        void displayTeaDetails(){
            cout << "Tea name: " << teaName << endl;
            cout << "Tea servings: " << cups << endl;

            cout << "Ingredients: ";
            for(string it: ingredients){
                cout << it << " ";
            }
            cout << endl;
        }
};

int main(){
    Tea defaultTea; // object

    defaultTea.displayTeaDetails();

    // Note: default constructor are special member functions
    // that are invoked implicitly when a class object is created.

    return 0;
}