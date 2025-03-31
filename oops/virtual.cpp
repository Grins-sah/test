#include<iostream>
using namespace std;
class A{
public:
    int x;
    A(int val):x(val){}
};
class B:virtual public A{
public:
    B():A(5){}
};
class C:virtual public A{
public:
    C():A(5){}
};
class D:public C,public B{
public:
    D():A(56){}
};
int main(){
    D d;
    cout<<d.x<<endl;
}