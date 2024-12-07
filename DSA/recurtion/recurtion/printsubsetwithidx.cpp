#include<iostream>
#include<vector>
using namespace std;
void print(string s,string& str,int idx,vector<string>& v){
    if(idx==str.length()){
        v.push_back(s);
        return;
    }
    char ch=str[idx];
    print(s+ch,str,idx+1,v);
    print(s,str,idx+1,v);

}
int main(){
    string str="abc";
    vector<string> v;
    print("",str,0,v);
    for(string ele : v){
        cout<<ele<<endl;
    }

}