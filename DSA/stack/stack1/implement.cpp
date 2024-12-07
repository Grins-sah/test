#include<iostream>
#include<vector>
#include<stack>
using namespace std;
/*
    stack : new datatype

    insertion only at top
    delete only at the top

    push(val);
    pop(); Top : value delete
    top() return value at top
    size();
    provides us inlution
    provides us discipline
*/ 
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;
    st.pop(); 
    cout<<st.size()<<endl;
    cout<<st.top();
    stack<int> st1;
    while(st.size()!= 0){
        st1.push(st.top());
        st.pop();
    } 
    st=st1;

    cout<<endl<<st.top()<<" "<<st.size();
    while(st.size()!= 0){
        cout<<st.top()<<" ";
        st.pop();
    } 
}