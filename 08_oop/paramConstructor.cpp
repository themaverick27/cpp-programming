#include<iostream>
#include<vector>

using namespace std;

class Tea{
    public:
        string teaName;
        int cups;
        vector<string> ingredients;

        // parameterized constructor
        Tea(string name, int serve, vector<string> ing){
            teaName = name;
            cups = serve;
            ingredients = ing;
            cout << "parameterized constructor called" << endl;
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
    Tea lemonTea("lemon tea", 2, {"water", "lemon", "honey"}); // object

    lemonTea.displayTeaDetails();

    // Note: default constructor are special member functions
    // that are invoked implicitly when a class object is created.

    return 0;
}