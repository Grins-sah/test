#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
    int rev(int n){
        int ans=0;
        while(n>0){
            ans*=10;
            int a = n%10;
            ans+=a;
            n/=10;
        }
        return ans;
    }
    string RLE(string s){
        int n = s.length();
        string str= "";
        int count=1;
        sort(s.begin(),s.end());
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]) count++;
            else{
                str=str+to_string(count)+s[i];
                count=1;
            }
        }
        if(count==1) str=str+to_string(count)+s[n-1];
        return str;
    }
    void helper(vector<int>& v,string s,string str){
        if(str.length()==0) return; 
        int num = 0;
        if(s.length()!=0 )num = stoi(s);
        if(num!=0)v.push_back(num);
        for(int i=0;i<str.length();i++){
            helper(v,s+str[i],str.substr(0,i)+str.substr(i+1));
        }
    }
int main(){
        vector<int> v;
        helper(v,"","1203");

        cout<<rev(100);
}