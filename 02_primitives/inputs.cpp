#include<iostream>
#include<string>
using namespace std;

int main(){
    // inputs in C++
    string name;
    int marks;

    cout << "What is your name?" << endl;
    getline(cin, name);

    cout << "your marks?" << endl;
    cin >> marks;

    cout << "name: " << name << " and marks: " << marks << endl;

    return 0;
}