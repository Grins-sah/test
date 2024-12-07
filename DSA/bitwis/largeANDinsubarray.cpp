#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,1,2,3,89,3,3,89,6,4,13,13,56,1,1};
    int n=15 ;
    int j=0;
    int i=0;
    int count=1;
    while(j<n){
        if(arr[j]>arr[i]){
            i=j;
            count=1;
        }
        else if(arr[j]==arr[i]) count++;
        else count=1;
        j++;
    }
    cout<<count;
    
}