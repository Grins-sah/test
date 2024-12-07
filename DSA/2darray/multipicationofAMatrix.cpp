#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n,p,q;
    cout<<"Enter the number of rows of 1 : ";
    cin>>m;
    cout<<"Enter the number of columbs of 1 : ";
    cin>>n;
    cout<<"Enter the number of rows of 2 : ";
    cin>>p;
    cout<<"Enter the number of columbs of 2 : ";
    cin>>q;
    if(n==p){
            int v1[m][n];
            int v2[p][q]; 
        for(int i=0;i<n;i++){
            cout<<"enter the row of 1 : ";
            for(int j=0;j<m;j++){
                cin>>v1[i][j];
            }
        }
        for(int i=0;i<p;i++){
            cout<<"enter the row of 2 : ";
            for(int j=0;j<q;j++){
                cin>>v2[i][j];
            }
        }
        int v3[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                int result=0;
                for(int k=0;k<n;k++){
                    int temp=v1[i][k]*v2[k][j];
                    result=result+temp;
                }
                v3[i][j]=result;

            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<v3[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"matrix multipication of following is not possible!!!";
    }

}