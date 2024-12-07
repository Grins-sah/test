#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number of inputs : ";
    int n;
    cin>>n;
    cout<<"Enter the Elements in The Array1 : ";
    int arr1[n];
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        arr1[i]=y;

    }
    cout<<"Enter the number of inputs : ";
    int m;
    cin>>m;
    cout<<"Enter the Elements in The Array1 : ";
    int arr2[m];
    for(int i=0;i<m;i++){
        int y;
        cin>>y;
        arr2[i]=y;

    }
    int arr3[n+m];
    int i=0;
    int j=0;
    int k=0;
    while(i<n || j<n){
        if(arr1[i]>arr2[j]){
            arr3[k]=arr2[j];
            k++;
            j++;
        }
        if(arr1[j]>arr2[i]){
            arr3[k]=arr2[i];
            k++;
            i++;
        }
        else{
            arr3[k]==arr1[j];
            k++;
            j++;
            i++;
        }

    }
    for(int i=0;i<m+n;i++){
        cout<<arr3[i]<<" ";
    }
}