#include<iostream>
#include<string>
#include<vector>
using namespace std; 

// base class
class Tea{
    protected:
        string teaName;
        int servings;

    public:
        Tea(string name, int serve): teaName(name), servings(serve){
            cout << "Tea constructor called for "  << teaName << endl;
        }  

        virtual void brewTea() const {
            cout << "brewing " << teaName << " with generic method." << endl;
        }

        virtual void serveTea() const {
            cout << "servings " << servings << " cups of tea with generic method." << endl;
        }

        virtual ~Tea(){
            cout << "Tea destructor called for " << teaName << endl;
        }
};

// child class or inherited class
class GreenTea: public Tea {
    public:
        GreenTea(int serve): Tea("Green Tea", serve){
            cout << "Green Tea construtor called " << endl;
        }

        void brewTea() const override{
            cout << "brewing " << teaName << " by steeping green leaves" << endl;
        }

        void serveTea() const override{
            cout << "servings " << servings << " cups of tea." << endl;
        }

        ~GreenTea(){
            cout << "Green Tea destructor called" << endl;
        }
};

// child class or inherited class
class MasalaTea: public Tea{
    public: 
        MasalaTea(int serve): Tea("Masala Tea", serve){
            cout << "Masala Tea constructor called " << endl;
        }

        void brewTea() const override final {
            cout << "brewing " << teaName << " by spices and milk" << endl;
        }

        ~MasalaTea(){
            cout << "Masala Tea destructor called" << endl;
        }

};

class SpicyMasalaTea: public MasalaTea{
    public:
        /*
        void brew() const override {
            cout << "brewing " << teaName << " by spices and milk" << endl;
        }
        */
};

int main(){
    Tea* tea1 = new GreenTea(2);
    Tea* tea2 = new MasalaTea(4);

    tea1->brewTea();
    tea1->serveTea();

    tea2->brewTea();
    tea2->serveTea();

    delete tea1;
    delete tea2;


    return 0;
}