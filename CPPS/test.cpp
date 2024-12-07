#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,4,5,5,5,5};
    int n = 9;
    int count=1;
    for(int i = 0;i<n-1;i++){
        count = 1;
        while(i<n-1 && arr[i]==arr[i+1]  ){
            count++;
            i++;
        }
        if(i<n)cout<<arr[i]<<"-"<<count<<endl;
    }
    if(arr[n-1]!=arr[n-2]){
        cout<<arr[n-1]<<"-"<<1<<endl;
    }
}