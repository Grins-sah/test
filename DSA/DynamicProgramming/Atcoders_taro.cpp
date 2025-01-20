#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> dp;
int helper(int prev,vector<vector<int>>& v,int day){
    if(day>=v.size()) return 0;
    if(prev==-1){
        return max(v[day][0]+helper(0,v,day+1),max(v[day][1]+helper(1,v,day+1),v[day][2]+helper(2,v,day+1)));
    }
    int ans=INT_MIN;
    if(dp[day][prev]!=-1) return dp[day][prev];
    for(int i = 0;i<3;i++){
        if(i==prev) continue;
        ans = max(ans,v[day][i]+helper(i,v,day+1));
    }
    return dp[day][prev]= ans;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(3,0));
    for(int i = 0;i<n;i++){
        cin>>v[i][0];
        cin>>v[i][1];
        cin>>v[i][2];
    }
    dp.resize(n,vector<int> (3,-1));
    cout<<helper(-1,v,0);

}