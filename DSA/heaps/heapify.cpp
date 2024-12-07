#include<iostream>
#include<vector>
using namespace std;
void heapify(int i,int arr[],int n){
    int left = 2*i;
    int right = left+1;
    while(true){
        left = 2*i;
        right  = left+1; 
        if(left>=n) break;
        if(right>=n){
            if(arr[i]> arr[left]){
                swap(arr[i],arr[left]);
                i = left;
            }
            else break;
        }
        if(arr[left]<arr[right]){
            if(arr[i]>arr[left]){
                swap(arr[i],arr[left]);
                i = left;
            }
            else break;
        }
        else{
            if(arr[i]>arr[right]){
                swap(arr[i],arr[right]);
                i = right;
            }
            else break;
        }
    }

}
int main(){
    int arr[]={-1,10,2,14,11,1,4};
    int n = sizeof(arr)/4;
    for(int i =n/2;i>=1;i--){
        heapify(i,arr,n);
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}