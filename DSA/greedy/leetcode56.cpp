#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>> v) {
        int n = v.size();
        vector<vector<int>> ans;
        sort(v.begin(),v.end());
        int timeSt = v[0][0];
        int timeEd = v[0][1];
        for(int i=1;i<n;i++){
            if(timeSt!=INT_MAX && timeEd != INT_MIN && (v[i][1]>=timeEd && v[i][0]<=timeEd) || (v[i][0]>=timeSt && v[i][1]<=timeEd) || (v[i][1]>=timeSt && v[i][0]<=timeSt) || (v[i][1]+1==timeSt || v[i][0]+1==timeEd)){
                if(v[i][0]<timeSt) timeSt = v[i][0];
                if(v[i][1]>timeEd) timeEd = v[i][1];

            }else{
                ans.push_back({timeSt,timeEd});
                timeSt = v[i][0];
                timeEd = v[i][1];
            }
        }
        ans.push_back({timeSt,timeEd});
        return ans;

        
    }
};
int main(){
    Solution x;
    for(auto ele : x.merge({{1,4},{4,5}})){
        for(auto ele2: ele){
            cout<< ele2<<" ";
        }
        cout<<endl;
    }
}