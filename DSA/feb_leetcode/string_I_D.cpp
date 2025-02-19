#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// we have to do it again i have not done it

string smallestNumber(string p) {
    int n = p.size();
    string ans = "";
    int i = 0;
    int count = 1;
    while(i<n){
        string temp = "";
        if(p[i++]=='I') ans+=to_string(count++);
        else while(i<n&&p[i++]=='D'){
            temp=to_string(count++)+temp;
        }
        ans+=temp;
    }
    return ans;

    
}
int main(){
    cout<<smallestNumber("IIIDIDDD");
}