#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<int> v(5);
    for(int i =0;i<5;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());// o(nlogn)
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
}