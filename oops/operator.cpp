#include<iostream>
using namespace std;

class A {
private:
    int real = 0;
    int img = 0;

public:
    A(int real, int img) : real(real), img(img) {}

    A operator+(int x) {
        return A(this->real + x,this->img + x);
    }

    A operator -(const A& a) {
        return A(real - a.real, img - a.img);
    }

    A operator+(const A& a)  {
        return A(real + a.real, img + a.img);
    }
    A operator++(int) {
        A temp = *this;
        real++;
        img++;
        return temp;
    }
    friend istream& operator >> (istream& in, A& a){
        in>>a.real>>a.img;
        return in;
    }
    friend ostream& operator<<(ostream& out,const A& a){
        out<<a.real<<" +"<<a.img<<"i";
        return out;
    }

};

int main() {
    A a(10, 20), b(30, 10), c(80, 90);
    cin>>a>>b>>c;

    cout << a +5<< endl;        // 10+20i
    cout << a + b +a+a << endl;    // 40+30i
    cout << a++ << endl;      // 10+20i (before increment)
    cout << a << endl;        // 11+21i (after increment)
}
