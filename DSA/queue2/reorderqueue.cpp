#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    for(int i = 0;i<q.size();i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;

}
int main(){
    int n;
    cout<<"Enter the Size od Queue :- ";
    cin>>n;
    queue<int> q;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    display(q);
    stack<int> st;
    for(int i=0;i<n/2;i++){
        q.push(q.front());
        q.pop();
    }
    display(q);
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    display(q);
    for(int i=0;i<n/2;i++){
        q.push(st.top());
        st.pop();
    }
    display(q);
    for(int i=0;i<n/2;i++){
        q.push(q.front());
        q.pop();
    }
    display(q);
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    display(q);
    for(int i=0;i<n/2;i++){
        q.push(q.front());
        q.pop();
        q.push(st.top());
        st.pop(); 
    }
    display(q);
    

    




}