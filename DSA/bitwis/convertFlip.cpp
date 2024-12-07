#include<iostream>
using namespace std;
int count(int x,int y){
    x=x^y;
    int c=0;
    while(x!=0){
        x=x& x-1;
        c++;
    }
    return c;
}
int main(){
    cout<<count(31 ,23);  

}