#include<iostream>
using namespace std;
class A{ 
private:     // can't be accesses from outside , can't be inherited;
    int a_ka_private;
protected:  // can't be accesses from outside , but can be inherited;
public:     // can be accesses and can be inherited;
    int a_ka_public;
    static int a_ka_protected;

};

class B : virtual public  A{ // A ke sare data member b mein protected mode mein ayi gai;
public:
    int b_ka_public;
    void show(){
        cout<<a_ka_protected;  // can be accesses inside
    }
};
int A::a_ka_protected=10;



class C : virtual public A{ // multi level Inheritance
public:
    int c_ka_public;
};
class D : public B,public C{
public:
    int d_ka_public;
    void show(){ 
        cout<<a_ka_public;  
    }
};

int main(){
    A *a=new A;
    B b;
    a=&b;
    C c;
    D d;
    d.show();       // function overiding
    cout<<"you";    // >>>>
    d.B::show();    // >>>.

}