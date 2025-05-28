#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int z = 0;
    int o = 0;
    for(auto& ele : s){
        if(ele=='0') z++;
        else o++;
    }
    
           int diff = abs(o-z);
            int mx = max(o,z);
            int mi = min(o,z);
            if(diff%2==0 && diff/2==k){
                cout<<"yes"<<endl;
                return;
            }else if(diff%2==0 && diff/2<k){
                int x = mi;
                k = k - (diff/2);
                while(x>=2 && k>0){
                    x-=2;
                    k-=2;
                }
                if(k==0){
                    cout<<"yes"<<endl;
                    return ;
                }
            }
    cout<<"no"<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}