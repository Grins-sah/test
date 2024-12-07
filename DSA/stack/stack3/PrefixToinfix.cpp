#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    stack<string> val;
    string s="-/*+79483";
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9') val.push(to_string((int)s[i]-48));
        else{
            string val1=val.top();
            val.pop();
            string val2=val.top();
            val.pop();
            val.push(val1+s[i]+val2);
        }
    }
    cout<<val.top();
    
}