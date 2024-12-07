#include<iostream>
using namespace std;
int count(int n){
    if(n==1) return 1;
    return n+count(n-1);
}
int main(){
    cout<<"Enter thr value of n : ";
    int n;
    cin>>n;
    cout<<count(n)<<" ";
}