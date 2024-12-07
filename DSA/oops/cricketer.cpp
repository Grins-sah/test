#include<iostream>
#include<string>
using namespace std;
class cricketer{
private:
    string name;
    int age;
    int no_of_test;
    int score;
public:
    void setName(string name){
        this->name=name;
    }
    void setAge(int age){
        this->age=age;
    }
    void setNo_of_test(int no_of_test){
        this->no_of_test=no_of_test;
    }
    void setScore(int score){
        this->score=score;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int getNo_of_test(){
        return no_of_test;
    }


};
int main(){
    cout<<"Enter the Number of Cricketers : ";
    int n;
    cin>>n;
    cricketer arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the Name : ";
        string s;
        cin>>s;
        arr[i].setName(s);
        cout<<"Enter the Age : ";
        int x;
        cin>>x;
        arr[i].setAge(x);
        cout<<"Enter the No of Test Match : ";
        cin>>x;
        arr[i].setNo_of_test(x);
        cout<<"Enter the Average Score : ";
        cin>>x;
        arr[i].setScore(x);

    }
    cout<<arr[0].getAge();

}