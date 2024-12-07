#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="Aa7@";
    int low=0;
    int up=0;
    int spl=0;
    int num=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        if('0'<=(int)(s[i]) && (int)(s[i])<='9'){
            num+=1;
        }
        else if('A'<=(int)(s[i]) && (int)(s[i])<='Z') up+=1;
        else if('a'<=(int)(s[i]) && (int)(s[i])<='z') low+=1;
        else spl+=1;
    }
    if(low>=1 && up>=1 && spl>=1 && num>=1 ) cout<<"\npassword secured\n";
    else cout<<"password not secured";
}