#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    string s;
    cin>>s;
    int x = stoi(s);
    int y = sqrt(x);
    if(y*y!=x){
        cout<<-1<<endl;
        return ;
    }
    if(y==0){
        cout<<0<<" "<<0<<endl;
        return;
    }
    cout<<1<<" "<<y-1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}