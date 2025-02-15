#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long expo2(long long a,long long b){
    if(b==0) return (1);
    if(b==1) return (a);
    long long x = expo2(a,b/2);
    if(b%2==0){
        return ((x)*(x));
    }
    return ((x)*(x)*(a)); 
}
// int expo(int a,int b,int m){
//     if(b==0) return (1%m);
//     if(b==1) return (a)%m;
//     int x = expo(a,b/2,m);
//     if(b%2==0){
//         return ((x%m)*(x%m))%m;
//     }
//     return ((x%m)*(x%m)*(a%m))%m; 
// }
int main(){
    long long n;
    cin>>n;
    long long m;
    cin>>m;
    if(n>30){
        cout<<m<<endl;
    }
    else cout<<m%expo2(2,n)<<endl;

}