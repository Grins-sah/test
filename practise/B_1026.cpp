#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        stack<char> st;
        int x = 0;
        if(n==2){
            cout<<"no"<<endl;
            continue;
        }
        st.push('(');
        for(int i = 1;i<n;i++){
            if(s[i]=='('){
                st.push('(');
            }else if(st.size()!=0 && st.top()=='('){
                st.pop();
                if(st.size()==0){
                    x++;
                }
            }
        }
        if(x>1){
            cout<<"yes"<<endl;
            continue;
        }
        cout<<"no"<<endl;
    }
}