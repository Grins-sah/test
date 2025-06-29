//https://atcoder.jp/contests/dp/tasks/dp_o
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int dp[21][1<<21];
int helper(vector<vector<int>>& v,int n,int x,int i){
    if(i>=n) return 1;
    if(dp[i][x]!=-1) return dp[i][x];
    int sum = 0;
    for(int j = 0;j<n;j++){
        if(v[i][j] && (1<<j)&x){
            sum=(helper(v,n,x^((1<<j)),i+1)+sum)%mod;
        }
    }
    return dp[i][x] = sum;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(n));
    memset(dp,-1,sizeof(dp));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int x = (1<<n)-1;
    cout<<helper(v,n,x,0)<<endl;
    

}