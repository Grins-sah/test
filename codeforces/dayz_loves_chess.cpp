#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m;
void dfs(vector<vector<char>>& v,vector<vector<bool>>& check,int i ,int j , char prev){
    if(i<0||j<0||i>=n||j>=m) return;
    if(check[i][j]) return;
    if(v[i][j]=='-') return;
    check[i][j]=1;
    if(prev==' '){
        v[i][j]='B';
        dfs(v,check,i-1,j,'B');
        dfs(v,check,i+1,j,'B');
        dfs(v,check,i,j-1,'B');
        dfs(v,check,i,j+1,'B');
    }else{
        if(prev=='W'){
            v[i][j]='B';
            dfs(v,check,i-1,j,'B');
            dfs(v,check,i+1,j,'B');
            dfs(v,check,i,j-1,'B');
            dfs(v,check,i,j+1,'B');
        }else{
            v[i][j]='W';
            dfs(v,check,i-1,j,'W');
            dfs(v,check,i+1,j,'W');
            dfs(v,check,i,j-1,'W');
            dfs(v,check,i,j+1,'W');
        }
    }
}
int main(){

    cin>>n>>m;
    vector<vector<char>> v(n,vector<char>(m));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>v[i][j];
        }
    }
    vector<vector<bool>> check(n,vector<bool>(m,false));
    for(int i = 0;i<n;i++){
        for(int j =0;j<m;j++){
            if(check[i][j]) continue;
            dfs(v,check,i,j,' ');
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }

}