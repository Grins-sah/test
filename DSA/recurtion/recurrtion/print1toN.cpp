#include<iostream>
using namespace std;
void count(int cur,int n){
    if(cur>n) return;
    cout<<cur<<" ";
    count(cur+1,n);
}
int main(){
    cout<<"Enter thr value of n : ";
    int n;
    cin>>n;
    count(1,n);
}