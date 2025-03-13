#include<iostream>
#include<vector>
using namespace std;
vector<int> mi ;
vector<int> mx ;
int find(vector<int>& v,int& x){
    if(v[x]==x) return x;
    else return  v[x]=find(v,v[x]);
}
void Union(vector<int>& v,vector<int>& r,int x,int y){
    int parent_x = find(v,x);
    int parent_y = find(v,y);
    if(parent_x==parent_y) return;
    if(r[parent_x]>=r[parent_y]){
        mi[parent_x] = min(mi[parent_x],mi[parent_y]);
        mx[parent_x] = max(mx[parent_x],mx[parent_y]);
        r[parent_x]+=r[parent_y];
        v[parent_y]=parent_x;
    }else{
        mi[parent_y] = min(mi[parent_y],mi[parent_x]);
        mx[parent_y] = max(mx[parent_x],mx[parent_y]);
        r[parent_y]+=r[parent_x];
        v[parent_x]=parent_y;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v(n+1);
    vector<int> r(n+1,1);

    for(int i = 1;i<=n;i++){
        v[i]=i;
    }
    mi = v;
    mx = v;
    while(m--){
        string s;
        cin>>s;
        if(s=="union"){
            int x,y;
            cin>>x>>y;
            Union(v,r,x,y);
        }else{
            int x;
            cin>>x;
            int y = find(v,x);
            cout<<mi[y]<<" "<<mx[y]<<" "<<r[y]<<endl;

        }
    }
}