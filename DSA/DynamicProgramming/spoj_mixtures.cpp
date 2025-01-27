#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
/**
* Input:
 2
 18 19
 3
 40 60 20
* 
* Output:
* 342
* 2400
**/
vector<vector<int>> dp;
int helper(int i ,int j ,vector<int>& v,vector<int>& sum){
    if(i>=j) return 0;
    if(j==i+1){
        int temp = v[i]*v[j];
        return temp;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    int ans = INT_MAX;
    for(int k = i;k<j;k++){
        ans = min(ans,helper(i,k,v,sum)+helper(k+1,j,v,sum) + ((i==k ? v[i]: sum[k]-sum[i]+v[i])%100)*((j==k ? v[j]: sum[j]-sum[k+1]+v[k+1])%100) );
    }
    return  dp[i][j]=ans;
}
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n ;
        cin>>n;
        vector<int> v(n);
        for(int i = 0;i<n;i++) cin>>v[i];
        vector<int> sum(n);
        sum=v;
        for(int i = 1;i<n;i++){
            sum[i]+=sum[i-1];
        }
        dp.clear();
        dp.resize(n,vector<int>(n,-1));
        cout<<helper(0,n-1,v,sum)<<endl;


    }
}