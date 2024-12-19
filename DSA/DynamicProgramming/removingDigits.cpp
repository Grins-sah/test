#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int helper(int n,vector<int>& dp){
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    if(n<0) return INT_MAX;
    int temp = n;
    int ans=INT_MAX;
    while(temp>0){
        int digit = temp%10;
        int x = INT_MAX;
        if(digit!=0)  x=helper(n-digit,dp);
        if(ans>x) ans = x;
        temp/=10;
    }
    return dp[n]=++ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,INT_MAX);
    dp[n]=0;
    for(int i=0;i<=n;i++){
        int temp = i;
        int ans=INT_MAX;
        while(temp>0 && i>9){
            int digit = temp%10;
            if(digit!=0) ans = min(ans,dp[i-digit]);
            temp/=10;
        }
        if(ans==INT_MAX) dp[i]=1;
        else dp[i]=++ans;
    }
    /**
     *     top to bottom method recursion solution
     *     vector<int> dp1(n+1,-1);
     *     cout<<helper(n,dp1);
     */
    
    cout<<dp[n];

}