#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val):val(val){
        this->right=NULL;
        this->left=NULL;
    }

};

void display(Node* root,int n,int level){  // BFS
    if(root==NULL) return;
    if(level==n){
        cout<<root->val<<" ";
    }
    else if(level<n){
        display(root->left,n,level+1);
        display(root->right,n,level+1);
    }
    else return;
    
}

void ConstructionTree(){
    
}

void LevelDisplay(Node* root,int n,int level){
    if(root==NULL) return;
    if(level==n){
        cout<<root->val<<" ";
    }
    else if(level<n){
        display(root->right,n,level+1);
        display(root->left,n,level+1);
    }
    else return;
    
}
void LevelOrderQueue(Node* root){
    queue<Node*> q;
    if(q.size()==0) q.push(root);
    while(q.size()!=0){
        cout<<q.front()->val<<" ";
        Node* temp = q.front();
        q.pop();
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);

    }


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
    for(int i =1;i<=4;i++){
        display(a,i,1);
        cout<<endl;
    }
    for(int i =1;i<=4;i++){
        LevelDisplay(a,i,1);
        cout<<endl;
    }
    LevelOrderQueue(a);



}