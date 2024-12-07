#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,6,3,18,19};
    int n=sizeof(arr)/4;
    int count=0;
    int max =INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];

    }
    cout<<max<<" "<<min;
}