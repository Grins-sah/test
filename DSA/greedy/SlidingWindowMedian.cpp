#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
vector<double> medianSlidingWindow(vector<int> nums, int k) {
        vector<double> v;
        vector<double> ans;
        priority_queue<int> left;
        priority_queue<int,vector<int> ,greater<int> > right;
        int n = nums.size();
        for(int i=0;i<n;i++){
            v.push_back((double)nums[i]);
        }
        if(k==1) return v;
        int x=0,y=0;
        unordered_map<int,int> m;
        int temp = INT_MIN;
        for(int i=0;i<k;i++){
            if(left.size()==0 || nums[i]<left.top()){
                left.push(nums[i]);
                x++;
            }else{
                right.push(nums[i]);
                y++;
            }
            if(x>y+1){
                right.push(left.top());
                left.pop();
                x--;
                y++;
            }else if(y>x+1){
                left.push(right.top());
                right.pop();
                y--;
                x++;
            }
            if(x+y==k){
                if(x==y) ans.push_back(((double)left.top()+(double)right.top())/2.0);
                else if(x>y) ans.push_back((double)left.top());
                else ans.push_back((double)right.top());
            }
        }
        for(int i=k;i<n;i++){
            int rm = nums[i-k];
            if(left.size()==0 || nums[i]<left.top()){
                left.push(nums[i]);
                x++;
            }else{
                right.push(nums[i]);
                y++;
            }
            if(m.find(left.top())!= m.end()){
                m[left.top()]--;
                if(m[left.top()]==0) m.erase(left.top());
                left.pop();
            }
            else if(m.find(right.top())!= m.end()){
                m[right.top()]--;
                if(m[right.top()]==0) m.erase(right.top());
                right.pop();
            }
           
            if(x>0 && rm == left.top()){
                left.pop();
                x--;
            }else if(y>0 && rm == right.top()){
                right.pop();
                y--;
            }else if(rm<left.top()){
                m[rm]++;
                x--;
            }else{
                y--;
                m[rm]++;
            }
 if(x>y+1){
                right.push(left.top());
                left.pop();
                x--;
                y++;
            }else if(y>x+1){
                left.push(right.top());
                right.pop();
                y--;
                x++;
            }
           
            if(x>0 && rm == left.top()){
                left.pop();
                x--;
            }else if(y>0 && rm == right.top()){
                right.pop();
                y--;
            }else if(rm<left.top()){
                m[rm]++;
                x--;
            }else{
                y--;
                m[rm]++;
            }
            if(x+y==k){
                if(x==y) ans.push_back(((double)left.top()+(double)right.top())/2.0);
                else if(x>y) ans.push_back((double)left.top());
                else ans.push_back((double)right.top());
            }
        }

        return ans;
        
    }
int main(){
medianSlidingWindow({9,7,0,3,9,8,6,5,7,6},2);
}