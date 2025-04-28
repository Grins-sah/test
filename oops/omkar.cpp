#include <iostream>
using namespace std;
class Number {
private:
    int value;public:
    // Constructor
    Number(int v = 0) : value(v) {}
    // Display function
    void display() const {

        cout << "Value: " << value << endl;
    }
    // Overloading Bitwise NOT (~) operator

    Number operator ~() const {

        return Number(~value);
    }
};
int main() {
    Number n1(5);
    cout << "Original Number: ";

    n1.display();
    Number n2 = ~n1; // Using overloaded ~
    cout << "After applying Bitwise NOT (~): ";

    n2.display();
    return 0;
}

