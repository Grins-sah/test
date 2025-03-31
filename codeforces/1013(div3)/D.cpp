#include<bits/stdc++.h>
#define ll long long
using namespace std;
int gcd(int a,int b){
    while(b%a!=0){  
        b = b%a;
        swap(a,b);
    }
    return a;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<gcd(a,b)<<endl;
        
    }
    
}