#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        bool res = false;
        for(int i = 0;i<n;i++){
            bool res1= true;
            if(a[i]=='1'){
                res1 = false;
                for(int j = i+1;j<n;j+=2){
                    if(b[j]=='0'){
                        swap(b[j],a[i]);
                        res1 = true;
                        break;
                    }
                }
                if(res1) continue;
                for(int j = i-1;j>=0;j-=2){
                    if(b[j]=='0'){
                        swap(b[j],a[i]);
                        res1 = true;
                        break;
                    }
                }
            }
            if(!res1){
                cout<<"no"<<endl;
                res = true;
                break;
            }
        }
        if(!res) cout<<"yes"<<endl;

        


    }
    
}