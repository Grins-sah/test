#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string s;
    cin>>s;
    string temp = "STRUCTURAL";
    unordered_map<char,int> m;
    for(char ch :temp){
        m[ch]++;
    }
    string ans = "";
    for(int i = 0;i<s.length();i++){
        if(m.find(s[i]) !=m.end()){
            m[s[i]]--;
            if(m[s[i]]==0){
                m.erase(s[i]);
            }
        }else {
            ans+=s[i];
        }
    }
    cout<<ans;
}