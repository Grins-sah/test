#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter the String : ";
    getline(cin,s);
    int count=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(i==0){
            if(s[i]==s[i+1]){
                count+=1;
                i++;
            }
        }
        if(i==n-1){
            if(s[i]==s[i-1]){
                count+=1;
                i++;
            }
        }
        else{
            if(s[i]==s[i-1] && s[i]==s[i+1]){
                count+=1;
                i++;
            }
        }
    }
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    cout<<endl<<count<<" "<<s;;
}