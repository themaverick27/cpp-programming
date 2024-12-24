#include<iostream>
using namespace std;

void changeNumber(int number1, int number2){
    number1 += 20;
    number2 += 30;

    cout << "numbers inside changeNumber() function: " << number1 << " and " << number2 << endl;
}

int main(){ 
    // pass by value

    int number1 = 40;
    int number2 = 55;

    cout << "numbers inside main function before fn calling: " << number1 << " and " << number2 << endl;

    changeNumber(number1, number2);

    cout << "numbers inside main function after fn calling: " << number1 << " and " << number2 << endl;

    return 0;
}