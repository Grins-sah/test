#include<iostream>
using namespace std;
int main(){
    // subarray id in cocintunued order
    int arr[]={1,2,3,4};
    for(int i=0;i<4;i++){
        //cout<<arr[i]<<endl;
        for(int k=i;k<4;k++){
            cout<<endl;
            //cout<<arr[k]<<endl;
            for(int j=i;j<=k;j++){
                cout<<arr[j];
            }
        }
    }
}