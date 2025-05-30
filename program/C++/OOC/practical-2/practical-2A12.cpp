#include<iostream>
using namespace std;

int main()
{
    struct
    {
        string Car_name;
        string Car_model;
        int year;
    }
    access;
    access.Car_name = "OD";
    access.Car_model = "MKD45XYZ";
    access.year = 2012;
    cout<<"car name : "+access.Car_name+"\n";
    cout<<"model : "+access.Car_model+"\n";
    cout<<"year : "+access.year;
    return 0;
}