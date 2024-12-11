#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
     bool cmp (vector<int>& v1,vector<int>& v2){
        float x1 = (v1[2]*1.0)/((v1[1]-v1[0]+1)*1.0);
        float x2 = (v2[2]*1.0)/((v2[1]-v2[0]+1)*1.0);
        if(x1==x2) return v1[1]-v1[0]<v2[1]-v2[0];
        return x1>x2;
    }
    int maxTwoEvents(vector<vector<int>> v) {
        int n = v.size();
        sort(v.begin(),v.end(),cmp);
        int ans = 0;
        int count=0;
        int timeSt = 1;
        int timeEd = 1;
        for(int i=0;i<n;i++){
            if((v[i][1]>=timeEd && v[i][0]<=timeEd) || (v[i][0]>=timeSt && v[i][1]<=timeEd) || (v[i][1]>=timeSt && v[i][0]<=timeSt) || ((v[i][1]+1==timeSt || v[i][0]+1==timeEd)  && count>1)) continue;
            ans+=v[i][2];
            if(v[i][1]+1==timeSt || v[i][0]+1==timeEd) count++;
            if(timeSt>v[i][0] || timeSt==1)timeSt = v[i][0];
            if(timeEd <v[i][1])timeEd = v[i][1];

        }
        return ans;

    }
int main(){
    maxTwoEvents({{1,3,2},{4,5,2},{2,4,3}});
}