#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int x = n.length();
        char y = '0';
        int i = 0;
        int ans = 0;
        int cnt = 0;
        bool flag = false;
        for(i = x-1;i>=0;i--){
            if( !flag &&n[i]>y  ){
                flag = true;
                ans = x-i-1;
            }
            else if(flag && n[i]>y) cnt++;
        }
        cout<<cnt + ans<<endl;


    }
}