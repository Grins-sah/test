#include<iostream>
#include<vector>
using namespace std;
void subset(vector<int>& v,int idx,vector<int>a){
    int n=v.size();
    if(idx==n){
        int m=a.size();
        for(int i=0;i<m;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        return;
    }
    int temp=v[idx];// 1;
    subset(v,idx+1,a);
    a.push_back(temp);// a{1};
    subset(v,idx+1,a);
    return;



}
int main(){
    int arr[]={1,2,3};
    vector<int> v(arr,arr+3);
    vector<int> a;
    subset(v,0,a);


}