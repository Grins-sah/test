#include<iostream>
#include<vector>
#include<cstring>
#include<iomanip>
using namespace std;
    string ans="";
    void helper(string str1,string str2){
        if(str1==str2){
            if(str1.length()>ans.length()) ans = str1;
            return;
        }
        int m = str1.length();
        int n = str2.length();
        if(m>n){
            for(int i = 0;i<m;i++){
                helper(str1.substr(0,i)+str1.substr(i+1),str2);
            }
        }else if(n>m){
            for(int i = 0;i<n;i++){
                helper(str1,str2.substr(0,i)+str2.substr(i+1));
            } 
        }else{
            for(int i = 0;i<n;i++){
                helper(str1,str2.substr(0,i)+str2.substr(i+1));
            } 
            for(int i = 0;i<m;i++){
                helper(str1.substr(0,i)+str1.substr(i+1),str2);
            }
        }

    }
    string shortestCommonSupersequence(string str1, string str2) {
        helper(str1,str2);
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
                else res+=str1[i++]+str2[j++];
            }
            else if(ans[k]==str1[i]){
                res+=ans[k];
                k++;
                i++;
                j++;
            }
        }
        if(i==m){
            while(j<n) res+=str2[j++];
        }
        else if(j==n){
            while(i<n) res+=str1[1++];
        }
        return res;
        
    }