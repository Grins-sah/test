#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void removeChar(string s,string str){
    if(str.length()==0){
        cout<<s;
        return;
    }
    char ch=str[0];
    if(ch=='a') removeChar(s,str.substr(1));
    else removeChar(s+ch,str.substr(1));
}
int main(){
    string str = "Raghav Garg";
    removeChar("",str);
}