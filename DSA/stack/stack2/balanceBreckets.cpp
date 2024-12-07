#include<iostream>
#include<stack>
using namespace std;
int main(){
    string arr[]={")()(","()()()","(())()","()())))"};
    for(int i=0;i<4;i++){
        bool flag=1;
        stack<char> st;
        for(int j=0;j<arr[i].length();j++){
            if(arr[i][j]=='(') st.push(arr[i][j]);
            else if(st.size()!=0 && st.top()=='(') {
                st.pop();
            }
            else if(st.size()==0){
                cout<<"false\n";
                flag=0;
                break;
            } 
        }
        if( flag==1 && st.size()==0) cout<<"True"<<endl;
    }

}