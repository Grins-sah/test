#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the Order of square matrix : ";
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        cout<<"enter the row : ";
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}