#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream write_file;
    write_file.open("file.txt");
    write_file<<"write on the file ";
    write_file.close();
    return 0;
}
