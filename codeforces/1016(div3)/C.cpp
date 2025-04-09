#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e9 + 1;
bitset<N> v;

int main() {
    int t;
    cin >> t;
    v.set();
    v[0] = v[1] = false;
    for (int i = 2; 1LL * i * i < N; i++) {
        if (v[i]) {
            for (ll j = 1LL * i * i; j < N; j += i) {
                v[j] = false;
            }
        }
    }
    while (t--) {
        ll x, k;
        cin >> x >> k;
        if (k==1 && v[x]) cout <<"yes"<<endl;
        else cout <<"no"<<endl;
    }
}
