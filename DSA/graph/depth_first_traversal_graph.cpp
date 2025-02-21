#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
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
void helper(int d,string temp,list<int>& l,unordered_set<int> s){
    for(auto ele : l){
        if(ele!=d){
            if(s.find(ele)!=s.end()) continue;
            s.insert(ele);
            helper(d,temp+"->"+to_string(ele),graph[ele],s);
        }else{
            cout<<temp+"->"+to_string(ele)<<endl;
        }
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
        if(i!=d)helper(d,to_string(i),graph[i],{i});
    }


}