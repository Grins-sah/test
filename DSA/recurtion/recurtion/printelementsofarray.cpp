#include<iostream>
using namespace std;
void print1(int arr[],int cur,int n){
    if(cur==n) return;
    cout<<arr[cur];
    cur++;
    print1(arr,cur,n);
}
int main(){
    int arr[]={1,2,3,5,4};
    print1(arr,0,5);
}