#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i = 0;i<n;i++) cin>>v[i];
    set<ll> pq;
    for(ll i = 0;i<n;i++){
        pq.insert(v[i]);
    }
    ll ans = 1;
    ll prev = -1;
    for(auto ele : pq){
        if(prev==-1){
            prev = ele;
        }
        else{
            if(ele-prev>=2){
                ans++;
                prev=ele;
            }
        }
    }
    cout<<ans<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}