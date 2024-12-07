#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[] = {10,20,-4,6,18,24,105,118};
    priority_queue<int> pq;
    for(int i=0;i<8;i++){
        pq.push(arr[i]);
        if(pq.size()>5) pq.pop();
    }
    cout<<pq.size()<<endl;
    cout<<pq.top();

}