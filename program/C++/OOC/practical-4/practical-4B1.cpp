#include<iostream>
using namespace std;

class Main
{
    private:
    string name = "sahil thapa";
    public:
        Main()
        {
            cout<<"my name is "<<name<<"\n";
        }
        ~Main()
        {
            cout<<"my name is "<<name;
        }
};

int main()
{
    Main Obj;
    return 0;
}