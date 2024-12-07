#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,4};
    int* ptr= arr ;
   // int* ptr= &arr; //error wrong
    int* pyr = &arr[0];
   // int* ptr = arr[0]; //error
    for(int i=0;i<5;i++){
        cout<<ptr[i]<<" ";
        cout<<pyr[i]<<" ";
    }



}