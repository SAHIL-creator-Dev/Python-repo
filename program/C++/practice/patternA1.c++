#include<iostream>
using namespace std;

int main()
{
    int i,j,n,num;

    cin>>n;
    num = 1;
    for(i=1; i<=n; i++)
    {   
        for(j = 1; j<=i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}