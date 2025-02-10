#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        string temp;
        cin>>temp;
        unordered_map<char,int> m;
        int ans = temp.length();
        bool flag = false;
        for(int i = 0;i<temp.length()-1;i++){
            if(temp[i]==temp[i+1]){
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<1<<endl;
        }else{
            cout<<temp.length()<<endl;
        }
    }
}