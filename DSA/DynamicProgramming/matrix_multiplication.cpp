#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<vector<int>> dp;
int f(int i,int j,vector<int>& arr){
    if(i>=j) return 0;
    if(j==i+1) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans = INT_MAX;
    for(int k = i+1 ; k< j; k++){
        ans = min(ans,f(i,k,arr)+f(k,j,arr)+arr[i]*arr[j]*arr[k]);
    }
    return dp[i][j]= ans;
}
int main(){
    int arr[] = {40,20,30,10,30};
    vector<int> v(arr,arr+5);
    dp.resize(5,vector<int>(5,0));
    int n = 5;
    for(int len = 3;len<=n;len++){
        for(int i = 0;i+len-1<n;i++){
            int j = i + len -1;
            dp[i][j]=INT_MAX;
            for(int k = i+1; k <j ;k++){
                dp[i][j]= min(dp[i][j],dp[i][k]+dp[k][j]+arr[i]*arr[k]*arr[j]);
            }
        }
    }
    // cout<<f(0,4,v);
    cout<<dp[0][4];
}