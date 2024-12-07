#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
        int heights []={2,4};

        int n =2;
        vector<int> Nse(n,n);
        vector<int> Pse(n,-1);
        vector<int> ans(n,0);
        stack<int> st;
        stack<int> gt;
        for(int i=0;i<n;i++){
            while(st.size()!=0 && heights[st.top()]>=heights[i]) st.pop();
            if(st.size()!=0) Pse[i]=st.top();
            st.push(i);
        }
        for(int i=n-1;i>=0;i--){
            while(gt.size()!=0 && heights[gt.top()]>=heights[i]) gt.pop();
            if(gt.size()!=0) Nse[i]=gt.top();
            gt.push(i);
        }
        int mx=0;
        for(int i=0;i<n;i++){
            ans[i]=heights[i]*(Nse[i]-Pse[i]-1);
            if(ans[i]>mx) mx=ans[i];
        }
        cout<<mx;
}
