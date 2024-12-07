#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
int solve(int val1,int val2,char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int prio(char ch){
    if(ch=='+' || ch == '-') return 1;
    else return 2;
}
int main(){
    stack<int> val;
    string s="79+4*8/3-";
    int n = s.length();
    for(int i=0;i<n;i++){
        if(s[i]>='1' && s[i]<='9') val.push((int)(s[i]-48));
        else{
            int val2= val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            int ans=solve(val1,val2,s[i]);
            val.push(ans);
        }
    }
    cout<<val.top();
}