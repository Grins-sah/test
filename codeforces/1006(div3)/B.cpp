#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    
        long long n;
        cin>>n;
        string s;
        cin>>s;
        long long x=0,y=0;
        long long a=0,b=0,c=0;
        string temp = "";
        for(long long i = 0;i<n;i++){
            if(s[i]=='-')x++;
            else y++;
        }
        bool flag = true;
        for(long long i = 0;i<x/2;i++){
            a++;
            temp+='-';
        }
        for(long long i = 0;i<y;i++){
            b++;
            temp+='_';
        }
        if(x%2==0){
            for(long long i = 0;i<x/2;i++){
                c++;
                temp+='-';
            }
        }else{
            for(long long i = 0;i<(x/2)+1;i++){
                c++;
                temp+='-';
            }
        }
        cout<<a*b*c<<endl;

    }

}