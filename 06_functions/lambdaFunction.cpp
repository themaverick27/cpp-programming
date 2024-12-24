#include<iostream>
using namespace std;

int main(){ 
    // Lambda function - Lambda expressions are inline anonymous functions i.e. they do not have a name.
    // usually used in frameworks and libraries

    /*
    syntax: 
    [capture clause] (parameters) -> return-type {   
        definition of method   
    };
    */
    auto brewingCups = [](int cups){
        cout << "brewing " << cups << " of tea!" << endl;
    };

    brewingCups(2);

    return 0;
}