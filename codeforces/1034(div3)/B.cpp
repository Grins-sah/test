#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,j,k;
    cin>>n>>j>>k;
    vector<int> v(n);
    for(int i = 0;i<n;i++) cin>>v[i];
    int temp = v[j-1];
    int cnt = 0;
    int cnt2 = 0;
    for(int i = 0;i<n;i++){
        if(v[i]>temp){
            cnt++;
        }
        if(v[i]<=temp){
            cnt2++;
        }
    }
    int diff  = n-k;
    if(diff<=cnt2-1){
        cout<<"yes"<<endl;
        return;
    }
    diff = diff -cnt2+1;
    if(diff<=cnt-1){
        cout<<"yes"<<endl;
        return;
    }
    cout<<"no"<<endl;
    
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}