#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int countChar(string data,char coder){
    int answer=0;
    int n=data.length();
    for(int i=0;i<n;i++){
        if(data[i]==coder) answer++;

    } 
    return answer;

}
int main(){
    string s="akjshjsfhajklfhkjhfskaaa";

    char ch = 'a';

    
    cout<<countChar(s,ch);   
}