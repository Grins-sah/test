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
        
        vector<ll> x;
        for (ll i = 0; i < n; i++) {
            if (a.find(v[i]) == a.end()) {
                a[v[i]] = r[i];
            } else {
                a[v[i]] = max(a[v[i]], r[i]);
            }
        }
        
        ll prev = LLONG_MIN;
        ll rPrev = LLONG_MIN;
        ll temp = 0;
        for (auto ele : a) {
            ll k =ele.first - ele.second;
            if (prev != LLONG_MIN && ele.first - prev <= ele.second + rPrev) {
                ll dir = prev+rPrev;
                ll lDir = ele.first-ele.second ;
            
                for (ll j = lDir; j <= dir; j++) {
                    ll d = helper(rPrev, j - prev)*2+1;
                    ll g = helper(ele.second, j - ele.first)*2+1;
                    
                    ans -= d;
                    ans += max(d, g);
                }
                k = dir + 1;
            }
            prev = ele.first;
            rPrev = ele.second;
        
            temp = 0;
            for (k; k <= ele.first + ele.second; k++) {  // Fixed syntax
                ll x = helper(ele.second, k - ele.first) * 2 + 1;
                ans += x;
                temp+=x;
            }
        }
        cout << ans << endl;
    }
}
