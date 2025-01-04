#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
    int BinaryInt(string s){
        int ans = 0;
        int mul = 1;
        if(s.length()==0) return 0;
        for(int i=s.length()-1;i>=0;i--){
            ans+=mul*((int)(s[i])-48);
            mul*=2;
        }
        return ans;
    }
    int maxScore(string s) {
        int n = s.length();
        int mx = INT_MIN;
        for(int i=1;i<n;i++){
            int x = BinaryInt(s.substr(0,i))+BinaryInt(s.substr(i));
            if(x>mx) mx = x;
            
            
        }
        return mx;
        
    }

int main(){
    cout<<maxScore("011101");
}