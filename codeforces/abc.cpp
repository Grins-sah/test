#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag = false;
        if(n==1){
            cout<<"yes"<<endl;
            continue;
        }
        for(int i = 0;i<n-2;i++){
            if(s[i]==s[i+1]|| s[i]==s[i+2]){
                flag = true;
                break;
            }
        }
        if(s[n-2]==s[n-1]) flag = true;
        if(flag)cout<<"no"<<endl;
        else cout<<"yes"<<endl;
    }
}