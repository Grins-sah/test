#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int dp[105][2][105];
int helper(int n,int& k,int prev,int adj){
    if(n==0){
        if(k==adj) return 1;
        return 0;
    }
    if(dp[n-1][prev][adj]!=-1) return dp[n-1][prev][adj];
    int left = helper(n-1,k,1,adj+prev*1);
    int right = helper(n-1,k,0,adj+prev*0);
    return dp[n-1][prev][adj]= left+right;
}
int main(){
    int t;
    cin>>t;
    memset(dp,-1,sizeof(dp));
    while(t-->0){
        memset(dp,-1,sizeof(dp));

        int series,n,k;
        cin>>series>>n>>k;
        int sum = 0;
        int left = helper(n-1,k,1,0);
        int right = helper(n-1,k,0,0);
        cout<<series<<" "<<left+right<<endl;
    }
}