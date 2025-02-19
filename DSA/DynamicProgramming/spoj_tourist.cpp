#include<iostream>
#include<vector>
#include<cstring>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[105][105][105];
char mat[105][105];
ll n,m;
ll helper(ll i,ll j,ll x,ll y,vector<vector<char>>& v,ll& m ,ll& n){
    if(i>= m || j>= n || x >=m || y>=n){
        return 0;
    }
    if(v[x][y]=='#' ||  v[i][j]=='#') return 0;
    if(i==m-1 && j==n-1  ) return (v[i][j]=='*');
    if(dp[i][j][x]!=-1) return dp[i][j][x];

    ll count = 0;
    ll ans = INT_MIN;

        
        ans = max(ans,helper(i+1,j,x+1,y,v,m,n));
        ans = max(ans,helper(i+1,j,x,y+1,v,m,n));
        ans = max(ans,helper(i,j+1,x+1,y,v,m,n));
        ans = max(ans,helper(i,j+1,x,y+1,v,m,n));
        if(v[x][y]=='*') count++;
        if(v[i][j]=='*') count++;
    ans+=count;
    if(x==i && y==j && v[i][j] =='*') ans--;
    return dp[i][j][x]= ans;

}

ll f(ll i, ll j, ll x, ll y) {
    if (i > n or j > m or x > n or y > m or mat[i][j] == '#' or mat[x][y] == '#') return 0;
    
    if (i == n and j == m) {
        return mat[i][j] == '*';
    }
    
    if (dp[i][j][x] != -1) return dp[i][j][x];
    
    ll result = INT_MIN;

    result = max(result, f(i+1, j, x+1, y));
    result = max(result, f(i+1, j, x, y+1));
    result = max(result, f(i, j+1, x+1, y));
    result = max(result, f(i, j+1, x, y+1));

    result += (mat[i][j] == '*');
    result += (mat[x][y] == '*');

    // Remove repetition
    if (i == x and j == y and mat[i][j] == '*') result--;

    return dp[i][j][x] = result;
}

int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll m1,n2;  
        cin>>n>>m;
        vector<vector<char>> v(m,vector<char>(n));
        for(ll i = 1;i<=m;i++){
            for(ll j = 1;j<=n;j++){
                cin>>mat[i][j];
                
            }
        }
        memset(dp,-1,sizeof(dp));
        // cout<<helper(0,0,0,0,v,n,m)<<endl;
        cout<<f(1,1,1,1);

    }
} 
