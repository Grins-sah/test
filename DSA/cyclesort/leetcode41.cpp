#include<iostream>
#include<vector>
using namespace std;
int main(){
        int arr[]={3,4,-1,1};
        int n=sizeof(arr)/4;
        vector<int> nums(arr,arr+n);
        int i=0;
        int ans=1;
        while(i<n){
            if(nums[i]<=0 || nums[i]>n) i++;
            else if(nums[i]!=i+1) swap(nums[i],nums[nums[i]-1]);
            else i++;
        }
        for(int i=0;i<n;i++){
            if(nums[i]==ans){
                ans+=1;
            }
        }
        cout<<ans;
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
}