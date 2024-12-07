#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void permutate(string s,string str){
    int n=str.length();
    if(n==0){
        cout<<s<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        char ch=str[i];
        permutate(s+ch,str.substr(0,i)+str.substr(i+1));
    }
}
int main(){
    string str="123";
    permutate("",str);
}
