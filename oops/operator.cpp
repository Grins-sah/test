#include<iostream>
using namespace std;

class A {
private:
    int real = 0;
    int img = 0;

public:
    A(int real, int img) : real(real), img(img) {}

    friend A operator+(int x, A& a) {
        return A(a.real + x, a.img + x);
    }

    A operator-(A& a) {
        return A(real - a.real, img - a.img);
    }

    A operator+( A& a)  {
        return A(real + a.real, img + a.img);
    }
    A operator++(int) {
        A temp = *this;
        real++;
        img++;
        return temp;
    }

    friend ostream& operator<<(ostream& out,const  A& a) {
        out << a.real << "+" << a.img << "i";
        return out;
    }
};

int main() {
    A a(10, 20), b(30, 10), c(80, 90);
    cout << a << endl;        // 10+20i
    cout << a + b << endl;    // 40+30i
    cout << a++ << endl;      // 10+20i (before increment)
    cout << a << endl;        // 11+21i (after increment)
}
