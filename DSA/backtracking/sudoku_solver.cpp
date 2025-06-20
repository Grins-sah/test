#include<bits/stdc++.h>
using namespace std;
int v[9][9];
bool check(int i,int j,int k){
    for(int a = 0;a<9;a++){
        if(v[a][j]==k) return false;
        if(v[i][a]==k) return false;
    }
    int ii = (i/3)*3;
    int jj = (j/3)*3;
    for(int a = ii ;a<ii+3;a++){
        for(int b = jj ;b<jj+3;b++){
            if(v[a][b]==k) return false;
        }
    }
    return true;
}
void travel(int i ,int j){
    bool res = false;
    int ii,jj;
    for(int a = i;a<9;a++){
        for(int b = (a==i)?j:0 ;b<9;b++){
            if(v[a][b]==-1){
                res = true;
                ii = a;
                jj = b;
                break;
            }
        }
        if(res) break;
    }
    if(!res){
        for(int i = 0;i<9;i++){
            for(int j = 0;j<9;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
        exit(0);
    }
    for(int k = 1;k<=9;k++){
        if(check(ii,jj,k)){
            v[ii][jj]=k;
            if(jj+1>=9){
                travel(ii+1,0);
            }else travel(ii,jj+1);
            v[ii][jj]=-1;
        }
    }
}
int main(){
    for(int i = 0;i<9;i++){
        for(int j = 0;j<9;j++){
            cin>>v[i][j];
        }
    }
    travel(0,0);
}