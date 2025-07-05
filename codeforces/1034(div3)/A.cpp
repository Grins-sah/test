#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    int zero = (n-1/4)+1; 
    int one = n-1/4+((n-1)%4>=1?1:0); 
    int two = n-1/4+((n-1)%4>=2?1:0); 
    int three = n-1/4+((n-1)%4>=3?1:0); 
    if(zero!=three){
        cout<<"alice"<<endl;
        return;
    }
    if(one!=two){
        cout<<"alice"<<endl;
        return;
    }
    cout<<"bob"<<endl;


}
int main(){
    int t; 
    cin>>t;
    while(t--){
        solve();
    }
}