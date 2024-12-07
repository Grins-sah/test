#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={5,1,2,4,3,6 };
    int i=0;
    int n=sizeof(arr)/4;
    while(i<n){
        if(arr[i]!=i+1){
            swap(arr[i],arr[arr[i]-1]);
        }
        else i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
}