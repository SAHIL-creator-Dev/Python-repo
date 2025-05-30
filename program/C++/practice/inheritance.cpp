#include<iostream>
using namespace std;

class cls_1{
    public:
    void f1()
    {
        cout<<"hello world";
    }
};
class cls_2 : public cls_1{
    public:
    void f2(){
        cout<<"srinagar";
    }
};
class cls_3 : public cls_1, public cls_2{
    public:
};
int main()
{
    cls_3 obj_1;
    // obj_1.f1();
    obj_1.f2();
    return 0;
}