#include<iostream>
#include<string>
using namespace std;

// abstract class
class Tea{
    public:
        virtual void prepareIngredients() = 0; // pure virtual function 
        virtual void brew() = 0; // pure virtual function
        virtual void serve() = 0; // pure virtual function

        void makeTea(){
            prepareIngredients();
            brew();
            serve();
        }
};

// derived class
class GreenTea : public Tea{
    public:
        void prepareIngredients() override {
            cout << "Green leaves and water is ready!" << endl;
        }

        void brew() override {
            cout << "Green Tea brewed!" << endl;
        }

        void serve() override {
            cout << "Green Tea served" << endl;
        }  
};

// derived class
class GingerTea : public Tea{
    public:
        void prepareIngredients() override {
            cout << "Ginger and water is ready!" << endl;
        }

        void brew() override {
            cout << "GingerTea brewed!" << endl;
        }

        void serve() override {
            cout << "Ginger Tea served" << endl;
        }  
};

int main(){

    GreenTea greenTea; // object of derived class Green Tea
    GingerTea gingerTea; // object of derived class Ginger Tea

    greenTea.makeTea();
    gingerTea.makeTea();

    return 0;
}
// refer: https://learn.microsoft.com/en-us/cpp/cpp/abstract-classes-cpp?view=msvc-170