 #include<iostream>
using namespace std;
int main()
{
    string fruit = "apple";
    cout<<fruit <<"\n";
    cout<<&fruit <<"\n";
    string*ptr=&fruit;
    cout<<ptr;
    return 0;
}

