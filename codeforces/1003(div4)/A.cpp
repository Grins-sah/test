#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        string temp;
        cin>>temp;
        string ans = temp.substr(0,temp.length()-2)+"i";
        cout<<ans<<endl;

    }
}