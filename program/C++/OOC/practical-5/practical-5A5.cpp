//Multiple inheritance
#include<iostream>
using namespace std;

class cls_1
{
    public:
        void F1()
        {
            cout<<"hello\n";
        }
};

class cls_2
{
    public:
        void F2()
        {
            cout<<"Hii\n";
        }
};

class cls_3:public cls_1,public cls_2
{
    public:
        void F3()
        {
            cout<<"Namaste";
        }
};

int main()
{
    cls_3 obj;
    obj.F1();
    obj.F2();
    obj.F3();
    return 0;
}