#include<iostream>
using namespace std;
class parent{
protected:
    int val = 10;
};
class children:public parent{
public:
    int x = val-2;
    void display(){
        cout<<val<<" "<<x;
    }
};
class children2:public children{
public:
    int y = 56;
    void display(){
        cout<<val<<endl;
    }
};
int main(){
    children2 ch;
    ch.display();
    int a;
    cin>>a;
    switch(a){
        case 1:{
            cout<<1<<endl;
            break;
        }
        case 2:{
            cout<<2<<endl;
            break;
        }
        default :{
            cout<< "default";
            break;
        }
    }

}