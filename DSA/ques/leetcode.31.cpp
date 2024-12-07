#include<iostream>
#include<vector>
using namespace std;
int main(){
        vector<int> nums(3);
        nums[0]=1;
        nums[1]=2;
        nums[2]=3;
        int idx=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]>nums[i+1]){
                idx=i;
            }
        }
        int j=idx+1;
        int k=nums.size()-1;
        while(k>j){
            int temp=nums[j];
            nums[j]=nums[k];
            nums[k]=temp;
            j++;
            k--;
        }
        int temp=nums[idx];
        nums[idx]=nums[idx+1];
        nums[idx+1]=temp;
        for(int i=0;i<3;i++){
            cout<<nums[i]<<" ";
        }
}