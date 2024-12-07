#include<iostream>
#include<string>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val): val(val){
        next=NULL;
    }
};
void display(Node* temp){
    int size=0;
    while(temp!=NULL){
        size++;
        cout<<temp->val<<endl;
        temp=temp->next;
    }
    cout<<size;

}
void displayRecursive(Node* temp){
    cout<<temp->val<<endl;
    if(temp->next==NULL) return;
    displayRecursive(temp->next);
}

int main(){
    Node *a= new Node(10); // dynamic allocation
    Node *b= new Node(20); // run time 
    Node *c= new Node(30);
    Node *d= new Node(40);
    Node *e= new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    int size=0;
    displayRecursive(a);
    cout<<endl;
    //display(a,0);

}