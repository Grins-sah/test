#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n),p(n),s(n);
    for(int i=0;i<n;i++) cin>>a[i];
    p[0]=a[0];
    for(int i=1;i<n;i++) p[i]=min(p[i-1],a[i]);
    s[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--) s[i]=max(s[i+1],a[i]);
    for(int i=0;i<n;i++) cout<<(a[i]==p[i] || a[i]==s[i]?"1":"0");
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
