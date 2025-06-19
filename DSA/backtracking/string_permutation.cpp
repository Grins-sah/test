//given a string of non repeating charecters 
//output all permutaion
// one more approch of substr approch 
#include<bits/stdc++.h>
using namespace std;
unordered_set<char> st;
void permutation(string& s,string temp){
    int n = s.length();
    if(temp.length()>=n){
        cout<<temp<<endl;
        return;
    }
    for(int i = 0;i<n;i++){
        if(st.count(s[i])==0){
            st.insert(s[i]);
            permutation(s,temp+s[i]);
            st.erase(s[i]);
        }
    }
}
void permutation(string& s,int i){
    int n = s.length();
    if(i>=n-1){
        cout<<s<<endl;
        return;
    }
    for(int j = i;j<n;j++){
        swap(s[j],s[i]);
        permutation(s,i+1);
        swap(s[i],s[j]);
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
void permuatation_with_repeat(string& s,int i){
    int n = s.length();
    if(i>=n-1){
        cout<<s<<endl;
        return ;
    }
    unordered_set<char> stt;
    for(int j = i;j<n;j++){  
        if(stt.count(s[j])){
            continue;
        }
        swap(s[i],s[j]);
        stt.insert(s[i]);
        permuatation_with_repeat(s,i+1);
        swap(s[i],s[j]);


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
        permutation_substr(s,"");       // substr methode
        permutation(s,"");              // set methode of backtracking
        permutation(s,0);               // swap without repeatation
        permuatation_with_repeat(s,0);  // swap with repeatation
    }

}