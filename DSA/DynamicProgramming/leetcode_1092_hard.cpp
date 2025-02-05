#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string dp[1005][1005];
    string helper(string& str1,string& str2,int i,int j){
        if(i>=str1.length()|| j>= str2.length()) return "";
        if(dp[i][j].length()!=0) return dp[i][j];
        string temp ="";
        if(str1[i]==str2[j]) temp = str1[i]+helper(str1,str2,i+1,j+1);
        string temp_2 = helper(str1,str2,i+1,j);
        if(temp_2.length()>temp.length()) temp = temp_2;
        string temp_3 = helper(str1,str2,i,j+1);
        if(temp_3.length()>temp.length()) temp = temp_3;
        return  dp[i][j] = temp;
    }
    string shortestCommonSupersequence(string str1, string str2) {
        string ans =    helper(str1,str2,0,0);
        int i = 0;
        int j = 0;
        int k = 0;
        int m = str1.length();
        int n = str2.length();
        int o = ans.length();
        string res = "";
        while(i<m && j<n){
            if(str1[i]!= str2[j]){
                if(str1[i]==ans[k]) res+=str2[j++];
                else if(str2[j]==ans[k]) res+=str1[i++];
                else{
                    res+=str1[i++];
                    res+=str2[j++];
                }
            }
            else if(k<o && ans[k]==str1[i]){
                res+=ans[k];
                k++;
                i++;
                j++;
            }else{
                res+=str1[i++]+str2[j++];
            }
        }
        if(i==m){
            while(j<n) res+=str2[j++];
        }
        else if(j==n){
            while(i<m) res+=str1[i++];
        }
        return res;

        
    }
int main(){
    cout<<shortestCommonSupersequence("bcacaaab","bbabaccc");
}