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
class Double_LinkedList{ // user defined data structure 
private:
    Node* head;
    Node* tail;
public:
    static int size; 

public:
    void insertAtEnd(int val){
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
    void insertAtHead(int val){
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
    void insertAt(int idx,int val){
        if(idx>size){
            cout<<"False Input!!!\n";
            return;
        }
        if(idx ==0 ){
            insertAtHead(val);
            return;
        }
        int count=0;   //-20 -10 10 20 30
        Node* temp=head;     // # improved
        while(count!=idx-1){
            temp=temp->next;
            count++;
        }
        Node* t=new Node(val);
        t->next=temp->next;
        t->prev=temp;
        temp->next->prev=t;
        temp->next=t;
        size++;

    }
    void showHead(){
        cout<<head->val;
    }
    void showTail(){
        cout<<tail->val;
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
    void getElement(int idx){
        if(idx<0 || idx>=size){
            cout<<"False Input\n";
            return;
        }
        else if(idx==0){
            cout<<head->val<<endl;
            return;
        }
        else if(idx == size-1){
            cout<<tail->val<<endl;
            return;
        }
        else{
            Node* temp=head;
            for(int i=0;i<idx;i++){
                temp=temp->next;
            }
            cout<<temp->val<<endl;
        }
    }
    void deleteHead(){
        if(size ==0) return;
        head=head->next;
        head->prev=NULL;
        size--;
    }
    void deleteTail(){
        if(size==0) return;
        tail->prev->next=NULL;
        tail=tail->prev;
        size--;
    }
    void deleteAtIndex(int idx){
        Node* temp=head;
        if(idx==0){
            deleteHead();
            return;
        }
        else if(idx==size-1){
            deleteTail();
            return;
        }
        for(int i=0;i<idx-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        temp->next->prev=temp;
        size--;
        return;

    }

};
int  Double_LinkedList::size=0;
int main(){
    Double_LinkedList ll;
    ll.insertAtEnd(10);
    ll. display();
    ll.displayB();
    ll.insertAtEnd(20);
    ll.display();
    ll.displayB();
    ll.insertAtEnd(30);
    ll.display();
    ll.displayB();
    ll.insertAtHead(-10);
    ll.display();
    ll.displayB();
    ll.insertAtHead(-20);
    ll.display();
    ll.displayB();
    ll.insertAt(2,15);
    ll.display();
    ll.displayB();
    ll.insertAt(5,40);
    ll.display();
    ll.displayB();
    ll.insertAt(0,-30);
    ll.display();
    ll.displayB();
    ll.deleteHead();
    ll.display();
    ll.displayB();
    ll.deleteTail();
    ll.display();
    ll.displayB();
    ll.deleteAtIndex(1);
    ll.display();
    ll.displayB();
    cout<<ll.size<<endl;
    for(int i=0;i<ll.size;i++){
        ll.getElement(i);
    }
    
     
}