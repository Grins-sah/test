#include<iostream>
using namespace std;
int main(){
    int arr[]={2,6,8,10};
    int n=sizeof(arr)/4;
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}