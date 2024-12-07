#include<iostream>
using namespace std;
int main(){
    // hcf(20,30);
    //min= 20;
    // hcf
    //hcf<min;
    int i=0;
    for(i=20;i>=2;i--){
        if(20%i==0 && 30%i==0){
            cout<<i;
            break;
        }
    }
    //lcm
    //lcm>max;
    cout<<30*20/i;

}