// Grins sah
#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// vector<int> helper(ll x){
//     int one=0;
//     int n=0;
//     ll sum = 0;
//     while(x>0){
//         one+=x%2;
//         x/2;
//         n++;
//     }
//     return {one,n};

// }
ll helper(ll x){
    int y = __builtin_clz(x);
    return 1<<(31-y);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
        ll temp = x;
        ll y= 0;
        while(temp>y){
            ll c = helper(temp);
            c<<1;
            c--;

            y = temp & c;
            cout<<y<<endl;
            temp = c;

        }


    }


    
}