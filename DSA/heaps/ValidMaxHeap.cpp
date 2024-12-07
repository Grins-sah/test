#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val):val(val),left(NULL),right(NULL){}
};
void inorder(Node* root,vector<int>& v){
    if(root==NULL) return ;
    inorder(root->left,v);
    v.push_back(root->val);
    inorder(root->right,v);

}
void display(Node* Root){
    if(Root ==NULL) return;
    display(Root->left);
    cout<<Root->val<<" ";

    display(Root->right);
}
bool validBST(Node* root){
    if(root==NULL) return true;
    if(root->left){
        if(root->left->val<root->val){}
        else return false;
    }
    if(root->right){
        if(root->right->val<root->val){}
        else return false;
    }
    return validBST(root->left) && validBST(root->right);
}
int main(){
    Node* a = new Node(20);
    Node* b = new Node(5);
    Node* c = new Node(16);
    Node* d = new Node(1);
    Node* e = new Node(8);
    Node* f = new Node(12);
    Node* g = new Node(10);
    Node* h = new Node(50);
    a->right=e;
    a->left =c;
    c->left = f;
    c->right = g;
    e->right=d;
    e->left= b;
    g->right = h;
    vector<int> v;
    inorder(a,v);
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    stack<Node*> st;
    st.push(a);
    int i=0;
    while(st.size()!=0){
        Node* temp = st.top();
        st.pop();
        temp->val = v[i++];
        if(temp->right) st.push(temp->right);
        if(temp->left) st.push(temp->left);
    }
    h->val = 0;
    cout<<validBST(a)<<endl;

    display(a);



}