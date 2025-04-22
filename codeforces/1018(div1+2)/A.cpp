#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> v(n+1,0);
        for(int i = 1;i<=n;i++){
            v[i]=i;
        } 
        while(true){
            bool res = false;
            for(int i = 1;i<=n;i++){
                for(int j = 1;j<i;j++){
                    if(s[i-2]=='>'){
                        if(v[j]>v[i]){
                            res  = true;
                            swap(v[j],v[i]);
                        }
                    }else if(v[j]<v[i]){
                        res = true;
                        swap(v[j],v[i]);
                    }
                }


            }
            if(!res) break;
        }     
        
        for(int i =1;i<=n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}