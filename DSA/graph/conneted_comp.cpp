#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
unordered_set<int> set;
void add_edges(int src ,int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }

}

void dfs(int i){
    for( auto ele :graph[i]){
        if(set.find(ele)!=set.end()) continue;
        set.insert(ele);
        dfs(ele);
    }
}

void connected_comp(){
    int a = 0;
    for(int i = 0;i<graph.size();i++){
        if(set.find(i)!=set.end()) continue;
        set.insert(i);
        a++;
        dfs(i);
    }
    cout<<a<<endl;
    
}

int main(){
    int v;
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edges(s,d);
    }
    connected_comp();
    

    

}