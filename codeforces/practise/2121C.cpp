#define ll long long
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    int mx = INT_MIN;
    int count = 0;
    vector<vector<int>> v(n,vector<int>(m));
    vector<int> x(n,0),y(m,0);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>v[i][j];
            if(v[i][j]>mx){
                mx = v[i][j];
                count =1;
            }else if(v[i][j]==mx){
                count++;
            }
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(v[i][j]==mx){
                x[i]++;
                y[j]++;
            }
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(v[i][j]==mx){
                if(x[i]+y[j]-1==count){
                    cout<<mx-1<<endl;
                    return ;
                }
            }else if(x[i] +y[j]==count){
                cout<<mx-1<<endl;
                return;
            }
            
        }
    }
    cout<<mx<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}