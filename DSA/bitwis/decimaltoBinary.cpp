#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int num=45;
    string s;
    while(num>0){
        s+=to_string(num%2);
        num=num/2;
    }
    //s+=to_string(num%2);  
    reverse(s.begin(),s.end());
    cout<<s;
}