#include<iostream>
using namespace std;
int covert(int n){
    n=n | n>>1;
    n=n | n>>2;
    n=n | n>>4;
    n=n | n>>8;
    n=n | n>>16;
    return n;

}
int main(){
    int n=48;
    int x=covert(n);
    x=x^n;
    cout<<x;


}