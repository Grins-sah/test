#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class student{
public:
    int roll_no;
    string name;
    void display();
};
void student::display(){
    cout<<roll_no<<" have name :"<<name<<endl;
}
int main(){

    student s[5];
    for(int i = 0;i<5;i++){
        cin>>s[i].roll_no>>s[i].name;
    }
    for(int i= 0;i<5;i++){
        s[i].display();
    }

}