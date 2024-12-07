#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> v(12);
    int temp=-1;
    for(int i = sizeof(arr)/4 -1;i>=0;i--){
        if(i==0 || i==sizeof(arr)/4-1){
            temp=-1;
            v[i]=temp;
        }
        else if(arr[i+1]>=temp){
            temp=arr[i+1];
            v[i]=temp;
        }
        else{
            v[i]=temp;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}