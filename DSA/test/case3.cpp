#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n=756;
    string s=to_string(n);
    string ans="";
    sort(s.begin(),s.end());
    if(s[0]=='0' && s.length()>=1) swap(s[0],s[1]);
    for(int i=0;i<s.length();i++){
        ans=ans+s[i];
    }
    cout<<stoi(ans);

}