#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<vector<int>> v(n,vector<int>(n));
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                cin>>v[i][j];
            }
        }
        vector<int> v1(1610,0);
        int mx = -1;
        unordered_set<int> s;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<=i;j++){
                v1[i+j+2]=v[i][j];
                s.insert(v[i][j]);  
                mx = max(mx,v[i][j]);
            }
        }
        int x = -1;
        for(int i = 1;i<=2*n;i++){
            if(s.find(i)==s.end()) x = i;
        }
        for(int i = 1;i<=2*n;i++){
            if(v1[i]!=0){
                cout<<v1[i]<<" ";
            }else cout<<x<<" ";
        }
        cout<<endl;
    }
}