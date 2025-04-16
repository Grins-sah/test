#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);  
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll ans = 0;
        for(int i = 0;i<n;i++){
            ll sum = 0;
            for(int j = 0;j<n;j++){
                sum+=v[i]^v[j];      
            }
            if(sum<ans) break;
            else ans = sum;
        }
        cout<<ans<<endl;
        
    }
}