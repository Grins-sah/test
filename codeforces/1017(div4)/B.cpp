#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        int _l = 0;
        int _r = 0;
        if(n==m){
            cout<<l<<" "<<r<<endl;
            continue;
        }
        while(m){
            if(_l>l){
                _l--;
                m--;
            }
            if(m<=0) break;
            if(r>_r){
                _r++;
                m--;
            }
        }
        cout<<_l<<" "<<_r<<endl;
    }
}