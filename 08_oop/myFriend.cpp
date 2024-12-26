#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Tea{
    private:
        string teaName;
        int servings;

    public:
        // parameterized constructor
        Tea(string name, int serve): teaName(name), servings(serve){}
        
        // friend method declaration
        friend bool compareServings(const Tea &tea1, const Tea &tea2);

        void display() const {
            cout << "Tea name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
        }
};

// implementation of friend method
bool compareServings(const Tea &tea1, const Tea &tea2){
    return (tea1.servings > tea2.servings);
}

int main(){
    // the protected and private data of a class can be accessed using the friend function.

    Tea teaObj1("Masala Tea", 4);
    Tea teaObj2("Ginger Tea", 8);

    teaObj1.display();
    teaObj2.display();

    if(compareServings(teaObj1, teaObj2)){
        cout << "Tea object 1 has MORE servings" << endl;
    }
    else{
        cout << "Tea object 2 has MORE servings" << endl;
    }

    return 0;
}
// refer: https://learn.microsoft.com/en-us/cpp/cpp/friend-cpp?view=msvc-170