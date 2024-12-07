#include<iostream>
using namespace std;
void display(int* a){
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
    display(arr);
    // array pass by reference hota hai 
    change(arr);
    int* ptr=arr;
    *ptr=45;// ptr[0]=45
    display(arr);
    cout<<sizeof(arr)/4<<"nbvhv ";
}