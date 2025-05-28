#include<iostream>
using namespace std;
class base{
public:
    void display(){
        cout<<"hello"<<endl;
    }

};
class A: virtual public base{
public:
    void show(){
        cout<<"A"<<endl;
    }
};
class C: virtual public base{
public:
    void show(){
        cout<<"C"<<endl;
    }
};
class B :public A,public C{
public:

};
int main(){
    B b;
    b.display();
}