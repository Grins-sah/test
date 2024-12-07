#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={0,1,2,3,8,9,12};
    int n=8;
    int lo=0;
    int hi=n-1;
    int mid=0;
    int ans=-1;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(arr[mid]==mid) lo=mid+1;
        else{
            ans=mid;
            hi=mid-1;
        }
    }
    cout<<ans;
}