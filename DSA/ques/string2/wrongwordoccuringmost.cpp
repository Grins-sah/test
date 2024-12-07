#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter the sentence : ";
    string s;
    getline(cin,s);
    stringstream ss(s);
    string temp;
    int mx=0;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    int count=1;
    sort(v.begin(),v.end());
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        mx=max(mx,count);
    }
    cout<<mx;
}