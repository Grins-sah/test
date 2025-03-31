#include<iostream>
#include<stack>
#include<vector>
using namespace std;
// i have thought of my approch wrong in nge element and this was a great mistake 
// i have been very disgraced by my behavior toward my dsa practice i am very sorry for my doings
// i regret it very much
int main(){
    int arr[]={4,1,2,5,4,3,4,8,2,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    stack<int> st;
    vector<int> ans1(n,-1);
    int temp = arr[n-1];
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
            
    }
    for(int i = n-2;i>=0;i--){
        if(temp>=arr[i]) ans1[i]= temp;
        if(arr[i]>temp) temp = arr[i];

    }
    for(int ele: ans){
        cout<<ele<<" ";
    }
    cout<<endl;
    for(int ele: ans1){
        cout<<ele<<" ";
    }


}