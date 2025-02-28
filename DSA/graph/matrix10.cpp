#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long n;
    long long m;
    bool check[10000][10000];
    long long dfs(vector<vector<int>>& v,long long i,long long j){
        if(i<0||i>=n||j<0||j>=m) return INT_MAX;
        if(v[i][j]==0) return 0;
        if(check[i][j]){
            cout<<i<<" "<<j<<endl;
            return INT_MAX;
        }
        check[i][j]=1;
        
        long long ans = LLONG_MAX;
        ans =min(ans,dfs(v,i+1,j)+1);
        ans =min(ans,dfs(v,i-1,j)+1);
        ans =min(ans,dfs(v,i,j+1)+1);
        ans =min(ans,dfs(v,i,j-1)+1);
        return ans;
        
    }
    vector<vector<int>> updateMatrix(vector<vector<int>> mat) {
        n = mat.size();
        m = mat[0].size();
        for(long long i = 0;i<n;i++){
            for(long long j = 0;j<m;j++){
               
                if(mat[i][j]==1){
                    memset(check,0,sizeof(check));
                    mat[i][j] = (int)dfs(mat,i,j);
                }

            }
        }
        return mat;
        
    }
int main(){
    updateMatrix({{0,0,0},{0,1,0},{1,1,1}});
}