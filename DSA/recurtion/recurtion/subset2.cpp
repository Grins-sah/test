#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
void print(string s,string& str,int idx,vector<string>& v,bool flag){
    if(idx==str.length()){
        v.push_back(s);
        return;
    }
    // char ch = str[idx];
    // if(idx==str.length()-2){
    //     if(flag==true) print(s,str,idx+1,v,true);
    //     print(s,str,idx+1,v,true);
    //     return;
    // }
    // // if(idx<str.length()-1 && str[idx]==str[idx+1]){
    // //     flag=false;    
    // // }
    // if(flag==true){
    //     print(s+ch,str,idx+1,v,true);
    //     print(s,str,idx+1,v,true);
    // }
    // else{
    //     //print(s+ch,str,idx+1,v,false);
    //     print(s,str,idx+1,v,true);
    //}
    else if(str[idx]==str[idx+1]){
        char ch = str[idx];
        if(flag==true) print(s+ch,str,idx+1,v,true);
        print(s,str,idx+1,v,false);
    }
    else{
        char ch = str[idx];
        if(flag==true) print(s+ch,str,idx+1,v,true);
        print(s,str,idx+1,v,true);
    }

}
int main(){
    string str="aab ";
    vector<string> v;
    print("",str,0,v,true);
    for(string ele : v){
        cout<<ele<<endl;
    }

}