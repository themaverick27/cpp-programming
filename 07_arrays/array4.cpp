#include<iostream>
using namespace std;

int* prepareTeaOrders(int cups){
    // dynamic array allocation - new keyword
    int* orders = new int[cups];

    for(int i = 0; i < cups; i++){
        orders[i] = (i+1) * 10;
    }
    return orders;
}

int main(){
    // pointers and arrays
    int cups = 5;
    int* teaOrders = prepareTeaOrders(cups);

    // cout << teaOrders << endl; // prints the address of first element

    for(int i = 0; i < cups; i++){
        cout << "cups: " << teaOrders[i] << endl;
    }

    delete[] teaOrders; // delete or free up memory
    
    return 0;
}