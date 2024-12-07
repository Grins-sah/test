#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows of 1 : ";
    cin>>m;
    cout<<"Enter the number of columbs of 1 : ";
    cin>>n;
    int v1[m][n];
    for(int i=0;i<m;i++){
        cout<<"enter the row of 1 : ";
        for(int j=0;j<n;j++){
            cin>>v1[i][j];
        }
    }
    cout<<endl;
    // opposite wave print and columb wise printing;
    for(int j=m-1;j>=0;j--){
        for(int i=0;i<n;i++){
            if(j%2==0){
                cout<<v1[i][j]<<" ";
            }
            else{
                cout<<v1[n-1-i][j]<<" ";
            }
        }
    }
}