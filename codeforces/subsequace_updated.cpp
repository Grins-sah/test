#include<vector>
#include<iostream>
#include<queue>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t-->0){
        long long n,l,r;
        cin>>n>>l>>r;
        l--;
        r--;
        vector<long long> v(n);
        for(long long i = 0;i<n;i++) cin>>v[i];
        priority_queue<long long> q;
        priority_queue<long long,vector<long long>,greater<long long>> right;
        priority_queue<long long,vector<long long>,greater<long long>> left;
        for(long long i = l;i<=r;i++) q.push(v[i]);
        for(long long i = 0;i<l;i++) left.push(v[i]);
        for(long long i = r+1;i<n;i++) right.push(v[i]);
        while(!right.empty() && right.top()<=q.top()){
            q.pop();
            q.push(right.top());
            right.pop();
        }
        long long sum = 0;
        while(!q.empty()){
            sum+=q.top();
            q.pop();
        }
        for(long long i = l;i<=r;i++) q.push(v[i]);
        while(!left.empty() && left.top()<=q.top()){
            q.pop();
            q.push(left.top());
            left.pop();
        }
        long long temp = 0;
        while(!q.empty()){
            temp+=q.top();
            q.pop();
        }
        sum = min(sum,temp);
        cout<<sum<<endl;
    }
}