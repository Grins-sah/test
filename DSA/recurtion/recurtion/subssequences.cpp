#include<iostream>
#include<string>
#include<vector>
using namespace std;
void print(int arr[],int n,int idx,vector<vector<int>>& v,vector<int> v1){
    if(idx==n){
        v.push_back(v1);
        return;
    }
    int x=arr[idx];
    print(arr,n,idx+1,v,v1);
    v1.push_back(x);
    print(arr,n,idx+1,v,v1);

}
int main(){
    int arr[]={1,2,3,4,5};
    vector<vector<int>> v;
    int n=sizeof(arr)/4;
    vector<int>v1;
    print(arr,n,0,v,v1);
    int k=v.size();
    for(int i=0;i<k;i++){
        int m=v[i].size();
        if(m<3|| m>3){
            continue;
        }
        for(int j=0;j<m;j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
}
