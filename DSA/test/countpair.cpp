#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,8,2,2,6,4,3};
    int k=2;
    int count =0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<n;i++){
        // for(int j=i+1;j<n;j++){
        //     if(arr[i]+arr[j]==k) count++;
        // }
        if(arr[i]==k){
            count++;
        }
    }
    cout<<count;
}