#include<iostream>
using namespace std;
void greet(int n){
    if(n==0) return;
    cout<<"Good morning";
    cout<<endl;
    greet(n-1);
}
int main(){
    int n;
    cout<<"enter the value : ";
    cin>>n;
    greet(n);

}