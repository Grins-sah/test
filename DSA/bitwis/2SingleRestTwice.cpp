#include<iostream>
using namespace std;
void findUnique(int n,int arr[]){
    int res = 0;
    for(int i = 0 ; i < n; i++) res = res ^ arr[i];
    int temp = res;
    int k = 0;
    while(true){
        if((temp & 1) ==1){
            break;
        }
        temp =temp >>1; 
        k++;
    }
    int retval = 0;
    int retval1=0;
    for(int i=0;i<n;i++){
        int nums=arr[i];
        if(((nums>>k)) & 1==1){
            retval ^= nums;
        }
        else{
            retval1 ^= nums;Z
        }
    }
    cout<<retval<<" "<<retval1;
     
}
int main(){
    int arr[]={1,2,1,3,2,5};
    int n = sizeof(arr)/4;
    findUnique(n,arr);


}