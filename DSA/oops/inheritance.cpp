#include<iostream>
using namespace std;
class vehicle{  // base class // now abstract class iska object nhi bane ga
public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;
    vehicle(){
        cout<<"Vehicle Ka constuctor Call hua !!!\n";
    }
    virtual void show(){
        cout<<"vehical ka show\n";
    }
    virtual void calculateMilege() =0;     // abstract class
    virtual void refuel()=0;
};
class car : public vehicle{
public: 
    int steeringSize;
};
class Bike : public vehicle{  // derived class ,child class
public:
    int handleSize;
    void show(){
        cout<<"bike ka show\n";
    }
    void calculateMilege(){
        cout<<"Bike ka show\n";
    }
    void refuel(){
        cout<<"refuel\n";
    }

};
// security can't be downgrade
class A{
private:     // can't be accesses from outside , can't be inherited;
    int a_ka_private;
protected:  // can't be accesses from outside , but can be inherited;
    int a_ka_protected;
public:     // can be accesses and can be inherited;
    int a_ka_public;
    A(){
        cout<<"A ka custructor call"<<endl;
    }
};

class B : virtual protected  A{ // A ke sare data member b mein protected mode mein ayi gai;
public:
    int b_ka_public;
    B(){
        cout<<"B ka constructor call hua "<<endl;
    }

    void show(){
        a_ka_protected=10;  // can be accesses inside
    }
};



class C : public B , virtual public A{                     
public:
    int c_ka_public;
    C(){
        cout<<"C ka constructor call hua"<<endl;
    }
};




int main(){
    // compiler POV - vehicle type ka hai
    // compile time binding
    // but in virtual wo run time binding hogi
    // then he will check for binding
    // Run time POV - Bike ka type hai in vehicle pointer
    // abstract class make its madatory to make this function in child class
    // overide is mandetory 
    // abstract class ka object nahi bane ga


    vehicle *v;
    Bike honda;
    v=&honda;  // run time 
    v->show();
    cout<<sizeof(honda);
    
                        
    // Bike honda;
    // honda.handleSize=5;
    // honda.tyreSize=10;
    // honda.lights=4;
    // honda.engineSize=100;

}