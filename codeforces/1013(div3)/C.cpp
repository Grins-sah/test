#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2==0){
            cout<<-1<<endl;
            continue;
        }
        vector<int> v(n);
        if(n==3){
            cout<<1<<" "<<3<<" "<<2<<endl;
            continue;
        }
        v[n/2]  = (n/2)+1;
        for(int i = 0;i<n/2;i++){
            int s = 1;
            if(i%2==1) s = -1;
            v[i] = (n/2)+1-(i+1)*s;
            v[n-i-1] = (n/2)+1+(i+1)*s;
        }
        for(auto x : v) cout<<x<<" ";
        cout<<endl;

    }
    
}