#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1) return 1;
    if(n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    cout<<"Enter thr value of n : ";
    int n;
    cin>>n;
    if(n==1 || n==2) cout<<1;
    else{
        cout<<fibo(n);
    }

}