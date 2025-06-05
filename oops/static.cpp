#include<bits/stdc++.h>
using namespace std;
class demo{
public:
    int a;
    static int b;
    static void display();
    demo(int a): a(a){b++;}
    void display_a(){
        cout<<a<<endl;
    }
};
int demo::b = 0;
void demo::display(){
    cout<<"class created "<<b<<endl;
}
int main(){
    demo d1(25);
    demo::display();
    demo d2(56);
    demo::display();

}