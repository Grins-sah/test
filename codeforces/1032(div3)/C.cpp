#include<bits/stdc++.h>
#define ll long long
using namespace std;
/**
 * i am an idiot
 * i was unable to solve this question
 */
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    set<pair<int,int>> s;
    int mx = INT_MIN;
    for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>v[i][j];
            if(v[i][j]>mx){
                s.clear();
                mx = v[i][j];
                s.insert({i,j});
            }else if(v[i][j]==mx){
                s.insert({i,j});
            }
        }
    }
    int x = -1;
    int y = -1;
    bool resx = true;
    bool resy = true;
    for( auto ele : s){
        if(x==-1 || y ==-1){
            x = ele.first;
            y = ele.second;
        }else{
            if(ele.first!=x){
                resx = false;
            }
            if(ele.second!=y){
                resy = false;
            }
        }
    }
    if(resx || resy){
        cout<<mx-1<<endl;
    }else {
        cout<<mx<<endl;
    }
    return; 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}