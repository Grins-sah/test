#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<list<int>> graph;
    vector<vector<int>> dist;
    void dfs1(int a ,int k,unordered_set<int>& s){
        dist[a][0]=k;
        for(auto& ele : graph[a]){
            if(s.count(ele)==0){
                s.insert(ele);
                dfs1(ele,k+1,s);
                s.erase(ele);
            }
        }
    }
    void dfs2(int a ,int k,unordered_set<int>& s){
        dist[a][1]=min(dist[a][1],k);
        for(auto& ele : graph[a]){
            if(s.count(ele)==0){
                s.insert(ele);
                dfs2(ele,k+1,s);
                s.erase(ele);
            }else{
                dist[a][1]=min(dist[a][1],1+dist[ele][1]);
            }
        }
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();
        graph.resize(n,list<int>());
        for(int i = 0;i<n;i++){
            if(edges[i]==-1) continue;
            graph[i].push_back(edges[i]);
        }
        dist.resize(n,vector<int>(2,INT_MAX));
        unordered_set<int> s;
        s.insert(node1);
        dfs1(node1,0,s);
        s.erase(node1);
        s.insert(node2);
        dfs2(node2,0,s);
        s.erase(node2);
        int mi = INT_MAX;
        int ans = INT_MAX;
        for(int i = 0;i<n;i++){
            cout<<dist[i][0]<<" "<<dist[i][1]<<endl;
            if(dist[i][0]!=INT_MAX && dist[i][1]!=INT_MAX){
                if(mi>max(dist[i][0],dist[i][1])){
                    ans = i;
                    mi = max(dist[i][0],dist[i][1]);
                }
                
            }
        }
        return ans;

    }
};