#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll helper(ll x){
    ll count = 0;
    while(x>0 && x%2==1){
        x/=2;
        count++;
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        if(n==1){
            cout<<x<<endl;
            continue;
        }
        ll y = helper(x);
        ll sum = 0;
        for(ll i = 0;i<y;i++){
            sum+=pow(2,i);
        }
        if(sum+1<n){
            for(int i = 0;i<=sum;i++){
                cout<<i<<" ";
            }
            for(int i = 0;i<n-sum-1;i++) cout<<x<<" ";
            cout<<endl;
            continue;
        }
        ll res = 0;
        for(int i = 0;i<n-1;i++){
            res = res| i;
            cout<<i<<" ";
        }
        if((res==x) || ((res|(n-1))==x)) cout<<n-1<<endl;
        else cout<<x<<endl;
        continue;

    }
}