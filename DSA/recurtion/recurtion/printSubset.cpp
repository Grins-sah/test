#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void print1(string s,string& str,int n){
    if(str.length()==n){
        cout<<s<<"||";
        return;
    }
    print1(s+str[n],str,n+1);
    print1(s,str,n+1);
    return;

}

int main(){
    string str="abc";
    print1("",str,0);
}