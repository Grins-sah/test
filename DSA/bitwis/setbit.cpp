#include<iostream>
#include<string>
//#include <bits/stdc++.h>
int max_power_of2(int n){
    n=n|n>>2;
    n=n|n>>4;
    n=n|n>>8;
    n=n|n>>16;
    return (n+1)>>1;
}
using namespace std;
int main(){
    int n=64 ;
    int count=0;
    int temp;
    while(n!=0){
        temp=n;
        n=n & n-1;
        count++;
    }
    cout<<max_power_of2(789);
}