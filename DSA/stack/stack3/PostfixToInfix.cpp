#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    stack<string> val;
    string s="79+4*8/3-";
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9') val.push(to_string((int)s[i]-48));
        else{
            string val2=val.top();
            val.pop();
            string val1=val.top();
            val.pop();
            val.push(val1+s[i]+val2);
        }
    }
    cout<<val.top();
    
}