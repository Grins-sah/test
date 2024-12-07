#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>& q){
    for(int i=0;i<q.size();i++){
        int x=q.front();
        q.pop();
        cout<<x<<" ";
        q.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    q.push(0);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    int n = q.size();
    for(int i=0;i<n;i++){
        int x=q.front();
        q.pop();
        if(i%2 != 0 || i==0 ){
            q.push(x);
        }
    }
    display(q);

}