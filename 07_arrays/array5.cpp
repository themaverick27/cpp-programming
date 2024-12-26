#include<iostream>
using namespace std;

int main(){
    // multi-dimensional array

    // 2D array
    int teaSales[3][7] ={
        {50, 60, 55, 70, 65, 80, 75}, // shop 1 sales for 7 days
        {40, 50, 90, 60, 65, 70, 80}, // shop 2 sales for 7 days
        {45, 50, 55, 60, 65, 80, 75}, // shop 3 sales for 7 days
    };

    for(int i = 0; i < 3; i++){
        cout << "Shop " << (i+1) << " sales of a week: ";
        for(int j = 0; j < 7; j++){
            cout << teaSales[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}