#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,4,5,8};
    int arr2[]={2,3,6,7,10,12};
    int arr3[10];
    int i=0;
    int j=0;
    int k=0;
    while(i<=3 && j<=5){
        if(arr1[i]>=arr2[j]){
            arr3[k]=arr2[j];
            k++;
            j++;
        }
        else{
            arr3[k]=arr2[i];
            i++;
            k++;
        }

    }
    if(i==3){
        while(j<=9){
            arr3[k]=arr2[j];
            k++;
            j++;        }
    }
    for(int i=0;i<10;i++){
        cout<<arr3[i]<<" ";
    }
}