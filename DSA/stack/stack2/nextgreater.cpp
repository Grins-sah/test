#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={4,1,2,5,4,3,4,8,2,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while( st.size()!=0&& st.top()<arr[i]) st.pop();
        if(st.size()!=0&& st.top()>arr[i]){
            ans[i]=st.top();
            st.push(arr[i]);
        }
        else{
            ans[i]=-1;
            st.push(arr[i]); 
        }
        if(arr[i]<st.top()){
            ans[i]=st.top();
            st.push(arr[i]);
        }
            
    }
    for(int ele: ans){
        cout<<ele<<" ";
    }


}