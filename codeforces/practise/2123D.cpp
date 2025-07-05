#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    string s;
    cin>>s;
    int one = 0;
    for(int i = 0;i<n;i++){
        if(s[i]=='1') one++;
    }
    if(one<=k){
        cout<<"alice"<<endl;
        return;
    }
    if(2*k>n){
        cout<<"alice"<<endl;
        return;
    }
    cout<<"bob"<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}   