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
        right=NULL;
        left=NULL;
    }

};
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
void centreDisplay(Node* root){
    if(root==NULL) return;
    if(root->left == NULL && root->right==NULL) cout<<root->val<<" ";
    centreDisplay(root->left);
    centreDisplay(root->right);
}
void leftDisplay(Node* root){
    if(root==NULL) return;
    if(root->left!=NULL || root->right)cout<<root->val<<" ";
    leftDisplay(root->left);
}
void rightDisplay(Node* root){
    if(root==NULL) return;
    rightDisplay(root->right);
    if(root->left != NULL || root->right!=NULL) cout<<root->val<<" ";
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
    Node* j = new Node(100);
    Node* k = new Node(110);
    Node* l = new Node(120);
    Node* m = new Node(130);
    Node* arr[]={a,b,c,d,e,f,g,h,i,j,k,l,m};
    vector<Node*> v(arr,arr+13);
    ArrayToBt(v);
    leftDisplay(a->left);
    centreDisplay(a);
    rightDisplay(a->right);





}
