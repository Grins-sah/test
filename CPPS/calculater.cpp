#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    switch(n){
        case 1:{
            cout<<a+b;
            break;
        }
        case 2:{
            cout<<a-b;
            break;
        }
        case 3:{
            cout<<a*b;
            break;
        }
        case 4:{
            if(b==0){
                cout<<"Arithmatic error divide by Zero";
                break;
            }
            else{
                cout<<a/b;
                break;
            }
        }
        default:
            cout<<"Invalid input"<<endl;
            

    }
}