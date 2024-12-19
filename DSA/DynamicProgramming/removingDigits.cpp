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
    vector<int> dp(n+1,-1);
    cout<<helper(n,dp);

}