#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        string temp = s;
        reverse(temp.begin(),temp.end());
        if(s<temp){
            cout<<"yes"<<endl;
            continue;
        }
        if(k==0){
            cout<<"no"<<endl;
            continue;
        }
        
        bool flag = false;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                swap(s[i], s[j]);
                temp = s;
                reverse(temp.begin(), temp.end());
                if(s < temp){
                    flag = true;
                    break;
                }
                swap(s[i], s[j]);
            }
            if(flag) break;
        }
        
        if(flag) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}