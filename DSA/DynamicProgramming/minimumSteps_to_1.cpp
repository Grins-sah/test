#include<iostream>
#include<vector>
using namespace std;
int helper(int n,int step){
    if(n==1) return step;
    step++;
    if(n%3==0 && n%2==0){
        return min(min(helper(n-1,step),helper(n/3,step)),helper(n/2,step));
    }
    else if(n%2==0){
        return min(helper(n-1,step),helper(n/2,step));
    }
    else if(n%3==0){
    return min(helper(n-1,step),helper(n/3,step));

    }
    return helper(n-1,step);

}
int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,0);
    for(int i=n-1;i>=1;i--){
        if(i*3<=n && i*2 <=n) dp[i]=1+min(min(dp[i+1],dp[i*2]),dp[i*3]);
        else if(i*2<=n){
            dp[i]= 1+min(dp[i+1],dp[i*2]);
        }else if(i*3<=n){
            dp[i]= 1+min(dp[i+1],dp[i*3]);
        }else{
            dp[i]=1+dp[i+1];
        }

    }
    //cout<<helper(n,0);
    cout<<endl<<dp[1];

}