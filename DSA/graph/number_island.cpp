#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// leetcode - 200
class Solution {
    public:
        int n;
        int m;
        bool check[305][305];
        void dfs(vector<vector<char>>& grid,int i,int j){
            queue<pair<int,int>> q;
            q.push({i,j});
            while(q.size()!=0){
                auto x = q.front();
                q.pop();
                i = x.first;
                j = x.second;
                if(i<0||j<0||i>=n||j>=m|| check[i][j]||grid[i][j]=='0') continue;
                check[i][j]=1;
                q.push({i+1,j});
                q.push({i-1,j});
                q.push({i,j-1});
                q.push({i,j+1});
    
            }
        }
        int numIslands(vector<vector<char>>& grid) {
            n = grid.size();
            m = grid[0].size();
            int ans = 0;
            memset(check,0,sizeof(check));
            for(int i =0;i<n;i++){
                for(int j = 0;j<m;j++){
                    if(!check[i][j] && grid[i][j]=='1'){
                        ans++;
                        dfs(grid,i,j);
                    }
                }
            }
            return ans;
            
        }
    };
int main(){


}
/**
 * [["1","1","1","1","0"],["1","1","0","1","0"],["1","1","0","0","0"],["0","0","0","0","0"]]
[["1","1","0","0","0"],["1","1","0","0","0"],["0","0","1","0","0"],["0","0","0","1","1"]]
 */