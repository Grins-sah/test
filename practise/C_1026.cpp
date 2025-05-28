#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> d(n);
    for (auto &x : d) {
        cin >> x;
    }
    vector<int> l(n), r(n);
    for (int i = 0; i < n; ++i) {
        cin >> l[i] >> r[i];
    }
    int left = 0;
    vector<int> last;
    for (int i = 0; i < n; ++i) {
        if (d[i] == -1) {
            last.push_back(i);
        } else {
            left += d[i];
        }
        while (left < l[i]) {
            if (last.empty()) {
                cout << -1 << '\n';
                return;
            }
            d[last.back()] = 1;
            ++left;
            last.pop_back();
        }
        while (left + last.size() > r[i]) {
            if (last.empty()) {
                cout << -1 << '\n';
                return;
            }
            d[last.back()] = 0;
            last.pop_back();
        }
    }
    for (auto &x : d) {
        cout << max(0, x) << " ";
    }
    cout << "\n";
    return;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}