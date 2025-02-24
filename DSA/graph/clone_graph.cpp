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
    vector<Node*> node_reg;
    void dfs(Node* clone ,Node* actual ){
        for(auto x : actual->neighbors){
            if(node_reg[x->val]){
                clone->neighbors.push_back(node_reg[x->val]);
            }else{
                Node* temp = new Node(x->val);
                node_reg[temp->val]=temp;
                clone->neighbors.push_back(temp);
                dfs(temp,x);
            }
        }
    }
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        Node* clone  = new Node(node->val);
        node_reg.resize(110,NULL);
        node_reg[clone->val] = clone;
        dfs(clone,node);
        return clone;

    }
};
int main(){
    return 0;
}