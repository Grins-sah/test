#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;

        vector<int> v(n);
        vector<bool> check(n,false);
        int sum= 0;
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        if(n==1 && v[0]==x){
            cout<<"yes"<<endl;
            continue;
        }
        for(int i= 0;i<n;i++){
            sum+=v[i];
        }
        vector<int> pre;
        for(int i = 1;i<(n);i++){
            if(n%i==0) pre.push_back(n/i);
        }
        bool flag = false;
        for(int k = 0;k<pre.size();k++){
            sum= (sum)/pre[k];
            if(sum==x){
                flag =true;
                cout<<"yes"<<endl;
                break;
            }
        }
        if(flag) continue;
        else cout<<"no"<<endl;
 
 
    }
 
}