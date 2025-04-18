//given a string of non repeating charecters 
//output all permutaion
// one more approch of substr approch 
#include<bits/stdc++.h>
using namespace std;
unordered_set<int> st;
void permutation(string& s,string temp){
    int n = s.length();
    if(temp.length()>=n){
        cout<<temp<<endl;
        return;
    }
    for(int i = 0;i<n;i++){
        if(st.count(i)==0){
            st.insert(i);
            permutation(s,temp+s[i]);
            st.erase(i);
        }
    }
}
void permutation_substr(string s,string temp){
    int n = s.length();
    if(n==0){
        cout<<temp<<endl;
        return;
    }
    for(int i = 0;i<n;i++){
            
            permutation_substr(s.substr(0,i)+s.substr(i+1),temp+s[i]);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        st.clear();
        permutation_substr(s,"");
        permutation(s,"");
    }

}