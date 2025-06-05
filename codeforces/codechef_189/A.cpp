#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool can(vector<int>& v,int l,int r) {
    int cnt = 0;
    for(int i=l+1;i<=r;i++) {
        if(v[i]>=v[i+1]){
            int y=-1;
            for(int x = i;x<=v[i];x++) {
                if(v[i]%x <v[i+1]){
                    y = v[i] % x;
                    break;
                }
            }
            if(y==-1) return false;
            v[i] = y;
        }
    }
    return true;
}
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    unordered_set<int> s;
    for(int i = 0;i<n;i++){
        
        cin>>v[i];
        s.insert(v[i]);
    }
    vector<int> ans(k+1,-1);
    vector<bool> flag(n,false);
    for(int i = 0;i<n;i++){
        int x = v[i];
        if(ans[x]==-1 && s.count(i)){
            ans[x]=i;
            flag[i]=true;
        }
    }
    int xx = ans[1];
    int mx = v[0];
    for(int i = 1;i<n;i++){
        if(abs(v[i]-xx)<abs(mx-xx)){
            mx = v[i];
        }
    }
    ans[0]=mx;
    for(auto ele : ans){
        cout<<ele<<" ";
    }
    cout<<endl;
    
    
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
