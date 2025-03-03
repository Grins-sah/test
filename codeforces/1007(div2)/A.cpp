#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isSqr(unsigned long long int n){
    unsigned long long int x = sqrt(n);
    if(x*x==n) return true;
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n;
        cin>>n;
        unsigned long long int sum = ((n)*(n+1))/2;
        if(isSqr(sum)){
            cout<<-1<<endl;
            continue;
        }
        vector<int> v(n+1);
        for(int i = 1;i<=n;i++){
            v[i]=i;
        }
        unsigned long long sum2 = 0;
        for(int i = 1;i<=n;i++){
            if(isSqr(sum2+v[i])){
                swap(v[i],v[i+1]);
                sum2+=v[i];
            }else{
                sum2+=v[i];
            }
        }
        for(int i = 1;i<=n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
        
    }
}