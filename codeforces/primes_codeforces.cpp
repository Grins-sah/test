#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
vector<bool> sieve(int n){
    vector<bool> v(n+1,true);
    v[0]=0;
    v[1]=0;
    for(int i = 2;i*i<=n;i++){
        if(v[i]){
            for(int j = i*2;j<=n;j+=i) v[j]=false;
        }
    }
    return v;
}
int main(){
    int n;
    cin>>n;
    vector<bool> v= sieve(n-1);
    unordered_set<int> s;
    for(int i = 0;i<n;i++){
        if(v[i]) s.insert(i);
    }
    int ans = -1;
    for(int i = 2;i<n;i++){
        if(s.find(n-i)!=s.end() && s.find(i)!=s.end()){
            ans=i;
            break;
        }
    }
    if(ans!=-1) cout<<ans<<" "<<n-ans;
    else cout<<ans;
    

}