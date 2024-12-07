#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int helper(vector<int>& nums){
        int hi = 0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]>nums[hi]) hi = i;
        }
        return hi;
    }
    int minimumSize(vector<int> nums, int mxO) {
        int hi = helper(nums);
        int lo = 0;
        if(hi!=0) lo  = hi-1;
        while(mxO>0){
            if(hi!=lo){
                int x = nums[hi]-nums[lo];
                int y = nums[lo];
                nums[hi] = y;
                nums.push_back(x);

            }else{
                int x = nums[hi]%(mxO+1)==0 ? nums[hi]/(mxO+1) : (nums[hi]/(mxO+1))+1;
                int y = nums[hi]-x;
                nums[lo] = y;
                nums.push_back(x);

            }
            hi = helper(nums);
            if(hi!=0) lo  = hi-1;
            
            mxO--;
        }
        return nums[hi];

        
}
int main(){
    minimumSize({431,922,158,60,192,14,788,146,788,775,772,792,68,143,376,375,877,516,595,82,56,704,160,403,713,504,67,332,26},80);
}