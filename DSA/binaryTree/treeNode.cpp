#include<iostream>
#include<cmath>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val): val(val){
        left=NULL;
        right=NULL;
    }
};

void display(Node* Root){
    if(Root ==NULL) return;
    cout<<Root->val<<" ";
    display(Root->left);
    display(Root->right);
}

int sumBt(Node* Root){
    if(Root == NULL) return 0;
    return Root->val+sumBt(Root->left)+ sumBt(Root->right);
}
int size(Node* Root){
    if(Root == NULL) return 0;
    return 1+size(Root->left)+size(Root->right);
}

int maxBt(Node* Root){
    if(Root == NULL) return INT_MIN;
    return max(Root->val,max(maxBt(Root->left),maxBt(Root->right)));
}
int level(Node* Root){
    if(Root == NULL) return 0;
    return 1+max(level(Root->left),level(Root->right));

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
    cout<<sumBt(a);
    cout<<endl<<size(a);
    cout<<endl<<maxBt(a);
    cout<<endl<<level(a);






}