#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool helper(string& p,string& s,int i,int j ){
    int n = p.length();
    int m = s.length();
    if(i==n && j==m) return true;
    if(i>=n|| j>=m) return false;
    if(p[i]=='L'){
        int cnt = 0;
        for(int k = j;k<min(m,j+2);k++){
            if(s[k]!='L') break;
            cnt++;
        }
        if(cnt==0) return false;
        if(cnt==1){
           return helper(p,s,i+1,j+1); 
        }
        if(cnt==2){
            return helper(p,s,i+1,j+1) || helper(p,s,i+1,j+2);
        }
    }
    if(p[i]=='R'){
        int cnt = 0;
        for(int k = j;k<min(m,j+2);k++){
            if(s[k]!='R') break;
            cnt++;
        }
        if(cnt==0) return false;
        if(cnt==1){
           return helper(p,s,i+1,j+1); 
        }
        if(cnt==2){
            return helper(p,s,i+1,j+1) || helper(p,s,i+1,j+2);
        }
    }

}
int main(){
    ll t;
    cin>>t;
    while(t--){
        string p,s;
        cin>>p>>s;
        cout<<(helper(p,s,0,0)? "yes":"no")<<endl;

    }
}