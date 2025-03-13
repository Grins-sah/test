#include<iostream>
#include<vector>
using namespace std;
int find(vector<int>& v,int x){
    if(v[x]==x) return x;
    else{
        return v[x]=find(v,v[x]);
    }
}
void Union(vector<int>& v,vector<int>& r,int x,int y){
    int parent_x = find(v,x);
    int parent_y = find(v,y);
    if(r[parent_x]>=r[parent_y]){
        r[parent_x]++;
        v[parent_y]=parent_x;
    }else{
        r[parent_y]++;
        v[parent_x]=parent_y; 
    }


}
void display(vector<int>& v){
    for(int i = 1;i<=v.size()-1;i++) cout<<v[i]<<" ";
    cout<<endl;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> parent(n+1);
    vector<int> rank(n+1,0);
    for(int i = 1;i<=n;i++){
        parent[i]=i;
    }
    while(m--){
        string str;
        cin>>str;
        if(str=="union"){
            int x,y;
            cin>>x>>y;
            Union(parent,rank,x,y);
        }else{
            int x;
            cin>>x;
            find(parent,x);
        }
        display(parent);

    }
}