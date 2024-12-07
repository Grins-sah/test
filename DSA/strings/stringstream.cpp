#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s="hello my name is   grins sah";
    stringstream alpha(s);
    string temp;
    while(alpha>>temp){
        cout<<temp<<" ";
    }
}