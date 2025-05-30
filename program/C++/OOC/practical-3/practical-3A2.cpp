#include<iostream>
using namespace std;

class Main
{
    public:
        string name;
        void F1()
        {
            cout<<"My name is : "<<name;
        }
};
int main()
{
    Main Obj;
    Obj.name="Sahil thapa";
    Obj.F1();
    return 0;
}