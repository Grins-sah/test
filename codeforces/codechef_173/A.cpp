#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0){
	    int n,m;
	    cin>>n>>m;
	    vector<int> v(n);
	    bool flag = false;
	    for(int i = 0;i<n;i++) cin>>v[i];
	    unordered_set<int> s;
	    for(int i = 0;i<m;i++){
	        int x;
	        cin>>x;
	        s.insert(x);
	        
	    }
	    for(int i = 0;i<n;i++){
	        if(s.find(v[i])!=s.end()){
	            cout<<1<<endl;
	            cout<<v[i]<<endl;
	            flag = true;
	        }
	        break;
	    }
	    if(flag) continue;
	    
	    
	}

}
    