#include<vector>
#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
string repeatLimitedString(string s, int r) {
        int n = s.length();
        vector<pair<int,int> > v;
        unordered_map <char,int> m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        for(auto ele : m){
            v.push_back({ele.first,ele.second});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        string ans="";
        int i = 0;
        while(i<v.size()){
            bool flag = false;
            int count = 1;
            while(v[i].second>r){
                v[i].second = v[i].second - r;
                for(int k = 0;k<r;k++){
                    ans+=v[i].first;
                }
                if(i+count<v.size()){
                    if(v[i+count].second<=r){
                        for(int k = 0;k<1;k++){
                            ans+= v[i+count].first;
                        }
                        v[i+count].second-=1;
                        count++;
                    }
                    else{
                        for(int k = 0;k<1;k++){
                            ans+= v[i+count].first;
                        }
                        v[i+count].second-=1;
                    }
                }else{
                    flag = true;
                    break;
                }
            }
            if(v[i].second<=r && !flag){
                for(int k=0;k<v[i].second;k++){
                    ans+=v[i].first;
                }
            }
            i++;
        }
        return ans;
        
}
int main(){
    cout<<repeatLimitedString("zjhvjnozigzscndhechlixxddwcaptceprgljajhbwyctmqkjpmljtg",2);

}