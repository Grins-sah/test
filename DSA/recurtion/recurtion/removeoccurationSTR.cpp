#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Raghav garg ";
    string s;
    int n= str.length();
    for(int i=0;i<n;i++){
        if(str[i]!='a') s+=str[i];
    }
    cout<<s;
}