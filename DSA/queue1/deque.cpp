#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev; 
    Node(int val):val(val){
        next=NULL;
        prev=NULL;
    }
};
class Deque{ // user defined data structure 
private:
    Node* head;
    Node* tail;
public:
    static int size; 

public:
    void pushBack(int val){
        if(size==0){
            head=tail=new Node(val);
        }
        else{
            Node* temp=new Node(val);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
        
    }
    void pushFront(int val){
        if(size!=0){
            Node* temp=new Node(val);
            temp->next=head;
            head->prev=temp;
            head=temp;
            size++;
        }
        else{
            head=tail=new Node(val);
            size++;
        }
    }
    void front(){
        cout<<head->val<<endl;
    }
    void back(){
        cout<<tail->val<<endl;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void displayB(){
        Node* temp=tail;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->prev;
        }
        cout<<endl;
    }
    void popFront(){
        if(size ==0) return;
        head=head->next;
        head->prev=NULL;
        size--;
    }
    void popBack(){
        if(size==0) return;
        tail->prev->next=NULL;
        tail=tail->prev;
        size--;
    }

};
int  Deque::size=0;
int main(){
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushBack(40);
    dq.front();
    dq.back();
    dq.display();
    dq.popBack();
    dq.display();
}