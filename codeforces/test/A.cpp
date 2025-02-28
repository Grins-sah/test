#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x,k;
        cin>>n>>x>>k;
        string s;
        cin>>s;
        bool flag = false;
        bool res = false;
        for(long long i = 0;i<n;i++){
            if(s[i]=='L') x--;
            else x++;
            if(x==0){
                if(flag){
                    res = true;
                    cout<<(k/(i+1))+1<<endl;
                    break;
                }
                
                k =k-i-1;
                flag = true;
                i=-1;
                
            }
        }
        if(!flag && !res)cout<<0<<endl;
        else if(!res) cout<<1<<endl;

    }
}