#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    for(int i=0;i<q.size();i++){
        int x=q.front();
        q.pop();
        cout<<x<<" ";
        q.push(x);
    }
    cout<<endl;
}
void reverse(queue<int> & q){
    stack<int> st;
    while(q.size()!=0){
        int x = q.front();
        q.pop();
        st.push(x);
    } 
    while(st.size()!=0){
        q.push(st.top());
        st.pop();
    }

}
int main(){
    queue<int> q;
    // push
    // pop
    // front
    // size
    // back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    display(q);
    cout<<endl<<q.size()<<endl;
    q.pop();
    display(q);
    reverse(q);
    display(q);
    reverse(q);
    display(q);
    cout<<endl<<q.size();


}