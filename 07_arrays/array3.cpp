#include<iostream>
using namespace std;

int totalTeaServed(int tea[], int size){
    int total = 0;

    for(int i = 0; i < size; i++){
        total += tea[i];
    }
    return total;
}

int main(){
    int teaServed[7] = {50, 40, 80, 70, 45, 55, 60};

    int total = totalTeaServed(teaServed, 7);
    cout << "Total tea served in a week: " << total << endl;

    return 0;
}