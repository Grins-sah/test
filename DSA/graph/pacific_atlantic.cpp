#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Solution {
    public:
        int n;
        int m;
        vector<vector<int>> h;
        vector<vector<int>> dir = {{1,0},{-1,0},{0,1},{0,-1}};
        vector<vector<bool>> bfs(queue<pair<int,int>>& q){
            vector<vector<bool>> v(n,vector<bool>(m,false));
            while(q.size()!=0){
                auto x = q.front();
                int i = x.first;
                int j = x.second;
                v[i][j]=1;
                q.pop();
                for(int d = 0;d<4;d++){
                    int a = i+dir[d][0];
                    int b = j+dir[d][1];
                    if(a<0||b<0||a>=n||b>=m)  continue;
                    if(v[a][b]) continue;
                    if(h[a][b]<h[i][j]) continue;
                    q.push({a,b});
                }
            }
            return v;
        }
        vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
            n = heights.size();
            m = heights[0].size();
            h = heights;
            queue<pair<int,int>> pacific;
            queue<pair<int,int>> atlantic;
            for(int i = 0;i<m;i++){
                pacific.push({0,i});
                atlantic.push({n-1,i});
            }
            for(int i = 1;i<n;i++){
                pacific.push({i,0});
            }
            for(int i = 0;i<n-1;i++){
                atlantic.push({i,m-1});
            }
            vector<vector<bool>> v1 = bfs(pacific);
            vector<vector<bool> >v2 = bfs(atlantic);
            vector<vector<int>>v;
            for(int i = 0;i<n;i++){
                for(int j = 0;j<m;j++){
                    if(v1[i][j]&& v2[i][j]) v.push_back({i,j});
                }
            }
            return v;
            
    
            
        }
    };
int main(){

}
/**
 * [[1,2,2,3,5],[3,2,3,4,4],[2,4,5,3,1],[6,7,1,4,5],[5,1,1,2,4]]
[[1]]
 */