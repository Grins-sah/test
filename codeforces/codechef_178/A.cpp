#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int s = x+y;
        int diff = abs(x-y);
        if(diff!=0)cout<<min(x,y)*2+diff*2-1<<endl;
        else cout<<min(x,y)*2<<endl;
	}

}
