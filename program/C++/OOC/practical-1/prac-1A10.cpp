// continue statement
#include<iostream>
using namespace std;

int main()
{
   int i;
   for(i=0; i<=20; i++)
   {
        if(i==10)
        {
            continue;;
        }
           cout<<i<<"\n";
   }
    return 0;
}