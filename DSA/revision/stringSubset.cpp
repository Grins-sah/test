#include<iostream>
#include<string>
using namespace std;
void subset(string s,string str){
    if(str.size()==0){
        cout<<s<<endl;
        return;
    }
    for(int i =0;i<str.length();i++){
        subset(s+str[i],str.substr(0,i)+str.substr(i+1,str.length()));
        subset(s,str.substr(0,i)+str.substr(i+1,str.length()));

    }
}
int main(){
    string str = "abc";
    subset("",str);
    
}