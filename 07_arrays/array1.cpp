#include<iostream>
using namespace std;

int main(){
    // arrays - collection of items of the same variable type that are stored at contiguous memory locations

    int teaTemperature[5] = {85, 90, 88, 92, 89};

    cout << "Tea temperature: " << endl;;
    for(int i = 0; i < 5; i++){
        cout << teaTemperature[i] << " degree" << endl;
    }


    return 0;
}