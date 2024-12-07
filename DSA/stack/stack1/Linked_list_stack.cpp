#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val): val(val){
        next=NULL;
    }
};
class stack{
public:
    Node* head;
    static int size;
    void push(int val){
        if(size!=0){
            Node* temp=new Node(val);
            temp->next=head;
            head=temp;
        }
        else{
            head=new Node(val);
        }
        size++;
    }
    void pop(){
        if(size!=0){
            head=head->next;
            size--;
        }
        else cout<<"Stack is empty !"<<endl;
    }
    int top(){
        if(size!=0){
            return head->val;
        }
        else{
            cout<<"Stack is empty !";
            return -1;
        }
        return -1;
    }

};
int stack::size=0;
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.size<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.size<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.size<<endl;
    cout<<st.top()<<endl;
    cout<<st.size<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.size<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.size<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;


}