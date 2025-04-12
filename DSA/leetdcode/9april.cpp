#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long numberOfPowerfulInt(long long start, long long finish, int limit, string s) {
    int n = s.length();
    ll y = stoi(s);
    string fin = to_string(finish);
    int m = fin.length();
    if(start>finish) return 0;
    if(n==m){
        if(y==finish) return 1;
        return 0;
        
    }
    bool res = true;
    for(int i = 0;i<n;i++){
        cout<<s[i]<<" "<<fin[m-n+i]<<endl;
        if(s[i]>fin[m-n+i]){
            res = false;

            break;
        }
    }
    ll ans = 1;
    
    cout<<res<<"@"<<endl;
    if(res){
        if(fin[0]-'0'>limit){
            return pow(limit+1,m-n);
        }else{
            for(int i = 1;i<m-n;i++){
            ll mi = min(fin[i]-'0',limit);
            ans = ans*1LL*(mi+1);
            cout<<ans<<endl;
            }
        }

    }else{
        ll mi = min(fin[0]-'0'-1,limit);
        if(mi<=0){
            ans = 0;
            ll x = m-n;
            ans += pow(limit+1,x-1);
            return ans;
        }
        ans = ans*1LL*(mi+1);
        cout<<ans<<endl;
        ll x = m-n;
        ans *= pow(limit+1,x-1);
        cout<<x<<" "<<limit+1<<endl;
        return ans;

    }
    ll ans2 = 1;
    ll mi = min(fin[0]-'0'-1,limit);
    if(mi<=0){
        ans = 0;
        ll x = m-n;
        ans += pow(limit+1,x-1);
        return ans;
    }
    ans2 = ans2*1LL*(mi+1);
    cout<<ans2<<endl;
    ll x = m-n;
    ans2 *= pow(limit+1,x-1);
    cout<<x<<" "<<limit+1<<endl;
    return ans+ans2;

    
}
int main(){
    cout<<numberOfPowerfulInt(15398,1424153842,8,"101");

}