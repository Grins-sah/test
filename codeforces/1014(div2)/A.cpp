#include<bits/stdc++.h>
#define ll long long
using namespace std;
int gcd(int a,int b){
    while(b%a){
        b = b%a;
        swap(b,a);

    }
    return a;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0;i<n;i++) cin>>v[i];
        int ans = INT_MIN;
        for(int i = 0;i<v.size();i++){
            for(int j = i+1;j<v.size();j++){
                ans = max(ans,abs(v[i]-v[j]));
            }
        }
        cout<<ans<<endl;
    }
    
}