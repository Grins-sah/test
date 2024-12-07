#include<iostream>
#include<vector>
using namespace std;
void mx(vector<int>& v,int max,int cur){
    int n=v.size();
    if(cur==n){
        cout<<max;
        return;
    }
    if(v[cur]>max) max=v[cur];
    cur++;
    mx(v,max,cur);
}
int main(){
    vector<int> v(5);
    v[0]=1;
    v[1]=2;
    v[3]=5;
    v[2]=8;
    v[4]=9;
    mx(v,-1,0);
}