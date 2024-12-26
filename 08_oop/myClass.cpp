#include<iostream>
#include<vector>
using namespace std;

class Tea {
    public:
        // data members or attributes (variables)
        string teaName;
        int cups;
        vector<string> ingredients;

        // member function or methods
        void displayTeaDetails(){
            cout << "Tea name: " << teaName << endl;
            cout << "Tea servings: " << cups << endl;

            cout << "Ingredients: ";
            for(string it: ingredients){
                cout << it << " ";
            }
            cout << endl;
        }

    private:
        int _x;
        int _y;
};

int main(){
    // Note: c++ in not a true object oriented programming language, as 
    // main() fn can exists without any class unlike Java and C# (true oop language)
    
    // the default access is private and public in a struct or union.

    Tea teaOne; // object 

    teaOne.teaName = "Lemon Tea";
    teaOne.cups = 2;
    teaOne.ingredients = {"water", "lemon", "honey", "tea"};
    
    teaOne.displayTeaDetails();

    Tea teaTwo; // object

    teaTwo.teaName = "Masala Tea";
    teaTwo.cups = 4;
    teaTwo.ingredients = {"Ginger", "Masala", "Tea", "water"};

    teaTwo.displayTeaDetails();
    
    return 0;
}