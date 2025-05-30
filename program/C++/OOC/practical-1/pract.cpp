            #include<iostream>
using namespace std;

class Main
{
    public:
        int num;
        string name;
};
int main()
{
    Main Obj;
    Obj.num=100;
    Obj.name="anshul thapa";
    cout<<"Name : "+Obj.name+"\n";
    cout<<"Number : "<< Obj.num;
    return 0;
}

