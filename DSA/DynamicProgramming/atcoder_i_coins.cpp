#include<iostream>
#include<vector>
#include<cstring>
#include<iomanip>
using namespace std;
double dp[3001][3001];
double helper(int x  ,int i,vector<double>&v){
    if(i==-1 && x!=0) return 0;
    if(x==0){
        return 1;
    }
    if(dp[x][i]>-0.9) return dp[x][i];

    return dp[x][i]= helper(x-1,i-1,v)*v[i]+helper(x,i-1,v)*(1-v[i]);
    
}
int main(){
    int n;
    cin>>n;
    vector<double> v(n);
    memset(dp,-1,sizeof(dp));
    for(int i = 0;i<n;i++) cin>>v[i];
    cout<<fixed<<setprecision(10)<<helper((n+1)/2,n-1,v);


}