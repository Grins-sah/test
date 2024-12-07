#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,1,2,0,0,4,0,3};
    for(int i=0;i<9-1;i++){
        for(int j=0;j<8-i;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);

            }

        }
    }
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}
