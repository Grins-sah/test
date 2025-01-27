#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-- > 0){
	    int n,x;
	    cin>>n>>x;
	    vector<int> v(n);
	    for(int i =0;i<n;i++) cin>>v[i];
	    int s = n-1;
	    sort(v.begin(),v.end());
	    int A;
	    if(v[n-1]>v[0]+x*s) cout<<v[n-1]<<endl;
	    else cout<<v[0]+x*s<<endl;
	}
    cout<<INT_MAX;
    

}
