#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s="leetcode ";
    int n=s.length();
    int count=0;
    // for(int i=0;i<n;i++){
    //     char alpha=s[i];
    //     int temp=0;
    //     for(int j=0;j<=i;j++){
    //         if(s[j]==alpha){
    //             temp+=1;
    //         }
    //         if(temp>=count){
    //             count=temp;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     char alpha=s[i];
    //     int temp=0;
    //     for(int j=0;j<=i;j++){
    //         if(s[j]==alpha){
    //             temp+=1;
    //         }
    //         if(temp>=count){
    //             count=temp;
    //         }
    //     }
    //     if(count==temp){
    //         cout<<alpha<<" "<<count<<endl;
    //     }
    // } 
    vector<int> arr(26,0);
    for(int i=0;i<n;i++){
        char ch=s[i];
        int x=(int)ch;
        arr[x-97]+=1;
    }
    int mx=0;
    for(int i=0;i<26;i++){
        if(arr[i]>mx) mx=arr[i];
    }
    for(int i=0;i<26;i++){
        if(arr[i]==mx){
            int x=i+97;
            char ch =(char)x;
            cout<<ch<<" "<<mx<<endl;
        }
    }
}