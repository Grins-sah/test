#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include <vector>
using namespace std;
int main(){
    string s="AaBbCCCRGRGGG";
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A'&&s[i]<='Z') s[i]=(char)((int)s[i]+32) ;
        else s[i]=(char)((int)s[i]-32); 
    }
    cout<<s;
}