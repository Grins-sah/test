#include<iostream>
#include<vector>
using namespace std;
int helper(vector<int>& v,int sum,int& n){
    if(sum==0) return 0;
    if(sum<0) return -1;
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        int x = helper(v,sum-v[i],n);
        if(x!=-1) ans = min(ans,x);
    }
    return ++ans;

}
int main(){
    int n,sum;
    cin>>n;
    cin>>sum;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<helper(v,sum,n);

}