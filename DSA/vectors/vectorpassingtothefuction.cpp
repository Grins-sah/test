#include<iostream>
#include<vector>
using namespace std;
void change(vector <int>& v){
    v[1]=56;
    for(int i=0;i<v.size();i++ ){
        cout<<v[i]<<" ";

    } 
    return;
}
int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    for(int i=0;i<v.size();i++ ){
        cout<<v[i]<<" ";

    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++ ){
        cout<<v[i]<<" ";

    }
}