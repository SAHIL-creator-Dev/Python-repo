#include<iostream>
using namespace std;

class FunctionOverloading{
    public:
    int F(int a, int b)
    {
        return a+b;
    }
    float F(int a, int b, float c)
    {
        return a+b+c;
    }
};

int main()
{
    FunctionOverloading Obj;
    int F1 = Obj.F(45,56);
    float F2 = Obj.F(56,78,89.56);
    cout<<F1<<"\n";
    cout<<F2<<"\n";
    return 0;
}