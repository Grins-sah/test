#include<fstream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    fstream f1,f2;
    // f1.open("omkar.txt",ios::out | ios::trunc); // file is made and the content is written in the file
    f1.open("omkar.txt");// writing mode 
    if(f1.is_open()){ // true
        cout<<"the initial file pointer is at "<<f1.tellp()<< " byte"<<endl;
        f1<<"start";
        f1.close();
    }

}