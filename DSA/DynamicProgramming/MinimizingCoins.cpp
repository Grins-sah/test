#include<iostream>
#include<vector>
using namespace std;
    int helper(vector<int>&v,int sum,int n){
        if(sum==0) return 0;
        else if(sum<0) return INT_MAX;
        int ans = INT_MAX;
        for(int i=0;i<n;i++){
            int x = INT_MAX;
            if(v[i]!=0) x = helper(v,sum-v[i],n);
            if(x!=-1 && ans>x) ans =x;
        }
        if(ans==INT_MAX )  return  -1;
        else return  ++ans;
    }
int main(){
    int n,sum;
    cin>>n;
    cin>>sum;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
        vector<int> dp;

    dp.resize(sum+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<=sum;i++){
        for(int j = 0;j<n;j++){
            if(i-v[j]>=0)dp[i]=min(dp[i],dp[i-v[j]]);
        }
        if(dp[i]==INT_MAX || dp[i]==-1) dp[i]=-1;
        else dp[i]++;
    }
    cout<<dp[sum];
    cout<<helper(v,sum,n);

}