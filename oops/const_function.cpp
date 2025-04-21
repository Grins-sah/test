#include<iostream>
#include<vector>
using namespace std;
class A{
    ClassName operator++();     // Prefix increment
    ClassName operator++(int);  // Postfix increment
public:
    int x;
    A(int x) : x(x) {}
    void display() const{
        cout<<x<<endl;
    }
    A operator -(A& a){
        return A(a.x);
    }
    void show();
    friend void display_2(A a){  
        /*
        This is not the member function of the class
        But can access the private member of the class
        */
        cout<<a.x;
    }
};
void A::show(){
    cout<<"hellp"<<endl;
}

int main(){
    A a(10);
    display_2(a); // does not required Dot operator to access

}
auto square = [](int n){
    vector<int> v(n,0);
    for(int i = 0;i<n;i++){
        v[i]=(i+1)*(i+1);
    }
    return v;
};
ostream& operator <<(ostream& out,vector<int>& v){
    for(int i = 0;i<v.size();i++){
        out<<v[i]<<" ";
    }
    out<<endl;
    return out;
}
auto v = square(1251);
// cout<<v<<endl;