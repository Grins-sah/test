#include<iostream>
#include<vector>
using namespace std;
    int rob(vector<int> nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        else if(n==2) return max(nums[0],nums[1]);
        vector<int> dp(n,-1);
        dp[0]=nums[0];
        dp[1]=nums[1];
        int mx = dp[0]>dp[1] ? 0 : 1;
        int mx2 = mx;
        for(int i=2;i<n;i++){
            if(i-mx>1 && dp[mx]>dp[i-2]) dp[i]= dp[mx]+nums[i];
            if(i-mx2>1 && nums[mx2]>dp[i-2]) dp[i]= max(dp[i],nums[i]+nums[mx2]);
            dp[i]=max(dp[i],nums[i]+dp[i-2]);
            if(dp[mx]<dp[i-2] ){
                mx=i-2;
            }
            if(nums[i-2]>nums[mx2] ) mx2 = i-2;

        }
        return max(dp[n-1],dp[n-2]);        
        
    }
int main(){
    cout<<rob({6,3,10,8,2,10,3,5,10,5,3});

}