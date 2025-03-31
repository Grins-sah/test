#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int ans = v[0];
        bool res = ans%2;
        priority_queue<int> even;
        priority_queue<int> odd;
        for(int i = 1;i<n;i++){
            if(v[i]%2==0) even.push(v[i]);
            else odd.push(v[i]);
        }
        while(even.size()!=0 && odd.size()!=0){
            int x = even.top();
            int y = odd.top();
            even.pop();
            odd.pop();
            int mi = min(x,y);
            ans+=mi*2;
            if(y-mi>0){
                if((y-mi)%2==0) even.push(y-mi);
                else odd.push(y-mi);
            }
            if(x-mi){
                if((x-mi)%2==0) even.push(x-mi);
                else odd.push(x-mi);
            }

        }
        while(!res && odd.size()!=0){
            ans+=odd.top();
            res = !res;
            odd.pop();
        }
        while(res && even.size()!=0){
            ans+=even.top();
            even.pop();
        }


        cout<<ans<<endl;


    }
    
}