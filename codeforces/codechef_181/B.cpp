#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x = 0;
        int y = 0;
        int ans = 1;
        for(int i = 0;i<n;i++){
            if(s[i]=='1') x++;
            else y++;
            if(x==y){
                ans=ans*2;
            }
        }
        cout<<ans<<endl;
    }
}
