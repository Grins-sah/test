#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,p;
        cin>>n>>k>>p;
        if(k==0) cout<<0<<endl;
        else if(abs(k)<=p) cout<<1<<endl;
        else if(abs(k)%p==0){
            if(abs(k/p)>n) cout<<-1<<endl;
            else cout<<abs(k/p)<<endl;

        }else{
            if(abs(k/p)+1>n) cout<<-1<<endl;
            else cout<<abs(k/p) +1<<endl;
        }

    }
}