#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val):val(val){
        next=NULL;
    }
};
class queue{
private:
    Node* f;
    Node* b;
public:
    int size;
public:
    queue(){
        f=b=NULL;
        size=0;
    }
    void push(int val){
        if(size==0){
            f=new Node(val);
            b=f;
        }
        else{
            Node* temp=new Node(val);
            b->next=temp;
            b= temp;
        }
        size++;
    }
    void pop(){
        if(size<=0){
            cout<<"queue is Empty ! "<<endl;
        }
        else{
            Node* temp=f;
            f=f->next;
            delete(temp);
            size--;
        }       
    }
    int front(){
        if(size==0){
            cout<<"queue is empty !"<<endl;
            return -1;
        }
        else{
            return f->val;
        }
    }
    int back(){
        if(size==0){
            cout<<"queue is empty !"<<endl;
            return -1;
        }
        else{
            return b->val;
        }
    }
};
void display(queue* q){
    for(int i=0;i<q->size;i++){
        int x=q->front();
        q->pop();
        cout<<x<<" ";
        q->push(x);
    }
    cout<<endl;
}
int main(){
    queue* q=new queue();
    q->push(10);
    q->push(20);
    q->push(30);
    q->push(40);
    q->push(50);
    q->push(60);
    q->push(70);
    display(q);
    q->pop();
    display(q);
    q->pop();
    display(q);
    q->pop();
    display(q);
    q->pop();
    display(q);
    q->pop();
    display(q);
    q->pop();
    display(q);
    q->pop();
    display(q);
    q->pop();
    cout<<q->front()<<endl;
    cout<<q->back()<<endl;

    q->push(10);
    cout<<q->front()<<endl;
    display(q);
    cout<<q->front()<<endl;
    cout<<q->back()<<endl;
    q->push(20);
    display(q);
    cout<<q->front()<<endl;
    cout<<q->back()<<endl;
    q->push(30);
    display(q);
    cout<<q->front()<<endl;
    cout<<q->back()<<endl;
    q->push(40);
    display(q);
    cout<<q->front()<<endl;
    cout<<q->back()<<endl;
    display(q);
}