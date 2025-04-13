#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> v;
    vector<int> r;
    int find(int& a){
        return v[a] = v[a]==a ? a : find(v[a]);
    }
    void Union(int& a,int& b){
        int parent_a = find(a);
        int parent_b = find(b);
        if(r[parent_a]>r[parent_b]){
            v[parent_b]=parent_a;
            r[parent_a]++;
        }else{
            v[parent_a]=parent_b;
            r[parent_b]++;
        }
    }
    static bool cmp(vector<int>& v1,vector<int>& v2){
        return v1[2]<v2[2];
    }
    bool isCycle(int& a,int& b){
        int parent_a = find(a);
        int parent_b = find(b);
        return parent_a==parent_b;
    }
    int minimumCost(int n, vector<vector<int>> connections){
        v.resize(n+1);
        r.resize(n+1,1);
        for(int i = 1;i<=n;i++) v[i]=i;
        sort(connections.begin(),connections.end(),cmp);
        int i = 0;
        int x = 0;
        int sum = 0;
        while(i<connections.size() && x<n-1){
            int a = connections[i][0];
            int b = connections[i][1];
            if(!isCycle(a,b)){
                sum+=connections[i][2];
                x++;
            }
            i++;
        }
        return x==n-1 ? sum : -1;


        
    }
};
int main(){
    Solution s;
    cout<<s.minimumCost(3,{{1,2,5},{1,3,6},{2,3,1}});
}

