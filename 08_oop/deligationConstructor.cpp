#include<iostream>
#include<vector>
using namespace std;

class Tea{
    public:
        string teaName;
        int servings;
        vector<string> ingredients;

        // deligation constructor -  delegating constructors in C++ to invoke other constructors and reduce code repetition
        Tea(string name): Tea(name, 1, {"water", "tea leaves"}){}

        // main constructor
        Tea(string name, int serve, vector<string> ingre){
            teaName = name;
            servings = serve;
            ingredients = ingre;

            cout << "main constructor called!" << endl;
        }


        void displayTeaDetails(){
            cout << "Tea name: " << teaName << endl;
            cout << "servings: " << servings << endl;
            cout << "igredients: ";
            for(auto ingre: ingredients){
                cout << ingre << " ";
            }
            cout << endl;
        }
};

int main(){

    Tea quickTea("Quick Tea");
    quickTea.displayTeaDetails();

    return 0;
}