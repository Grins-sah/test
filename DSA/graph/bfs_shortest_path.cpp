#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
unordered_set<int> s;

void add_edges(int s,int d,bool bi_dir = true){
    graph[s].push_back(d);
    if(bi_dir) graph[d].push_back(s);
}
void display(){
    for(int i = 0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto ele : graph[i]){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    graph.resize(n,list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edges(s,d);
    }
    display();
    queue<int> q;
    int root;
    cin>>root;
    q.push(root);
    vector<int> v(n,0);
    s.insert(root);
    while(q.size()!=0){
        int temp = q.front();
        q.pop();
        for(auto ele : graph[temp]){
            if(s.find(ele)!=s.end()) continue;
            s.insert(ele);
            v[ele]=v[temp]+1; 
            q.push(ele);
        }

    }
    for(auto ele :v){
        cout<<ele<<" ";
    }
    




}