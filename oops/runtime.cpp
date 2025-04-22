#include<iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function to be overridden
    virtual void sound() {
        cout << "Animal makes a sound!" << endl;
    }
};

// Derived class: Dog
class Dog : public Animal {
public:
    // Overriding the base class function
    void sound() override {
        cout << "Dog barks!" << endl;
    }
};

// Derived class: Cat
class Cat : public Animal {
public:
    // Overriding the base class function
    void sound() override {
        cout << "Cat meows!" << endl;
    }
};

int main() {
    Dog d;
    d.sound(); // compile time 
    Cat c;
    c.sound();
    return 0;
}

// int main() {
//     Animal* animal;
//     Dog d;
//     animal = &d;
//     animal->sound();   // runtime
//     Cat c;
//     animal = &c;
//     animal->sound();
//     return 0;
// }
