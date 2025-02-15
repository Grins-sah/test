#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int expo(int a,int b){
    if(b==0) return 1;
    if(b==1) return a;
    int x = expo(a,b/2);
    if(b%2==0){
        return x*x;
    }
    return x*x*a; 
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    cout<<expo(a,b)<<endl;

}