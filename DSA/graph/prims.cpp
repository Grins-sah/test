#include<bits/stdc++.h>
using namespace std;
vector<set<pair<int,int>>> graph;
int n,e,src;
int prims(){
    vector<vector<int>> m(n+1,vector<int>(2,INT_MAX));
    m[src][0]=-1;
    m[src][1]=src;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    unordered_set<int> s;
    pq.push({0,src});
    int sum = 0;
    while(pq.size()!=0){
        auto x = pq.top();
        pq.pop();
        if(s.find(x.second)!=s.end()) continue;
        sum+=x.first;
        s.insert(x.second);
        for(auto& ele : graph[x.second]){
            if(m[ele.first][0]>ele.second){
                m[ele.first][0] = ele.second;
                m[ele.first][1]= x.second;
                pq.push({ele.second,ele.first});
            }      

        }

    }
    return sum;


}
int main(){
    cin>>n>>e;
    graph.resize(e);
    for(int i = 0;i<e;i++){
        int a,b,wt;
        cin>>a>>b>>wt;
        graph[a].insert({b,wt});
        graph[b].insert({a,wt});
    }
    src = 1;
    cout<<prims();

}