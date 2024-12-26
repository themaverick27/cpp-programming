#include<iostream>
#include<vector>
using namespace std;

class Tea{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;

    public:
        // default constructor
        Tea(){
            teaName = "Unknown Tea";
            servings = 1;
            ingredients = {"water", "tea leaves"};
        }

        // parameterized constructor
        Tea(string name, int serve, vector<string> ingre){
            teaName = name;
            servings = serve;
            ingredients = ingre;
        }

        // getter for teaName
        string getTeaName(){
            return teaName;
        }
        // setter for teaName
        void setTeaName(string name){
            // logic
            teaName = name;
        }

        // getter for servings
        int getServings(){
            return servings;
        }
        // setter for servings
        void setServings(int serve){
            servings = serve;
        }

        // getter for ingredients (vector)
        vector<string> getIngredients(){
            return ingredients;
        }
        // setter for ingredients (vector)
        void setIngredient(vector<string> ingre){
            ingredients = ingre;
        }

        void displayTeaDetails(){
            cout << "Tea name; " << teaName << endl;
            cout << "servings: " << servings << endl;
            cout << "igredients: ";
            for(auto ingre: ingredients){
                cout << ingre << " ";
            }
            cout << endl;
        }

};

int main(){
    Tea tea;

    tea.setTeaName("Masala Tea");
    tea.setServings(4);
    tea.setIngredient({"water", "masala", "tea leaves"});

    tea.displayTeaDetails();

    return 0;
}
// Note: getters and setters are public methods that are used to access and modify the private or protected members of a class
