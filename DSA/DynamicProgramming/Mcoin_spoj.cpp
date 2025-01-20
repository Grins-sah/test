#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int j,k,m;
    cin>>j>>k>>m;
    vector<int> v(m);
    for(int i = 0;i<m;i++){
        cin>>v[i];
    }
    string ans = "";
    vector<bool> dp(1000001,0);
    dp[j]=1;
    dp[k]=1;
    for(int i = 1;i<min(k,j);i++){
        dp[i]=i%2;
    }
    for(int i = min(k,j)+1;i<=1000000;i++){
        dp[i]=!dp[i-1];
        if(i>=j) dp[i]=dp[i]|| !dp[i-j];
        if(i>=k) dp[i]=dp[i]|| !dp[i-k];
    }
    for(int i = 0;i<m;i++){
        if(dp[v[i]]) ans+="A";
        else ans+="B";
    }
    cout<<ans;
}