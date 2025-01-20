#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int f(int i,int j,vector<int>& arr){
    if(i>=j) return 0;
    if(j==i+1) return 0;
    int ans = INT_MAX;
    for(int k = i+1 ; k< j; k++){
        ans = min(ans,f(i,k,arr)+f(k,j,arr)+arr[i]*arr[j]*arr[k]);
    }
    return ans;
}
int main(){
    int arr[] = {40,20,30,10,30};
    vector<int> v(arr,arr+5);
    cout<<f(0,4,v);
}