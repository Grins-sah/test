#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;//you need not mention the size
    //inserting/ INPUT DO not use[]
    v.push_back(6);
    cout<<v.size()<<endl;
    v.push_back(1);
    cout<<v.size()<<endl;
    
    v.push_back(9);
    cout<<v.size()<<endl;
    v.push_back(0);
    cout<<v.size()<<endl;
    // if i waNT to print things
    
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
}