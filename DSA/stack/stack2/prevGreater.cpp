#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int arr[]={100,80,60,81,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> ans(n,-1);
    stack<int> st;
    for(int i=0;i<n;i++){
        while(st.size()!=0 && st.top()<=arr[i]) st.pop();
        if(st.size()!=0) ans[i]=st.top();
        st.push(arr[i]);
    }
    for(int ele: ans){
        cout<<ele<<" ";
    }
}