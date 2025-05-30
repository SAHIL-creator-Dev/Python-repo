#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream read_file;
    read_file.open("file.txt");
    char ch;
    ch = read_file.get();
    while(!read_file.eof())
    {
        cout<<ch;
        ch = read_file.get();
    }
    return 0;
}
