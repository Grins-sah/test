#include<iostream>
#include<vector>
#include<string>
using namespace std;
// Linklist --> new data type

// node creation

class Node{
public: 
    int val;
    Node* next;
    Node(int val): val(val){
        this->next=NULL;
    } 
};

void insertAtEnd(Node* head,int val){
    Node* t=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=t;

}




int main(){

    // 10 20 30 40

    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    // forming of Linked List

    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;

    insertAtEnd(&a,60);
  


    // cout<<endl;
    // cout<<a.next->val;
    // cout<<endl<<a.next->next->next->val;
    Node temp1 =a;

    while(true){
        cout<<temp1.val<<" ";
        if(temp1.next==NULL) break;
        temp1 = (*(temp1.next));
    }


}