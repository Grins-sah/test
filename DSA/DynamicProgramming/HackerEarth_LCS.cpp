#include<iostream>
#include<vector>
#include<queue>
#define ll int
using namespace std;
vector<vector<vector<ll>>> dp(2005,vector<vector<ll>>(2005,vector<ll>(6,-1)));
/** i have to implement bottom up to submit on hackerearth 
 *  link :-https://www.hackerearth.com/problem/algorithm/mancunian-and-k-ordered-lcs-e6a4b8c6/?utm_source=header&utm_medium=search&utm_campaign=he-search
 */
/**
 * 5 5 1
 * 1 2 3 4 5
 * 5 3 1 4 2
 */
ll korderedLCS(vector<int>&v,vector<int>& v2,int n,int m,int i,int j,int k ){
    if(i==n||j==m) return 0;
    else if(dp[i][j][k]!=-1) return dp[i][j][k];
    ll res = 0;
    if(v[i]==v2[j]) res =  1+korderedLCS(v,v2,n,m,i+1,j+1,k);
    else{
        if(k>0){
            res = 1+korderedLCS(v,v2,n,m,i+1,j+1,k-1);
            res = max(res,korderedLCS(v,v2,n,m,i,j+1,k));
            res = max(res,korderedLCS(v,v2,n,m,i+1,j,k));
        }else{

            res = max(res,korderedLCS(v,v2,n,m,i,j+1,k));
            res = max(res,korderedLCS(v,v2,n,m,i+1,j,k));   
        }

    }
    dp[i][j][k]=res;
    return res;

}
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(n);
    vector<int> v2(m);
    for(int i = 0;i<n;i++) cin>>v[i];
    for(int i = 0;i<m;i++) cin>>v2[i];
    cout<<korderedLCS(v,v2,n,m,0,0,k)<<endl;
    return 0;

}