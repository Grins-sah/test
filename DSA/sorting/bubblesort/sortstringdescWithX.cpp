#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter the string : ";
    string s;
    getline(cin,s);
    int n=s.length();
    cout<<"Enter the target : ";
    char ch;
    cin>>ch;
    vector<char> strs;
    for(int i=0;i<n;i++){
        if(s[i]>ch){
            strs.push_back(s[i]);
        }
    }
    sort(strs.begin(),strs.end());
    reverse(strs.begin(),strs.end());
    int j=strs.size();
    for(int i=0;i<j;i++){
        cout<<strs[i];
    }
}