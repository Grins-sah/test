#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    queue<pair<int,int>> q;
    q.push({0,0});
    vector<vector<int>> dir{{1,2},{2,1},{-1,2},{-2,1},{1,-2},{2,-1},{-1,-2},{-2,-1}};
    vector<vector<bool>> check(12,vector<bool>(12,false));
    vector<vector<int>> v(12,vector<int>(12,0));

    int ans = 0;
    while(q.size()!=0){
        auto x1 = q.front();
        q.pop();
        int i = x1.first;
        int j = x1.second;
        for(int d = 0;d<8;d++){
            int a = i+dir[d][0];
            int b = j+dir[d][1];
            if(a<0||b<0||a>=12||b>=12) continue;
            if(check[a][b]) continue;
            check[a][b]=1;
            v[a][b]=1+v[i][j];
            q.push({a,b});
        }

    }
    cout<<v[x][y]<<endl;
}