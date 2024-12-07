#include<iostream>
#include<vector>
using namespace std;
class stack{
private:
    static int idx;
    int arr[10];
public:
    void push(int val){
        if(idx==-1){
            arr[0]=val;
            idx=0;
        }
        else{
            arr[++idx]=val;
        }
    }
    void pop(){
        if(idx==-1){
            cout<<"stack is empty !"<<endl;
        }
        else{
            idx--;
        }
    }
    void top(){
        if(idx==-1){
            cout<<"stack is empty !"<<endl;
        }
        else{
            cout<<arr[idx]<<endl;
        }
    }
    void size(){
        if(idx==-1){
            cout<<0<<endl;
        }
        else{
            cout<<idx+1<<endl;
        }     
    }
};
int stack::idx=-1;
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.size();
    st.top();
    st.pop();
    st.size();
    st.top();
    st.pop();
    st.size();
    st.top();
    st.pop();
    st.size();
    st.top();
    st.pop();
    st.size();
    st.top();
    st.pop();
    st.size();
    st.top();
    st.pop();
    st.size();
    st.top();
    st.pop();
    st.size();

}