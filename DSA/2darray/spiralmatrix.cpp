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
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    while(maxr>=minr){
        for(int i=minc;i<=maxc;i++){
            cout<<v1[minr][i]<<" ";
        }
        minr++;
        for(int i=minr;i<=maxr;i++){
            cout<<v1[i][maxc]<<" ";
        }
        maxc--;
        for(int i=maxc;i>=minc;i--){
            cout<<v1[maxr][i]<<" ";
        }
        maxr--;
        for(int i=maxr;i>=minr;i--){
            cout<<v1[i][minc]<<" ";
        }
        minc++;
    }
}