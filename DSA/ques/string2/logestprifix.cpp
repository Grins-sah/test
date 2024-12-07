#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    vector<string> strs={"flower","flow","flight"};
    int n=strs.size();
    string result="";
    string temp;
    sort(strs.begin(),strs.end());
    for(int i=0;i<n-1;i++){

        for(int j=0;j<min(strs[i].length(),strs[i+1].length());j++){
            if(strs[i].substr(0,j)==strs[i+1].substr(0,j)){
                temp=strs[i].substr(0,j);
            }
        }
        result=temp;
    }
    cout<<result;
}