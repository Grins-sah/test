#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    int arr [] = {10,9,8,7,4,70,60,50};
    int k = 4;
    int n = 8;
    priority_queue<int,vector<int> ,greater<int> > pq;
    vector<int> v;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            v.push_back(pq.top());
            pq.pop();
        }

    }
    while(pq.size()!=0){
        v.push_back(pq.top());
        pq.pop();

    }
    for(int ele :v){
        cout<<ele<<" ";
    }

}