#define ll long long
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<vector<int>> v(2,vector<int>(n));
    for(int i = 0;i<2;i++){
        for(int j = 0;j<n;j++) cin>>v[i][j];
    }
    int xx= 0;
    int yy = 0;
    int k = 0;
    for(int i = 0;i<n;i++){
        if(v[0][i]<n+1) xx++;
    }
    for(int i = 0;i<n;i++){
        if(v[0][i]<n+1) yy++;
    }
    unordered_map<int,pair<int,int>> m;
    for(int i = 0;i<2;i++){
        for(int j = 0;j<n;j++){
            m[v[i][j]]={i,j};
        }
    }
    queue<pair<int,int>>q;
    if(xx>=yy){
for(int i = 1;i<=n;i++){
        auto temp = m[i];
        int x = temp.first;
        int y = temp.second;
        int res = (x==0)?1:2;
        while(y!=i-1){
            if(i-1>y){

                swap(m[v[x][y]],m[v[x][y+1]]);
                swap(v[x][y],v[x][y+1]);
                
                q.push({y+1,res});
                y++;
            }else{
                swap(m[v[x][y-1]],m[v[x][y]]);
                swap(v[x][y-1],v[x][y]);
                q.push({y,res});
                y--;
            }
        }
        if(x!=0){
            swap(m[v[0][i-1]],m[v[1][i-1]]);
            swap(v[0][i-1],v[1][i-1]);
            q.push({i,3});
        }

    }
    for(int i = n+1;i<=2*n;i++){
        auto temp = m[i];
        
        int x = temp.first;
        int y = temp.second;
        int res = (x==1)?2:1;
        while(y!=i%(n+1)){
            if(i%(n+1)>y){
                swap(m[v[x][y]],m[v[x][y+1]]);
                swap(v[x][y],v[x][y+1]);
                q.push({y+1,res});
                y++;
            }else{
                swap(m[v[x][y-1]],m[v[x][y]]);
                swap(v[x][y-1],v[x][y]);
                q.push({y,res});
                y--;
            }
        }
        if(x!=1){
            swap(m[v[0][i%(n+1)]],m[v[1][i%(n+1)]]);
            swap(v[0][i%(n+1)],v[1][i%(n+1)]);
            q.push({i%(n+1)+1,3});
        }

    }
    }else{
        for(int i = 1;i<=n;i++){
            auto temp = m[i];
            int x = temp.first;
            int y = temp.second;
            int res = (x==1)?2:1;
            while(y!=i-1){
                if(i-1>y){

                    swap(m[v[x][y]],m[v[x][y+1]]);
                    swap(v[x][y],v[x][y+1]);

                    q.push({y+1,res});
                    y++;
                }else{
                    swap(m[v[x][y-1]],m[v[x][y]]);
                    swap(v[x][y-1],v[x][y]);
                    q.push({y,res});
                    y--;
                }
            }
            if(x!=1){
                swap(m[v[0][i-1]],m[v[1][i-1]]);
                swap(v[0][i-1],v[1][i-1]);
                q.push({i,3});
            }

        }
        for(int i = n+1;i<=2*n;i++){
            auto temp = m[i];

            int x = temp.first;
            int y = temp.second;
            int res = (x==1)?2:1;
            while(y!=i%(n+1)){
                if(i%(n+1)>y){
                    swap(m[v[x][y]],m[v[x][y+1]]);
                    swap(v[x][y],v[x][y+1]);
                    q.push({y+1,res});
                    y++;
                }else{
                    swap(m[v[x][y-1]],m[v[x][y]]);
                    swap(v[x][y-1],v[x][y]);
                    q.push({y,res});
                    y--;
                }
            }
            if(x!=0){
                swap(m[v[0][i%(n+1)]],m[v[1][i%(n+1)]]);
                swap(v[0][i%(n+1)],v[1][i%(n+1)]);
                q.push({i%(n+1)+1,3});
            }

        }
    }
    
    cout<<q.size()<<endl;
    return ;
    while(q.size()!=0){
        auto& xx = q.front();
        q.pop();
        cout<<xx.second<<" "<<xx.first<<endl;
    }


}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}