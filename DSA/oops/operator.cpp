#include<iostream>
#include<vector>
#include<string>
using namespace std;

class A{
    int prv; 
public:
    int age;
    A add(A &a2){
        A a3; 
        a3.age=a2.age+this->age;
        return a3;
    }  
    A operator -(A &a2){  // operator overloading
        A a3;
        a3.age=a2.age-this-> age;
        return a3;
    }  



    // A operator +(A &a2){
    //     A a3;
    //     a3.age=a2.age+this-> age;
    //     return a3;
    // }
    friend A operator + (A &a,A &b);// friend function
    friend class prime;   //friend class
};
ostream & operator <<(ostream &out,const A &a2){
        out<<a2.age;
        return out;
    }
class B{
    int a_private;
public:
    friend void show(B &b);
    virtual void show2(){
        a_private=11;
    }
};
void show(B &b){
    cout<<b.a_private;
}
A operator + (A &a,A &b){
    A c;
    c.age =a.age+b.age;
    return c;
}




int main(){
    A a1,a2;
    a1.age=10;
    a2.age=20;
    A a3=a1+a2; 
    cout<<a3;



    
    // B b;
    // b.show2();
    // show(b);

}