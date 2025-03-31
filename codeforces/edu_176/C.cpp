//grinssah9
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m ;
        cin>>n>>m;
        vector<int> v(m);
        for(int i =0;i<m;i++) cin>>v[i];
        priority_queue<int> pq;
        sort(v.begin(),v.end());
        ll count = 0;
        for(int i = 0;i<n;i++){
            ll x = n-v[i];
            int l = i+1;
            int r = m-1;
            int ans = -1;
            while(r>l){
                int mid = (l+r)/2;
                if(v[mid]>=x){
                    ans = mid;
                    r = r-1;  
                }
                else l = l+1;
            }
            if(ans==-1) continue;
            count+=n-ans;

        }
        cout<<count*2<<endl;

    }
}