#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0;i<n;i++) cin>>v[i];
        unordered_map<int,int> m;
        for(int i = 0;i<n;i++){
            m[v[i]]++;
        }
        bool flag = false;
        int count = 0;
        int zero = 0;
        if(m.find(0)!=m.end()){
            zero+=m[0];
            m.erase(0);
        
        }
        for(auto ele : m){
            if(ele.second==1) count++;
            else flag = true;
        }

        if(flag==false && zero) cout<<n-zero +1<<endl;
        else if(flag==false) cout<<n<<endl;
        else cout<<count+1<<endl;
    }
}