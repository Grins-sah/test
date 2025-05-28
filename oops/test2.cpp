#include <iostream>
using namespace std;

class Base {

public:

    virtual void show() { // virtual function

        cout << "Base class show" << endl;

    }

};
int main() {

    Base* b = new Base(); // base pointer → base object

    b->show();            // RESOLVED AT RUNTIME (via vtable)

    delete b;

}
