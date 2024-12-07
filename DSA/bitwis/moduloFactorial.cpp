#include<iostream>
using namespace std;
long long fact(int n){
    int mod=1000000000 +7;
    if(n==1) return 1;
    return ((n%mod)  *(fact(n-1)%mod))%mod;
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);

}