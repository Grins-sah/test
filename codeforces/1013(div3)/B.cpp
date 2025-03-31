#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll> v(n);
        for(int i = 0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        ll mi = v[0];
        ll count = 0;
        ll ans = 0;
        for(int j = 0;j<n;j++){
            count++;
            if(count*v[j]>=x){
                ans++;
                count = 0;
            } 

        }
        cout<<ans<<endl;

    }
    
}