// Grins sah
#define ll long long
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        priority_queue<int> pq;
        for(int i = 0;i<n;i++){
            cin>>v[i];
            pq.push(v[i]);
        }
        if(n==1){
            cout<<v[0]<<endl;
            continue;
        }
        while(pq.size()>1){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            pq.push(a+b-1);


        }
        cout<<pq.top()<<endl;
        

    }   
}