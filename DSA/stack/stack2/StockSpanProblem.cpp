#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int arr[]={100,80,60,81,70,60,75,85};
    stack<int> st;
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(n,-1);
    for(int i=0;i<n;i++){
        while(st.size()!=0 && arr[st.top()]<=arr[i]) st.pop();
        if(st.size()!=0) v[i]=st.top();
        st.push(i);
    }
    for(int ele : v){
        cout<<ele<<" ";
    }
    cout<<endl;
    vector<int> ans(n,1); 
    for(int i=1;i<n;i++){
        ans[i]=i-v[i];
    } 
    for(int ele : ans){
        cout<<ele<<" ";
    }


}