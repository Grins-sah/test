#define ll long long
#define sort_all(x) sort(x.begin(), x.end())
#define reverse_all(x) reverse(x.begin(), x.end())
#include <bits/stdc++.h>
using namespace std;
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];
    ll ans = 0;
    ll mxx = *max_element(v.begin(), v.end());
    for (ll i = 0; i < n; i++) {
        for (ll j = i + 1; j < n; j++) {
            for (ll k = j + 1; k < n; k++) {
                ll sum = v[i] + v[j] + v[k];
                ll mx = max({v[i], v[j], v[k]});
                if (mx < sum - mx && sum > mxx) {
                    ans++;
                }
            }
        }
    }
    cout << ans << '\n';
}
int main() {
    fast_io();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
