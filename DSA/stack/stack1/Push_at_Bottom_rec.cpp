#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>& st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
void pushIDX(stack<int>& st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushIDX(st,val);
    st.push(x);
}
// NO extra stack variable is required but recursive frame is used..
void reverse(stack<int>& st){ // in function stack pass by value;
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    reverse(st);
    pushIDX(st,x);   

}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    display(st);
    cout<<endl;
    reverse(st);
    cout<<endl;
    display(st);
    cout<<endl<<st.size();

}