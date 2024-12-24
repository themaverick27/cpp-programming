#include<iostream>
using namespace std;

int checkTemperature(int temperature){
    return temperature;
}

// declaration of function
void printName(string name);

// function overloading
void serveTea(int cups){
    cout << "number of cups " << cups << endl;
}

void serveTea(string teaType = "Lemon Tea"){
    int cups = 2; // formal parameters
    cout << "serving " << teaType << endl;
}

void serveTea(int cups, int teaLeaves){
    cout << cups << " " << teaLeaves << endl;
}


int main(){
    /*
    syntax: function declaration 
    returnType functionName(<parameters>){
        // function body
    }

    syntax: function calling
    functionName(<arguments>);
    */

    int currentTemp = checkTemperature(100); // calling of function
    // cout << currentTemp << endl;

    // printName("John wick"); // calling of function

    // function overloading
    serveTea();
    serveTea("Green Tea");
    serveTea(10);

    return 0;
}

// defination of function
void printName(string name){
    cout << "your name is " << name << endl;
}