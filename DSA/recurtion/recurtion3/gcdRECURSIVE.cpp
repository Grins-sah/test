#include<iostream>
using namespace std;
void gcd(int div,int divdent){
    int rem=divdent%div;
    if(rem==0){
        cout<<div;
        return;
    }
    gcd(rem,div);
    
}
int main(){
    gcd(10000,10000 );
}