#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    // c++ we by default have max heap but in java we have min head 
    // priority queue is same as heap meaning is same 
    pq.push(10);
    pq.push(9);
    pq.push(15);
    pq.push(0);
    pq.push(52);
    pq.push(-8);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    priority_queue<int ,vector<int>,greater<int> > pq1;
    pq1.push(-1);
    pq1.push(0);
    cout<<pq1.top();



    
}

