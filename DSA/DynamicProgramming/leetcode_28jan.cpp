#include<iostream>
#include<vector>
using namespace std;

    // vector<vector<int>> dp;
    int helper(vector<vector<int>>& grid,int i,int j){
        if(i>=grid.size() || j>=grid[0].size() ||i<0 ||j<0 || grid[i][j]==0) return 0;
        // if(dp[i][j]!=-1) return dp[i][j];
        int res = grid[i][j];
        grid[i][j]=0;

        res += helper(grid,i+1,j);
        res += helper(grid,i,j+1);
        res += helper(grid,i-1,j);
        res += helper(grid,i,j-1);
        res+=grid[i][j];
        return res;
    }
    int findMaxFish(vector<vector<int>> grid) {
        // dp.resize(12,vector<int>(12,-1));
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(grid[i][j]!=0) ans = max(ans,helper(grid,i,j));
            }
        }
        return ans;


        
    }

int main(){
    cout<<findMaxFish({{0,2,1,0},{4,0,0,3},{1,0,0,4},{0,3,2,0}});
}