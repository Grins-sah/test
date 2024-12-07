#include<iostream>
#include<vector>
using namespace std;
int main(){


        int arr[]={1,2,3,4};
        int n=4;
        vector<int> nums(arr,arr+4);
        int x=(n*(n+1))/2;
        vector<int> res(x+1);
        int i=0;
        int j=0;
        int k=1;
        int sum=0;
        int temp=0;
        while(j<n){
            sum+=nums[j];
            temp=sum;
            res[k++]=sum;
            while(i<j){
                temp-=nums[i];
                res[k++]=temp;
                i++;
            }
            i=0;
            j++;

        }
        // while(i<n){
        //     temp-=nums[i];
        //     res[k++]=temp;
        //     i++;
        // }
        for(i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
}