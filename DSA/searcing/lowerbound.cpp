#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,25,28,21,24};
    int n=9;
    int x=3;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            cout<<arr[i-1]<<" ";
            break;
        }
    }
    //t.c=O(n)
}