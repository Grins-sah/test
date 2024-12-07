#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    string s="grins";
    cout<<s.length()<<endl;
    s.push_back('s');
    cout<<s;
    s.pop_back();
    cout<<endl<<s;
} 