#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>& v){
    int noz=0;
    int noo=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) noz++;
        if(v[i]==1) noo++;
    }
    for(int j=0;j<noz;j++){
        v[j]=0;

    }
    for(int k=noz;k<v.size();k++){
        v[k]=1;
    }
}
void display(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    cout<<endl;
    display(v);
    cout<<endl;
    sort01(v);
    display(v);
    
}