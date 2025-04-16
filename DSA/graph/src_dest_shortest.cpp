#include<bits/stdc++.h>
#define pi pair<int,int>
using namespace std;
vector<list<pair<int,int>>> graph;
int n;
int e;
void add_edges(int& src,int& dest,int& wt,bool bi_dir = true){
    graph[src].push_back({dest,wt});
    if(bi_dir) graph[dest].push_back({src,wt});
}
int minumum_distance_BFS(int& src,int& dest){
    queue<pi> pq;
    pq.push({src,0});
    unordered_set<int> s;
    int ans = INT_MAX;
    while(pq.size()!=0){
        pi x = pq.front();
        pq.pop();
        if(x.first==dest){
            ans = min(ans,x.second);
            continue;
        }
        if(s.count(x.first)!=0)continue;
        s.insert(x.first);
        for(auto& ele : graph[x.first]){
            if(ele.first!=x.first)pq.push({ele.first,ele.second+x.second});
        }

    }
    return ans;
} 
int main(){
    cin>>n>>e;
    graph.resize(n,list<pi>());
    for(int i = 0;i<e;i++){
        int a,b,wt;
        cin>>a>>b>>wt;
        add_edges(a,b,wt);
    }
    int src,dest;
    cin>>src>>dest;
    cout<<minumum_distance_BFS(src,dest);



}