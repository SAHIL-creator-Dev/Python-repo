// Inheritance
#include<iostream>
using namespace std;

class vehical
{
    public:
        string brand = "Ford";
        void model()
        {
            cout<<"Model : FM57KMF\n";
        }
};

class car:public vehical
{
    public:
    int year = 2023;
};

int main()
{
    car obj;
    cout<<"Car brand : "<<obj.brand<<"\n";
    obj.model();
    cout<<"Year : "<<obj.year;
}
