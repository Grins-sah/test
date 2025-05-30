#include<bits/stdc++.h>
using namespace std;
class A{
public:
    int x,y,z;
    A(int a,int b,int c){
        A::x = a;
        this->y = b;
        this->z = c;
    }
};
class B:public A{
public:
    int x,y,z;
    B(int a,int b,int c): A(10,20,30){
        A::x = a;
        this->y = b;
        this->z = c;
    }
};
int main(){
    B b(10,20,30);
    cout<<b.A::x<<endl;

}