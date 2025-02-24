#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;
class Node {
    public:
        int val;
        vector<Node*> neighbors;
        Node() {
            val = 0;
            neighbors = vector<Node*>();
        }
        Node(int _val) {
            val = _val;
            neighbors = vector<Node*>();
        }
        Node(int _val, vector<Node*> _neighbors) {
            val = _val;
            neighbors = _neighbors;
        }
    };
    
class Solution {
    public:
        Node* cloneGraph(Node* node) {
            if(node==NULL) return NULL;
            Node* clone = new Node(node->val);
            queue<Node*> q;
            unordered_map<int,Node* > m;
            q.push(node);
            q.push(clone);
            while(q.size()!=0){
                Node* real = q.front();
                q.pop();
                Node* temp = q.front();
                q.pop();
                cout<<temp->val<<"s"<<endl;
                m[temp->val] =  temp;
                for(auto ele : real->neighbors){
                    if(m.find(ele->val)!=m.end()){
                        temp->neighbors.push_back(m[ele->val]);
                        continue;
                    }
                    Node* x = new Node(ele->val);
                    cout<<x->val<<" ";
                    temp->neighbors.push_back(x);
                    m[x->val] = x;
                    q.push(ele);
                    q.push(x);
                } 
            }
            return clone;
    
        }
    };
int main(){
    return 0;

}