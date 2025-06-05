#include<exception>
#include<iostream>
#include<stdexcept>
using namespace std;
class my_exception :public exception {
public:
    string s;
    my_exception(const string& s):s(s){}
    const char* what() const noexcept override{
        return s;
    }
};
int main(){
    try{
        throw logic_error("knfdlks");
        throw my_exception("something when wrong");
    }
    catch(my_exception e){
        cerr<<e.what()<<endl;
    }
    
}