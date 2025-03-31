#include<bits/stdc++.h>
#define ll long long
using namespace std;
int mex(vector<int>& v,int l ,int r){
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i= l;i<=r;i++){
        pq.push(v[i]);
    }
    int mx = 0;
    while(pq.size()!=0 && pq.top()==mx){
        mx++;
        pq.pop();
    }
    return mx;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0;i<n;i++) cin>>v[i];
        
        while(v.size()>2){
            vector<int> temp;
            for(int i = 0;i<v.size();i++){
                if(v[i]==0) temp.push_back(0);
                else if(i<v.size()-1){
                    int x = mex(v,i,i+1);
                    if(x==0 || x==1){
                        temp.push_back(x);
                        i++;
                    }else{
                        temp.push_back(v[i]);
                    }
                }else temp.push_back(v[i]);
            }
            cout<<v.size()<<"!"<<endl;
            v = temp;
        }
        cout<<v[0]<<endl;


    }
}