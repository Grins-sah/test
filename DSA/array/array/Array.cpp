#include<iostream>
using namespace std;
void display(int a[]){
        for(int i=0;i<=4;i++){
            cout<<a[i]<<" ";
        }
        return;

}
void change(int b[]){
    b[0]=100;
}
int main(){
    int arr[]={1,2,3,5,4};
    // accessing the element of array in another function 
    // updation , pass by  value 
    int max=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<max;
}