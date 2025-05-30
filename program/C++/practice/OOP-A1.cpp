#include<iostream>
using namespace std;

class Students{
    string name;
    public:
    
    int age;
    int marks;

    void SetName(string student_name)
    {
        name = student_name;
    }
    void students_details()
    {
        cout<<"Name : ";
        cout<<name<<"\n";
        cout<<"Age : ";
        cout<<age<<"\n";
        cout<<"marks : ";
        cout<<marks<<"\n";
    }
};

int main()
{
    Students val[3];
    for(int i=0; i<3; i++)
    {
        string name;
        cout<<i+1<<"th student - \n";
        cout<<"Name : ";
        cin>>name;
        val[i].SetName(name);
        cout<<"Age : ";
        cin>>val[i].age;
        cout<<"marks : ";
        cin>>val[i].marks;
    }
    cout<<"Display all students details- \n";

    for(int i=0; i<3; i++)
    {
        val[i].students_details();
    }
}