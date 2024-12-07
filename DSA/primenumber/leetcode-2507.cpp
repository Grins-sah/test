#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int maker(int n,int sum){
        if(isprime(n)==true && sum==0) return n;
        if(n==1) maker(sum,0);
        for(int i=2;i<=n;i++){
            if(isprime(i) && n%i==0) maker(n/i,sum+i);
        }
        if(isprime(n)==true && sum==0) return n;
        return -1;
    }
    int smallestValue(int n) {
        return maker(n,0);
        
    }
int main(){
    int n=15;
    cout<<smallestValue(n);

}