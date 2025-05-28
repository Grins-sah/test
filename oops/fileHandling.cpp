#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream f;
    f.open("a.txt",ios::out | ios::trunc);
    if(!f.is_open()){
        cout<<"error opening the file"<<endl;
        return 0;
    }
    f<<"Hello this is my first filehandling in c++ using my laptop";
    f.close();
}