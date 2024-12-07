#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int pre=0;
    for(int i=0;i<k;i++){
        pre+=arr[i];
    }
    int max=pre;
    int cur=0;
    int i=0;
    int j=k;
    //sliding window;
    while(j<n){
        cur=pre+arr[j++]-arr[i++];
        pre=cur;
        if(cur>max) max=cur;
    }
    cout<<max;

}