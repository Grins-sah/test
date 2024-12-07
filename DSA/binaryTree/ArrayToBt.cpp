#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val):val(val){
        left=NULL;
        right=NULL;
    }

};
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

void display(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);

}
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
void ArrayToBt(vector<Node*> v){
    int n = v.size();
    queue<Node*> q;
    q.push(v[0]);
    int i=1;
    while(i<n && q.size()!=0){
        q.front()->left=v[i];
        if(v[i]!=NULL) q.push(v[i++]); 
        else i++;   // Node* arr[] = {a,b,c,d,NULL,e,f,NULL,g};
        q.front()->right=v[i];
        if(v[i]!=NULL) q.push(v[i++]);
        else i++;
        q.pop();


        
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
    Node* arr[] = {a,b,c,NULL,NULL,d,e};
    vector<Node*> v(arr,arr+7);
    ArrayToBt(v);
    Node* prev =NULL;
    Node* suc = NULL;
    if(a->left) prev = a->left;
    if(a->right) suc  = a->right;
    while(prev->right) prev = prev->right;
    while(suc->left) suc = suc->left;
    cout<<prev->val<<" "<<suc->val;


}