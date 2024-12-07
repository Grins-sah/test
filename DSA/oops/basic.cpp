#include<iostream>
using namespace std;
class player{
    private:
    int score;// data member;
    char name;
    int health;

    public:
    //setter
    void setScore(int s){
        score=s;
    }
    void setHealth(int h){
        health=h;
    }
    //getter
    int getScore(){
        return score;
    }
    int getHealth(){ 
        return health;
    }
};
class calculater{
public:
    int a,b;
    void add(){
        cout<<"the sum is : "<<a+b;
    }
    void sub(){
        cout<<"the substration is : "<<a-b;
    }
};
int main(){
    calculater calsi;
    calsi.a=10;
    calsi.b=564646;
    calsi.add();
    cout<<endl;
    calsi.sub();
    cout<<endl;
    player grins;
    grins.setHealth(100000);
    grins.setScore(6546848);
    cout<<grins.getHealth();
    cout<<endl; 
    cout<<grins.getScore();




}