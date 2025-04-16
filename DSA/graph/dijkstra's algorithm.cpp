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

int Dijkstra_algo(int& src,int& dest){
    priority_queue<pi,vector<pi>,greater<pi>> pq;
    vector<vector<int>> v(n,vector<int>(2,INT_MAX));
    unordered_set<int> s;
    pq.push({0,src});
    v[src]={0,src};
    while(pq.size()!=0){
        auto x = pq.top();
        pq.pop();
        if(s.count(x.second)) continue;
        s.insert(x.second);
        for(auto& ele : graph[x.second]){
            if(v[ele.first][0]>v[x.second][0]+ele.second){
                v[ele.first][0]=v[x.second][0]+ele.second;
                v[ele.first][1]=x.second;
                pq.push({v[ele.first][0],ele.first});
            }
        }
    }
    cout<<"==============================="<<endl;
    for(int i = 0;i<n;i++){
        cout<<i<<"=>"<<v[i][0]<<" "<<v[i][1]<<endl;
    }
    cout<<"==============================="<<endl;
    return v[dest][0];
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
    cout<<Dijkstra_algo(src,dest);



}