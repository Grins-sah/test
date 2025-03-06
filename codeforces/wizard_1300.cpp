#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int resl,resr;
        for(int i = 0;i<n;i++) cin>>v[i];
        vector<bool> a(2001,false);
        int ans = INT_MIN;
        for(int i = 0;i<n;i++){
            int count = 0;
            int x = -1;
            if(a[v[i]]) continue;
            int l = i;
            for(int j = i+1;j<n;j++){
                if(v[i]>v[j]){
                    count++;
                    l =j;
                    if(count-x>ans){
                        ans = count-x;
                        resl=i;
                        resr = l;
                    }
                }else if(v[j]>v[i]){
                    x++;
                }
            }
            if(count-x>ans){
                ans = count-x;
                resl=i;
                resr = l;
            }

        }
        cout<<resl+1<<" "<<resr+1<<endl;
    }
}