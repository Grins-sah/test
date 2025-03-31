//grinssah9
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(k>=n){
            cout<<1<<endl;
            continue;
        }
        if(1!=n%2){
            if((n%(k-1))==0) cout<<n/(k-1)<<endl;
            else cout<<(n/(k-1))+1<<endl;
        }else{
            n = n- k;
            if((n%(k-1))==0) cout<<(n/(k-1))+1<<endl;
            else cout<<(n/(k-1))+2<<endl;
        }
    }
}