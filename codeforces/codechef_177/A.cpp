#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

#define ll long long 
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<int> v(n);
        vector<int> y(n);
        
        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < n; i++) cin >> y[i];
        
        vector<int> x = v; 
        int idx = -1;
        
        for (int i = 0; i < n; i++) {
            if (y[0] == x[i]) {
                idx = i;
                break; 
            }
        }
        
        if (idx == -1) { 
            cout << -1 << endl;
            continue;
        }
        
        unordered_map<int, unordered_set<int>> m;
        for (int i = 0; i < n; i++) {
            m[abs(x[i] - x[idx])].insert(v[i]);
        }
        
    
        vector<int> sorted_keys;
        for (auto &p : m) {
            sorted_keys.push_back(p.first);
        }
        sort(sorted_keys.begin(), sorted_keys.end());
        
        int j = 0;
        bool flag = true;
        for (int key : sorted_keys) {
            if (j >= n || m[key].find(y[j]) == m[key].end()) {
                cout << -1 << endl;
                flag = false;
                break;
            }
            int prev = -1;
            
            while (j < n && m[key].find(y[j]) != m[key].end()) {
                if(prev!=-1 && y[j]<prev){
                    cout<<-1<<endl;
                    flag = false;
                    break;

                }
                m[key].erase(y[j]);
                prev = y[j];
                j++;  // Move to the next element in `y`
            }
            if(flag &&m[key].size()!=0){
                cout<<-1<<endl;
                flag = false;
                break;
            }
            if(!flag) break;
        }
        
        
        if (flag) {
            cout << idx + 1 << endl;
        }
    }
    return 0;
}
