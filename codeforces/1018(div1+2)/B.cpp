#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int cnt1=0,cnt2=0;
        vector<int> l(n),r(n);
        vector<bool> l_(n,false),r_(n,false);
        sort(r.begin(),r.end());
        reverse(r.begin(),r.end());
        sort(l.begin(),l.end());
        reverse(l.begin(),l.end());
        ll left = 0;
        ll right = 0;
        for(int i = 0;i<n;i++) cin>>l[i];
        for(int i = 0;i<n;i++) cin>>r[i];
        ll sum = 0;
        for(int i = 0;i<n;i++){
            if(l[i]>r[i]){
                l_[i]=1;
                sum+=l[i];
                cnt1++;
            }else{
                r_[i]=1;
                sum+=r[i];
                cnt2++;
            }
        }
        ll sum1=0,sum2=0;
        for(int i = 0;i<n;i++){
            if(l_[i]){
                sum2+=r[i];
            }else{
                sum1+=l[i];
            }
        }
        if(sum1>sum2){
            for(int i = 0;i<n && k>1;i++){
                if(!r_[i]){
                    sum+=r[i];
                    k--; 
                }
                if(k==1) break;
            }
            sum+=sum1;
        }else{
            for(int i = 0;i<n && k>1;i++){
                if(!l_[i]){
                    sum+=l[i];
                    k--; 
                }
                if(k==1) break;
            } 
            sum+=sum2;
        }
        cout<<sum+1<<endl;
    }
}