#include<iostream>
#include<string>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number";
    cin>>x; 
    string s=to_string(x);

    cout<<s.length();
}