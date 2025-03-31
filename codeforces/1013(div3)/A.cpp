#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i= 0;i<n;i++) cin>>v[i];
        unordered_map<int,int> m;
        m[1]=1;
        m[0]=3;
        m[3]=1;
        m[2]=2;
        m[5]=1;
        int i = 0;
        while(i<n && m.size()!=0){
            if(m.find(v[i])!=m.end()){
                m[v[i]]--;
                if(m[v[i]]==0) m.erase(v[i]);
            }
            i++;
        }
        if(m.size()==0)cout<<i<<endl;
        else cout<<0<<endl;
    }
    
}