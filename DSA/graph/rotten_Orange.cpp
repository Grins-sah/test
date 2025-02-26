#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
    public:
        int n;
        int m;
        vector<vector<bool>> check;
        vector<vector<int>> d{{1,0},{-1,0},{0,1},{0,-1}};
        int bfs (queue<pair<int,int>>&q,vector<vector<int>>& v){
            int ans = 0;
            while(q.size()!=0){
                auto x = q.front();
                q.pop();
                int i = x.first;
                int j = x.second;
                check[i][j] = 1;
                for(int y = 0;y<4;y++){
                    int a = i+d[y][0];
                    int b = j+d[y][1];
                    if(a<0||b<0||a>=n||b>=m) continue;
                    if(check[a][b]) continue;
                    if(v[a][b]==0) continue;
                    v[a][b]=1+v[i][j];
                    check[a][b]=1;
                    ans = max(ans,v[a][b]);
                    q.push({a,b});
                }
                
            }
            return ans;
        }
        int orangesRotting(vector<vector<int>>& grid) {
            n = grid.size();
            m = grid[0].size();
            check.resize(n,vector<bool>(m,false));
            queue<pair<int,int>> q;
            for(int i = 0;i<n;i++){
                for(int j = 0;j<m;j++){
                    if(grid[i][j]==2){
                        q.push({i,j});
                        grid[i][j]=0;
                    }
                }
            }
            int x =bfs(q,grid);
            for(int i = 0;i<n;i++){
                for(int j = 0;j<m;j++){
                    if(!check[i][j]&& grid[i][j]==1) return -1;
                }
            }
            return x;
    
    
        
            
        }
    };
int main(){

}
/**
[[2,1,1],[1,1,0],[0,1,1]]
[[2,1,1],[0,1,1],[1,0,1]]
[[0,2]]
[[2,2],[1,1],[0,0],[2,0]]
 */