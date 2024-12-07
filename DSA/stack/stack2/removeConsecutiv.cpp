#include<iostream>
#include<stack>
using namespace std;
void display(stack<char> st){
    if(st.size()==0) return;
    char ch=st.top();
    st.pop();
    display(st);
    cout<<ch;

}
int main(){
    string s="aaabbcddaabffg";
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(st.size()!=0 && st.top()!=s[i]) st.push(s[i]);
        else if(st.size()==0)st.push(s[i]);
    }
    display(st);
}