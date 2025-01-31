#include<iostream>
#include<vector>
#include<cstring>
#define ll long long
using namespace std;
ll dp[10005][5005];
long long helper(int n,vector<int>& c,vector<int>& a,int i,int no_c,int no_a){
    if(i==n && no_c==no_a && no_c==n/2) return 0;
    if(i==n) return INT_MAX;
    if(dp[i][no_c]!=-1) return dp[i][no_c];
    if(no_a>n/2) return INT_MAX;
    if(no_c>no_a) return INT_MAX;
    long long res = INT_MAX;
    res = min(res,helper(n,c,a,i+1,no_c+1,no_a)+c[i]);
    res = min(res,helper(n,c,a,i+1,no_c,no_a+1)+a[i]);
    return dp[i][no_c]=  res;
}
int main(){
    int n;
    cin>>n;
    vector<int> c(n);
    vector<int> a(n);
    for(int i = 0;i<n;i++){
        int x,y;
        cin>>x>>y;
        c[i]=x;
        a[i]=y;
    }
    memset(dp,-1,sizeof(dp));
    cout<<helper(n,c,a,1,0,1)+a[0];

    

}