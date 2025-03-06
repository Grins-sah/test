#include <bits/stdc++.h>
using namespace std;
long long helper(long long n){
    long long count = 0;
    while(n>0){
        n/=2;
        count++;
    }
    return count;
}
void help(vector<long long>& v,long long m,long long n,long long count,long long sum){
    if(n+pow(2,count)>m) return;
        long long x = pow(2,count);
        v.push_back(sum+x);
        help(v,m,n,count+1,sum+x);
    
    
}

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--){
	    long long n,m;
	    cin>>n>>m;
	    if(n==m){
	        cout<<1<<endl;
	        cout<<n<<endl;
	        continue;
	    }
	    long long count = helper(n);
	    long long y = helper(m);    
	    long long ans = 1;
	    vector<long long> v = {(long long)n};
        while(n+pow(2,count)<=m){
            v.push_back(n+pow(2,count));
            count++;
        }
        if(v.size()==1){
            cout<<-1<<endl;
            continue;
        }
	    cout<<v.size()<<endl;
	    for(auto ele : v) cout<<ele<<" ";
	    cout<<endl;
	}

}
