#define ll long long
#define sort_all(x) sort(x.begin(),x.end())
#define reverse_all(x) reverse(x.begin(),x.end())
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,x,y;
    cin>>a>>x>>y;
    int mi = min(x,y);
    int mx = max(x,y);
    if(a>=mi && a<=mx){
        cout<<"no"<<endl;
        return;
    }
    cout<<"yes"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}