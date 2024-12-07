#include<iostream>
using namespace std;
int product(int a,int b){
    return a*b;

}
void greet(){
    cout<<"hello";
    return;
    greet();
}
int main(){
    cout<<product(5,4);
    greet();


}