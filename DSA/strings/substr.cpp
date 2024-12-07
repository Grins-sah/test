#include<iostream>
#include<string>
using namespace std;
int main(){
    // string s="my name is grins sah";
    // cout<<s;
    // // s.substr(idx,len);
    // cout<<endl<<s.substr(4);
    // cout<<endl<<s.substr(2,4);
    string s="hello my name is grins";
    cout<<s.length();
    cout<<"Enter the String : ";
    getline(cin,s);
    // reverse(s.begin(),s.end());
    int n=s.length();
    cout<<s.substr(n/2);

}