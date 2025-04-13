#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<long long> v(n);
	    for(int i =0;i<n;i++) cin>>v[i];
	    unordered_set<long long> s;
	    for(int i = 0;i<n;i++){
	        s.insert(v[i]);
	    }
	    sort(v.begin(),v.end());
	    long long  x = v[n-1];
	    long long y =v[n-1];
	    if(x<=0){
	      x = v[0];
	      y = v[0];
	    }
	    
	    x = x*1LL*2;
	    if(s.find(x)!=s.end()){
	        cout<<-1<<endl;
	        continue;
	    }
	    cout<<y<<" "<<y<<endl;
	    
	    
	}

}
