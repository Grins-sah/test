#include<iostream>
#include<vector>
#include<cstring>
using namespace std;



class Solution {
    public:
        bool visit[55][55];
        int colour;
        void helper(int i ,int j,vector<vector<int>>& v,int& prev){
            if(i<0 ||i>=v.size() || j<0 || j>=v[0].size() || visit[i][j]) return ;
            visit[i][j]=1;
            if(v[i][j]==prev) v[i][j]=colour;
            else return ;
            helper(i+1,j,v,prev);
            helper(i-1,j,v,prev);
            helper(i,j+1,v,prev);
            helper(i,j-1,v,prev);
    
    
    
        }
        vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
            if(color == image[sr][sc]) return image;
            memset(visit,0,sizeof(visit));
            colour = color;
            int temp = image[sr][sc];
            helper(sr,sc,image,temp);
            return image;
            
        }
};