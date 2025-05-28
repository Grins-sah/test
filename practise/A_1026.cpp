#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        // even + even
        int x = -1;
        for(int i = 0;i<n;i++){
            if(v[i]%2==0){
                x = i;
                break;
            }
        }
        int y = -1;
        for(int i = n-1;i>=0;i--){
            if(v[i]%2==0){
                y = i;
                break;
            }
        }
        int ans = n-1;
        if(y!=-1 && x!=-1){
            ans = min(ans,(x)+(n-y-1));
        }
        y = -1,x=-1;
        for(int i = 0;i<n;i++){
            if(v[i]%2==1){
                x = i;
                break;
            }
        }
        for(int i = n-1;i>=0;i--){
            if(v[i]%2==1){
                y = i;
                break;
            }
        }
        if(y!=-1 && x!=-1){
            ans = min(ans,(x)+(n-y-1));
        }
        cout<<ans<<endl;
    }
}