#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++) cin>>v[i];
    vector<int> ans(n+1,0);
    vector<int> cnt(n+2,0);
    for(int i = 0;i<n;i++){
        cnt[v[i]]++;
    }
    ans[0]=1;
    ans[n]=1;
    if(cnt[0]==0){
        for(int i = 0;i<n+1;i++){
            cout<<1<<" ";
        }
        cout<<endl;
        return;
    }
    int j = 0;
    ll sum = 0;
    for(int i = 0;i<=n;i++){
        if(cnt[i]==0){
            break;
            
        }
        sum+=(cnt[i]-1);
        j = i;
        
    }
    vector<ll> post(n+2,0);
    vector<ll> pre(n+2,0);
    for(int i = n;i>=0;i--){
        post[i]+=post[i+1]+cnt[i+1];
    }
    for(int i = 1;i<=n;i++){
        pre[i]+=pre[i-1]+cnt[i-1]-1;
    }
    vector<int> semi_ans(n+5,0);
    for(int k = 0;k<=j;k++){
        semi_ans[cnt[k]]++;
        if(post[k]+pre[k]+cnt[k]+1>n+1){
            semi_ans[n+2]--;
        }
        else semi_ans[post[k]+pre[k]+cnt[k]+1]--;
    }
    for(int i = 1;i<n;i++){
        semi_ans[i]+=semi_ans[i-1];
    }
    semi_ans[0]=1;
    semi_ans[n]=1;
    // for(int i = 1;i<n;i++){
    //     int temp = 0;
    //     for(int k = 0;k<=j;k++){
    //         if(cnt[k]<=i && post[k]+pre[k]+cnt[k]>=i){
    //             temp++;
    //         }
    //     }
    //     if(post[j]+sum>=i) temp++;
    //     ans[i]=temp;
    // }
    for(int i = 0;i<=n;i++){
        if(post[j]+sum>=i && i!=0 && i!=n){
            cout<<semi_ans[i]+1<<" ";
        }
        else cout<<semi_ans[i]<<" ";
    }
    cout<<endl;
    

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}   