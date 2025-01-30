#include<iostream>
#include<vector>
#include<cstring>
#include<iomanip>
using namespace std;
class Solution {
public:
    double dp[30][30][105];
    double helper(int n,int row,int col ,int k){
        if(row>=n || col >=n || row<0 || col<0) return 0;
        if(k==0) return 1;
        if(dp[row][col][k]>-0.9) return dp[row][col][k];
        return dp[row][col][k]=(1/8.0)*(helper(n,row-1,col+2,k-1)+
        helper(n,row-1,col-2,k-1)+
        helper(n,row+1,col-2,k-1)+
        helper(n,row+1,col+2,k-1)+
        helper(n,row-2,col+1,k-1)+
        helper(n,row-2,col-1,k-1)+
        helper(n,row+2,col+1,k-1)+
        helper(n,row+2,col-1,k-1));

    }
    double knightProbability(int n, int k, int row, int column) {
        memset(dp,-1,sizeof(dp));
        return helper(n,row,column,k);
        
    }
};