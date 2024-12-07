#include<iostream>
#include<string>
using namespace std;
bool palindrom(string s, int i, int j){
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    palindrom(s,i+1,j-1);
    return true;
}
int main(){
    string s="abccba";
    int n=s.length();
    cout<<palindrom(s,0,n-1);
} 