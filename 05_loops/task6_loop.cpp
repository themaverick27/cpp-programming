#include<iostream>
using namespace std;

int main(){
    /*
    Task-6: Nested Loops
    Write a program that brews multiple cups of different types of tea. For each type of tea, 
    brew 3 cups using a nested loop.
    */
    string tea[5] = {"lemon tea", "black tea", "Oolong tea", "green tea", "iced tea"};

    for(int i = 0 ; i < 5 ; i++){
        cout << "Brewing " << tea[i] << endl;
        
        for (int j = 1 ; j <= 3 ; j++){
            cout << "Brewing " << j << " cup of " << tea[i] << endl;
        }
    }
    
    return 0;
}