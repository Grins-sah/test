#include<iostream>
#include<vector>
using namespace std;
void subset(int arr[],int idx,vector<vector<int>>& v1,vector<int> v){
    if(idx==3){
        v1.push_back(v);
        return;
    }
    int temp=arr[idx];
    subset(arr,idx+1,v1,v);         //correct pstn
    if(v.size()==0){
        //subset(arr,idx+1,v1,v);
        v.push_back(temp);                  //wrong pstn
        subset(arr,idx+1,v1,v);
    }
    else if(v[v.size()-1]==arr[idx-1]){
        //subset(arr,idx+1,v1,v);
        v.push_back(temp);
        subset(arr,idx+1,v1,v);

    }
}
int main(){
    int arr[]={1,2,3};
    vector<vector<int>> v1;
    vector<int> v;
    subset(arr,0,v1,v);
    int n=v1.size();
    for(int i=0;i<n;i++){
        int m=v1[i].size();
        for(int j=0;j<m;j++){
            cout<<v1[i][j];
        }
        cout<<endl;
    }

}