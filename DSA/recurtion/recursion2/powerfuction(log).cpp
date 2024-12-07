#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b==1) return a;
    int ans =1;
    if(b%2==0) int ans = pow(a,b/2);
    else{
        int ans = pow(a,b/2);
        return ans*ans*a;
    }
    return ans*ans;
}
int main(){
    cout<<"Enter thr value of n : ";
    int n;
    cin>>n;
    int b;
    cin>>b;
    cout<<pow(n,b);
}