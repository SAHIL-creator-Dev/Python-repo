#include<iostream>
using namespace std;

class Main
{
    public:
        string name;
        int num;
        void F1();
        void F2()
        {
            cout<<"number : "<<num;
        }
};
void Main :: F1(){
    cout<<"My name is : "<<name+"\n";
}
int main()
{
    Main Obj;
    Obj.name="Sahil thapa";
    Obj.num=895;
    Obj.F1();
    Obj.F2();
    return 0;
}