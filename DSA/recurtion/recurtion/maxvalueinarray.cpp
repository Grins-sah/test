#include<iostream>
using namespace std;
int maxiA(int arr[],int n,int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],maxiA(arr,n,idx+1));
}
int main(){
    int arr[]={1,2,3,5,6,89};
    cout<< maxiA(arr,6,0);
}