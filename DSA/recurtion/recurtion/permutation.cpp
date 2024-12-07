#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
void permutation(string s,string str,vector<int>& ans){
    int n=str.length();
    if(n==0){
        ans.push_back(stoi(s));
        return;
    }
    for(int i=0;i<n;i++){
        char ch= str[i];
        permutation(s+ch,str.substr(0,i)+str.substr(i+1),ans);
        // permutation(s,str.substr(0,i)+str.substr(i+1));

    }
}
int main(){
    int n=123;
    string s= to_string(n);
    // s= "123"
    vector<int> ans;
    permutation("",s,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}