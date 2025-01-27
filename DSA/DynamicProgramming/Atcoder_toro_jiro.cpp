#include<iostream>
#include<vector>
using namespace std;
vector<vector<long long>> dp(3005,vector<long long>(3005,-1));
long long helper(vector<long long>& v,long long i,long long j){
    if(i==j) return dp[i][j]= v[i];
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j]= max(v[i]-helper(v,i+1,j),v[j]-helper(v,i,j-1));
}  
// **** accepted solution and have optimizing logic which i always forgots ****
// int  main(){
//     long long n;
//     cin>>n;
//     vector<long long> v(n);
//     for(long long i = 0;i<n;i++) cin>>v[i];
//     cout<<helper(v,0,n-1)<<endl;
// }

// bottom up solution
int main(){
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(long long i = 0;i<n;i++){
        cin>>v[i];
        dp[i][i] =(long long)v[i];
    }

    for (int i = 2;i<=n;i++){
        for(int j = 0;j<n-i+1;j++){
            dp[j][j+i-1] = max(v[j]-dp[j+1][j+i-1],v[j+i-1]-dp[j][j+i-2]);
        }
    }
    cout<<dp[0][n-1];
}