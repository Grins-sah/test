// Grins sah
#define ll long long
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll l,r,d,u;
        cin>>l>>r>>d>>u;
        bool res = true;
        if(l==r && r==d && d==u){
            cout<<"yes"<<endl;
        }else cout<<"no"<<endl;
    }
}