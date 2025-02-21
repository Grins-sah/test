#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
unordered_set<int> s;
vector<vector<int>> v;
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
void helper(int d,int src ,vector<int>& v1){
    if(d==src){
        v.push_back(v1);
        return ;
    }
    for(auto ele : graph[src]){
            if(s.find(ele)!=s.end()) continue;
            s.insert(ele);
            v1.push_back(ele);
            helper(d,ele,v1);
            v1.pop_back();
            s.erase(ele);
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
    int d;
    cin>>d;
    for(int i = 0;i<n;i++){
        vector<int> v2;
        v2.push_back(i);
        if(i!=d)helper(d,i,v2);
        v2.pop_back();
    }
    for(int i = 0;i<v.size();i++){
        for(int j = 0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }


}