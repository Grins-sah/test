#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int expo(int a,int b,int m){
    if(b==0) return (1%m);
    if(b==1) return (a)%m;
    int x = expo(a,b/2,m);
    if(b%2==0){
        return ((x%m)*(x%m))%m;
    }
    return ((x%m)*(x%m)*(a%m))%m; 
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int m;
    cin>>m;
    cout<<expo(a,b,m)<<endl;

}