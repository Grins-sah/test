#include<iostream>
using namespace std;
int fac(int n){
    if(n==0) return 1;
    return n*fac(n-1);
}
int main(){
    cout<<"Enter the factorial number : ";
    int n;
    cin>>n;
    cout<<"The value is : ";
    cout<<fac(n);
}