#include<bits/stdc++.h>
using namespace std;
vector<list<int>> graph;
int v;
void add_edge(int x,int y,bool bi_dir = true){
    graph[x].push_back(y);
    if(bi_dir){
        graph[y].push_back(x);
    }
}

void topoBFS(){
    // kahn algo
    vector<int> indegree (v,0);
    for(int i = 0;i<v;i++){
        for(auto neighbour : graph[i]){
            indegree[neighbour]++;
        }
    }
    queue<int> q;
    unordered_set<int>s;
    for(int i = 0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
            s.insert(i);
        }
    }
    while(q.size()!=0){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        for(auto neighbour : graph[x]){
            if(s.find(neighbour)==s.end()){
                indegree[neighbour]--;
                if(indegree[neighbour]==0){
                    q.push(neighbour);
                    s.insert(neighbour);
                }
            }
        }
    }

}
 
int main(){
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    while(e--){
        int x,y;
        cin>>x>>y;
        add_edge(x,y,false);

    }
    topoBFS();
}