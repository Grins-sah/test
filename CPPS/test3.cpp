#include <bits/stdc++.h>

using namespace std;


int main() {
    // your code goes here
    int T;
    cin>>T;
    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;
        map < int, int > m;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            m[x]=j+1;
        }
        int ans = 0;
        for (auto pi : m ) {
            ans += pi.second;
        }
        cout << ans << endl;
    }

}