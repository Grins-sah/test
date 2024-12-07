#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>v(5,2);
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    // cout<<v[4]<<" ";  
    vector<vector<int>> v(3,vector<int> (2,4));
    cout<<v.size()<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<v[i][j]<<" ";
        }
    }
    cout<<v[0].size();

}