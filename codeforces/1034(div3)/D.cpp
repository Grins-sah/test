#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k==n){
        cout<<"alice"<<endl;
        return;
    }
    int one = 0;
    int zero = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='1') one++;
        else zero++;
    }
    if(one<=k){
        cout<<"alice"<<endl;
        return;
    }
    if(k==1){
        cout<<"bob"<<endl;
        return;
    }
    int first = -1;
    int last = -1;
    for(int i =0;i<n;i++){
        if(s[i]=='1'){
            first = i;
            break;
        }
    }
    for(int i =n-1;i>=0;i--){
        if(s[i]=='1'){
            last = i;
            break;
        }
    }
    int diff = last-first-1;
    cout<<"bob"<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}