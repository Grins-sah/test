#include<bits/stdc++.h>
using namespace std;

int main(){
    fstream file_out;
    file_out.open("test.txt",ios::out | ios::trunc |ios::in );
    if(file_out.fail()){
        cerr<<"file was failed to open"<<endl;
    }
    stream
    file_out<<"this is the first line input in the file"<<endl<<"second line input in the file"<<endl;
    file_out.seekg(1,ios::beg);
    string s;
    while(getline(file_out,s)){
        cout<<s<<endl;
    }
    file_out.close();
}