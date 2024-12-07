#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void display(stack<int> st){
    stack<int>rt= st;
    while(rt.size()!= 0){
        cout<<rt.top()<<endl;
        rt.pop();
    }
}
int main(){
    stack <int> st;
    cout<<"Enter at any index : ";
    int n;
    cin>>n;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    stack<int> gt;
    display(st);
    cout<<endl;
    while(st.size()> n){
        gt.push(st.top());
        st.pop();
    }
    gt.push(70);
    while(gt.size()!=0){
        st.push(gt.top());
        gt.pop();
    }
    display(st);



}