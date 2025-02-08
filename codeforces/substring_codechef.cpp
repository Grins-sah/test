#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0){
	    string a,b;
	    cin>>a;
	    cin>>b;
	    int n = a.length();
	    int m = b.length();
	    int ans = 0;
	    vector<int> v;
	    if(a==b){
            cout<<0<<endl;
            continue;
        }
        if(m>n){
            cout<<-1<<endl;
            continue;
        }
	    else{
            int k = n-1;
	        for(int i = m-1;i>=0;i--){
                bool flag = false;
	            for(int j = k;j>=0;j--){
	                if(b[i]==a[j]){
	                    v.push_back(j);
                        k=j-1;
                        flag = true;
	                    break;
	                    
	                }
	            }

	        }
	        if(v.size()!=m){
                cout<<-1<<endl;
                continue;
            }
	        ans = (n-1-v[0])*(m+1);
	        m--;
	        for(int i = 1;i<v.size();i++){
	            ans+=(v[i-1]-v[i]-1)*(m+1);
	            m--;
	        }
            ans+=v[v.size()-1]*(m+1);
	        cout<<ans<<endl;
	        
	    }
	}

}
