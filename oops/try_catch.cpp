#include <bits/stdc++.h>
using namespace std;

int main() {
    try {
        int n;
        cin >> n;
        if (n == 0) {
            throw logic_error("cannot divide by zero");
        }
        throw "hello i am what";
        cout << "You entered: " << n << endl;
    }
    catch (const logic_error& e) {
        cerr << "Exception: " << e.what() << endl;
    }
    catch(  char* s){
        cout<<s<<endl;
    }
    return 0;
}
