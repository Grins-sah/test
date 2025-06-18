#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n ,s;
    cin>>n>>s;
    vector<int> v(n);
    for(int i = 0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    if(s>=v[0] && s<=v[n-1]){
        int ans =abs(s-v[n-1])+abs(s-v[0]);
        ans+=min(abs(s-v[n-1]),abs(s-v[0]));
        cout<<ans<<endl;
        return; 
    }else if(s>=v[n-1]){
        int ans = abs(s-v[0]);
        cout<<ans<<endl;
        return;
    }else if(s<=v[0]){
        int ans = abs(s-v[n-1]);
        cout<<ans<<endl;
        return;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}