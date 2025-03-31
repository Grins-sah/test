// Grins Sah
#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
ll helper(ll r, ll i) {
    return sqrt(r * r - i * i);
}
 
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vector<ll> v(n);
        vector<ll> r(n);
        ll ans = 0;
        
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (ll j = 0; j < n; j++) {
            cin >> r[j];
        }
        
        map<ll, ll> a; // Changed unordered_map to map to keep sorted order
        for(int i = 0;i<n;i++){
            for(int j = v[i]-r[i];j<=v[i]+r[i];j++){
                a[j]= max(a[j],helper(r[i],j-v[i]));
            }
        }
        for(auto ele: a){
            ans+=ele.second*2+1;
        }
        cout << ans << endl;
    }
}