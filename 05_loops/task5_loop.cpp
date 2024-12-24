#include<iostream>
using namespace std;

int main(){
    /*
    Task-5 continue Keyword
    Write a program that skips brewing green tea if the user dislikes it. Use a continue statement
    to skip over green tea but brew other types of tea in a list.
    */
    string tea[5] = {"lemon tea", "black tea", "Oolong tea", "green tea", "iced tea"};

    for(int i = 0; i < 5; i++){
        if(tea[i] == "green tea"){
            cout << "skipping the " << tea[i] << endl;
            continue;
        }

        cout << "brewing " << tea[i] << endl;
    }

    return 0;
}