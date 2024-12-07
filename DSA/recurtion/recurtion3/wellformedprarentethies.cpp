#include<iostream>
#include<string>
#include<vector>
using namespace std;
// on leet code 22;
// solved with the help of sir

void generate(vector<string>& v,int n,int sp,int ep,string s){
        if(sp==n && ep==n){
            v.push_back(s);
            return;
        }
        if(ep>sp) return;
        generate(v,n,sp+1,ep,s+'(');
        generate(v,n,sp,ep+1,s+')');
        
    }
int main(){
        vector<string> v;
        string s;
        generate(v,3,0,0,s);
        int n=v.size();
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        

}