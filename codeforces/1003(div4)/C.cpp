#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool helper(vector<int>& v,int i,int m){
    if(i==v.size()) return  true;

    bool res1 = false;
    bool res2 = false;
    if(v[i-1]<= v[i]){
        res1 = helper(v,i+1,m);
    } if(v[i-1]<=m-v[i]){
        v[i] = m-v[i];
        res2 = helper(v,i+1,m);
        v[i]=-v[i]+m;
    }
    bool res = res1 || res2;
    return res;


}
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n,m;
        cin>>n>>m;
        vector<int> v(n);
        for(int i = 0;i<n;i++) cin>>v[i];
        cin>>m;
        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }
        // memset(dp,-1,sizeof(dp));
        vector<int> v1 = v;
        vector<int> v2 = v;
        v1[0] = m-v[0];
        bool res1 = helper(v1,1,m);
        bool res2 =  helper(v2,1,m);
        if(res1||res2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
}