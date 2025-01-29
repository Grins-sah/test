#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<=1) return false;
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n; 
    vector<bool>v(n+1,true);
    /**
     * simple approch
     */
    // for(int i = i;i<=n;i++){
    //     if(isPrime(i)) cout<<i<<" ";
    // }
    v[0]=false;
    v[1]=true;
    for(int i = 2;i*i<=n;i++){
        if(v[i]==true){
            for(int j = i*2;j<=n;j+=i){
                v[j]=false;
            }
        }
    }
    for(int i = 0;i<=n;i++){
        if(v[i])cout<<i<<" ";
    }

    
}