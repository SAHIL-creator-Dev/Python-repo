#include<iostream>
using namespace std;

int F(int a, int b)
{
    return a+b;
}

double F(double a, double b)
{
    return a+b;
}
int main()
{
    int int_val_sum = F(4,5);
    double double_val_sum = F(4.5,5.6);

    cout<<"Sum of 4 and 5 is "<<int_val_sum<<"\n";
    cout<<"sum of 4.5 and 5.6 is "<<double_val_sum;
    return 0;
}
