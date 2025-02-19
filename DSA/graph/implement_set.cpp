#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int v;
vector<unordered_set<int>> graph;
void add_edges(int src,int dest,bool bi_dir = true){
    graph[src].insert(dest);
    if(bi_dir){
        graph[dest].insert(src);
    }
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
    cin>>v;
    graph.resize(v,unordered_set<int>());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edges(s,d);
    }
    display();

}