#define ll long long
#define sort_all(x) sort(x.begin(),x.end())
#define reverse_all(x) reverse(x.begin(),x.end())
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++) cin>>v[i];
    vector<int> diff(n,-1);
    bool res = false;
    int ans = INT_MAX;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(j==i) continue;
            if(abs(v[i]-v[j])<=1){
                ans = min(ans,abs(i-j)-1);
            }
        }
    }

   if(n>2) for(int i = 0;i<n;i++){
        int hi = v[i]+1;
        int lo = v[i]-1;
        for(int j = 1;j<n;j++){
            if(i==j) continue;
            if((min(v[j],v[j-1])<=hi && max(v[j],v[j-1])>=hi)
            ||(min(v[j],v[j-1])<=lo && max(v[j],v[j-1])>=lo)){
                if(j-1!=i){
                    ans = min(ans,abs(i-j));
                    if(j>i) ans = min(ans,abs(i-j)-1);
                }
            }
        }
    }
    if(ans==INT_MAX){
        cout<<-1<<endl;
    }
    else cout<<ans<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}