#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int> m;
    m[s[0]]++;
    m[s[n-1]]++;
    for(int i = 1;i<n-1;i++){
        if(m.find(s[i])!=m.end()){
            cout<<"yes"<<endl;
            return;
        }
        m[s[i]]++;

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