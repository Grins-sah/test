#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;

    Node(int val) : val(val) {
        next=NULL;
    }

};
void display(Node* head){
        Node* temp=head;
        int count=0;
        while(temp!=NULL){
            if(count==8) return;
            cout<<temp->val<<" ";
            temp=temp->next;
            count++;
        }
        cout<<endl;
}
void insert(Node* head,int val){
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=new Node(val);
    temp->next->next=head;
}
int main(){
    Node* A=new Node(10);
    Node* B=new Node(20);
    Node* C=new Node(30);
    A->next=B;
    B->next=C;
    C->next=A;
    insert(A,40);
    A->next;

    display(A);



}