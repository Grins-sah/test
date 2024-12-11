#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
    int numRabbits(vector<int> ans) {
        int n = ans.size();
        int result = 0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[ans[i]]++;
        }
        for(auto ele : mp){
            int val = ele.second;
            int no = ele.first;
            mp.erase(no);
            result = no*(val+1)-no*val;
        }
        cout<< result;
    return 0;
        
    }
int main(){
    numRabbits({1,1,2});
}