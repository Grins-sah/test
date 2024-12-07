#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n=9;
    int x=23;
    int lo=0;
    int hi=n-1;
    while(hi>=lo){
        int mid=(lo+hi)/2;
        if(arr[mid]==x){
            cout<<arr[mid];
            break;
        }
        if(arr[mid]>x) hi=mid-1;
        else lo=mid+1;
    }
    cout<<arr[lo-1];
}