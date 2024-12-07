#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val):val(val),left(NULL),right(NULL){}

};
void display(Node* Root){
    if(Root ==NULL) return;  // base case
    cout<<Root->val<<" ";    // task
    display(Root->left);     // call 1     
    display(Root->right);    // call 2
}

void inDisplay(Node* root){
    if(root==NULL) return;
    inDisplay(root->left);
    cout<<root->val<<" ";
    inDisplay(root->right);
}  

void PostDisplay(Node* root){

}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);
    Node* h = new Node(80);
    Node* i = new Node(90);
    a->left = b;
    a->right = c;
    b->left = d;
    c->right = e;
    b->right = f;
    c->left = g;
    g->left=i;
    display(a);
    cout<<endl;
    inDisplay(a);
}