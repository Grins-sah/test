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
void displayF(Node* temp){
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void displayB(Node* temp){
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
}
int main(){
    Node* A=new Node(10);
    Node* B=new Node(20);
    Node* C=new Node(30);
    A->next=B;
    B->next=C;
    B->prev=A;
    C->prev=B;
    displayF(A);
    cout<<endl;
    displayB(C);
}