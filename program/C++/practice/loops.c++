#include<iostream>
using namespace std;

int main()
{
    int i,a,n;
    cout<<"Enter the number of term : ";
    cin>>n;
    
    cout<<"Enter the con no : ";
    cin>>a;
    cout<<"break statement\n";
    for(i=1; i<=n; i++)
    {
        cout<<i<<endl;
        if(i==15)
        break;
    }
    cout<<"continue statement\n";
     for(i=1; i<=n; i++)
    {
        if(i==15){
        continue;
        }
        cout<<i<<endl;
    }
    return 0;
}