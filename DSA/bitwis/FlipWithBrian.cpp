#include<iostream>
using namespace std;
int flip(int n,int temp){
    return n^temp;

}
int convert_to_1(int n){
    int temp;
    while(n!=0){
        temp=n;
        n=n & n-1;
    }
    return (temp<<1) -1;
}
int main(){
    int n=48;
    cout<<flip(n,convert_to_1(n));


}