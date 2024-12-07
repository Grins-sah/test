#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={-7,2,4,9,-8,1,6};
    int n=sizeof(arr)/4; 
    for(int i=1;i<n;i++){
        arr[i]=arr[i-1]+arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i-1]==arr[n-1]-arr[i]){
            cout<<i+1;
        }
    }
    // cout<<-1;
}