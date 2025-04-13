#include<iostream>
#include<vector>
using namespace std;
class A{
public:
    int x;
    A(int x) : x(x) {}
    // int& display() const{
    //     cout<<&x<<endl;              will give error
    //     cout<<x<<endl;
    //     return x;
    // }
    void display() const{
        cout<<x<<endl;
    }
    void show();
    friend void display_2(A &a){
        cout<<a.x;
    }
};
void A::show(){
    cout<<"hellp"<<endl;
}
ostream& operator <<(ostream& out,vector<int>& v){
    for(int i = 0;i<v.size();i++){
        out<<v[i]<<" ";
    }
    out<<endl;
    return out;
}
int main(){
    A a(10);
    a.display();
    auto square = [](int n){
        vector<int> v(n,0);
        for(int i = 0;i<n;i++){
            v[i]=(i+1)*(i+1);
        }
        return v;
    };
    auto v = square(1251);
    cout<<v<<endl;
}