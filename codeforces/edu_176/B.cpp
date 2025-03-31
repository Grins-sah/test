//grinssah9
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k ;
        cin>>n>>k;
        vector<int> v(n);
        for(int i =0;i<n;i++) cin>>v[i];
        priority_queue<pair<int,int>> pq;
        ll sum = 0;
        for(int i = 0;i<n;i++){
            pq.push({v[i],i});
        }
        int left = INT_MAX;
        int right = INT_MIN;
        int prev = 0;
        int prevR = 0;
        int prevl = 0;
        for(int i = 0;i<k;i++){
            sum+=pq.top().first;
            prevR = right;
            prevl = left;
            left = min(pq.top().second,left);
            right = max(pq.top().second,left);
            prev = pq.top().second;
            pq.pop();
        }
        if(k==n){
            cout<<sum<<endl;
            continue;
        }
        if(pq.top().second>left && pq.top().second<right){
            sum+=pq.top().first;
            cout<<sum<<endl;
            continue;
        }
        if(min(prevl,pq.top().second)<prev && prev<max(prevR,pq.top().second)){
            sum+=pq.top().first;
            cout<<sum<<endl;
            continue;
        }

        if(left!=0 && right!=n-1) sum+=max(v[0],v[n-1]);
        else if(left==0){
            sum+=v[n-1];
        }else sum+=v[0];
        cout<<sum<<endl;

    }
}