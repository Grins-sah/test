#include<iostream>
using namespace std;
int ways(int n,int m){
    if(n==1 && m==1) return 2;
    else if(n==1 ) return m+1 ;
    else if(m==1) return n+1;
    return ways(n-1,m) +ways(n,m-1);
}
int main(){
    cout<<"Enter thr value of n : ";
    int n;
    cin>>n;
    int m;
    cout<<"Enter thr value of m : ";
    cin>>m;
    cout<<ways(n,m);
}