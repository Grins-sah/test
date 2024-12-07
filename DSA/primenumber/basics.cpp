#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"Enter the number of prime number : ";
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        bool flag=true;
        for(int j=sqrt(i);j>1;j--){
            if(i%j==0){
                if(i!=j){
                    flag=false;
                }
            }

        }
        if(flag==true) cout<<i<<" is prime"<<endl;
    }
}