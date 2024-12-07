#include<iostream>
#include<unordered_map>
#include<vector>
#include<queue>
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
void topview(Node* root){
    unordered_map<int,int> m;
    queue< pair<Node*,int> > q;
    pair <Node*,int> r;
    r.first =root;
    r.second = 0;
    q.push(r);
    while(q.size()>0){
        Node* temp = (q.front()).first;
        int level = (q.front()).second;
        q.pop();
        if(m.find(level)==m.end()){
            m[level]=temp->val;
        }
        if(temp->left){
            pair<Node* ,int> p;
            p.first=temp->left;
            p.second = level-1;
            q.push(p);
        }
        if(temp->right!=NULL){
            pair <Node*,int> p;
            p.first = temp->right;
            p.second = level+1;
            q.push(p);
        }
    }
    int minLevel = INT_MAX;
    int maxLevel = INT_MIN;
    for(auto x: m){
        int level = x.first;
        minLevel = min(level,minLevel);
        maxLevel = max(maxLevel,level);
    }
    for(int i=minLevel;i<=maxLevel;i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
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
    Node* arr[] = {a,b,c,d,e,NULL,f,NULL,NULL,g,h};
    vector<Node*> v(arr,arr+11);
    ArrayToBt(v);
    topview(a);

}