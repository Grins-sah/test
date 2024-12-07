#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    cout<<"Enter The Size of window :-";
    int k;
    cin>>k;
    int arr[]={0,-1,-2,3,4,-5,6,4,7,-8};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    queue<int> q;
    for(int i = 0;i<n;i++){
        if(arr[i]<0) q.push(i);
    }
    for(int i = 0;i<=n-k;i++){
        while(q.size()>0 && q.front()<i) q.pop();
        if(q.size()==0 || q.front()>=i+k) v.push_back(0);
        else v.push_back(arr[q.front()]);
    }
    for(int ele : v){
        cout<<ele<<" ";
    }

}