#include<bits/stdc++.h>
using namespace std;
class A{
private:
    int x = 10;
    int y = 20;
    friend void show(A&);
    class B{
    private:
        int z = 10;
    };
    void work(){
        cout<<x<<" "<<y<<endl;
    }
};
void show(A& a){
    cout<<"here we can see the friend function is accessing the private data member"<<endl;
    cout<<a.x<<endl;
}
int main(){
    A a;
    show(a);
}