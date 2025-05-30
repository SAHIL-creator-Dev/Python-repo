#include<iostream>
using namespace std;

int main()
{
    struct
    {
        int num;
        string name;
    }
    access;
    access.num = 785;
    access.name = "Ravi";
    cout<<"name : "+access.name+"\n";
    cout<<"number"+access.num;
    return 0;
}