#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    for(int i=0;i<q.size();i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reverse(queue<int>& q){
    stack<int> st;
    int n = q.size();
    for(int i=0;i<n;i++){
        st.push(q.front());
        q.pop();
    }
    for(int i=0;i<n;i++){
        q.push(st.top());
        st.pop();
    }
    return;
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    int k = 4;
    int n = q.size();
    stack<int> st;
    reverse(q);
    for(int i=0;i<n-k;i++){
        st.push(q.front());
        q.pop();
    }
    for(int i=0;i<n-k;i++){
        q.push(st.top());
        st.pop();
    }
    display(q);



}