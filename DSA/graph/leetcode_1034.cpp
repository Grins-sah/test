#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool visited[55][55];
        bool colr[55][55];
        bool helper(vector<vector<int>>& grid,int r,int c,int& color,int& prev){
            int n = grid.size();
            int m = grid[0].size();
            if(r<0|| r>=n || c<0 ||c>=m) return false ;
            if(visited[r][c]){
                if(grid[r][c]==prev || colr[r][c]) return true;
                else return false;
            }
            visited[r][c]=1;
            if(grid[r][c]==prev){
                bool res =   helper(grid,r+1,c,color,prev);
                bool res2 = helper(grid,r-1,c,color,prev);
                bool res3 = helper(grid,r,c+1,color,prev);
                bool res4 = helper(grid,r,c-1,color,prev);
                res = res&& res2&& res3&& res4;
                if(!res){
                    grid[r][c]=color;
                    colr[r][c]=1;
                }
                return true;
            }
            else return false;
        }
        vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
            if(color==grid[row][col]) return grid;
            int x = grid[row][col];
            memset(visited,0,sizeof(visited));
            memset(colr,0,sizeof(colr));
            helper(grid,row,col,color,x);
            return grid;
            
        }
    };
/**
 * [[1,1],[1,2]]
0
0
3
[[1,2,2],[2,3,2]]
0
1
3
[[1,1,1],[1,1,1],[1,1,1]]
1
1
2
[[2,1,2,2,1],[1,1,1,1,1],[2,2,2,1,2],[1,2,2,1,2],[2,1,1,1,2]]
1
4
2
[[1,2,1,2,1,2],[2,2,2,2,1,2],[1,2,2,2,1,2]]
1
3
1
 */