#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    vector<int> v(3);
	    v[0]=x;
	    v[1]=y;
	    v[2]=z;
	    sort(v.begin(),v.end());
	    reverse(v.begin(),v.end());
	    int mi = v[2];
	    int sum = mi+((v[1])/2)*2;
	    if(sum>v[1]) cout<<sum<<endl;
	    else cout<<v[1]<<endl;
	}

}
