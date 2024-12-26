#include<iostream>
#include<vector>

using namespace std;

class Tea{
    public:
        string* teaName;
        int cups;
        vector<string> ingredients;

        // parameterized constructor
        Tea(string name, int serve, vector<string> ing){
            teaName = new string(name);
            cups = serve;
            ingredients = ing;
            cout << "parameterized constructor called" << endl;
        }

        // copy constructor
        Tea(const Tea& other){
            teaName = new string(*other.teaName);
            cups = other.cups;
            ingredients = other.ingredients;
            cout << "copy constructor called" << endl;
        }

        // destructor
        ~Tea(){
            delete teaName;
            cout << "destructor called" << endl;
        }

        void displayTeaDetails(){
            cout << "Tea name: " << *teaName << endl;
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
    // lemonTea.displayTeaDetails();

    // copy the object
    Tea copiedTea = lemonTea;
    // copiedTea.displayTeaDetails();

    *lemonTea.teaName = "modified lemon tea";

    cout << "Lemon Tea" << endl;
    lemonTea.displayTeaDetails();
    cout << "Copied Tea" << endl;
    copiedTea.displayTeaDetails();

    return 0;
}