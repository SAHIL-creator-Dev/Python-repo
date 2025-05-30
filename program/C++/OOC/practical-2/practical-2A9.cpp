#include<iostream>
using namespace std;

int main()
{
    string name = "Sahil";
    cout<<"name : "<<name<<"\n";
    cout<<"address : "<<&name<<"\n";
    string *ptr = &name;
    cout<<"Address : "<<*ptr;
    return 0;
}