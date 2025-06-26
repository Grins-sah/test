#include<bits/stdc++.h>
using namespace std;
// LC 3589
class Solution {
public:
    bool prime[50001];
    void seive(){
        fill(prime,prime+50000,true);
        prime[0]=false;
        prime[1]=false;
        for(int i = 2;i<=sqrt(50000);i++){
            if(prime[i]){
                for(int j = i+i;j<=50000;j+=i){
                    prime[j]=false;
                }
            }
        }
    }
    int primeSubarray(vector<int> nums, int k) {
        int n = nums.size();
        seive();
        int l = 0;
        int cnt = 0;
        bool res = false;
        multiset<int> m;
        int ans = 0;
        deque<int> q;
        cout<<prime[nums[0]]<<" "<<prime[nums[1]]<<" "<<prime[nums[2]]<<endl;
        for(int r = 0;r<n;r++){
            if(prime[nums[r]]){
                cnt++;
                q.push_back(r);
                m.insert(nums[r]);
            }
            while(l<=r && m.size()!=0 && *m.rbegin()-*m.begin()>k){
                if(prime[nums[l]]){
                    cnt--;
                    if(q.size()!=0) q.pop_front();
                    m.erase(m.find(nums[l]));
                }
                l++;
            }
            if(cnt>=2){
                if(q.size()!=0){
                    auto x = q.at(q.size()-2);
                    ans+=(x-l+1);
                }
            }
            cout<<ans<<" "<<l<<endl;
        }

        return ans;

        
    }
};
int main(){
    Solution s;
    cout<<s.primeSubarray({2,3,5,7},3);
}