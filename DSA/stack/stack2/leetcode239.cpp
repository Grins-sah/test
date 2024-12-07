#include<iostream>

#include<vector>
#include<stack>
using namespace std;
int main(){
        int nums[]={1,3,-1,-3,5,3,6,7};
        int n = 8;
        int k=3;
        stack<int> st;
        vector<int> Nge(n,n);
        st.push(n-1);
        vector<int> ans(n-k+1);
        for(int i=n-2;i>=0;i--){
            while(st.size()!=0 && nums[st.top()]<nums[i]) st.pop();
            if(st.size()!=0) Nge[i]=st.top();
            st.push(i);
        }
        int idx=-1;
        for(int i=0;i<n-k+1;i++){
            int compare=Nge[i];
            while( compare-i<k){
                idx=compare;
                compare=Nge[compare];   
            }
            ans[i]=nums[idx];
        }
        for(int ele: ans){
            cout<<ele<<" ";
        }
}