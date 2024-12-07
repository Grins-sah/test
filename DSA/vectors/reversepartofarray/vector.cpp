#include<iostream>
#include<vector>
using namespace std;
void reversepart(int begin,int end,vector<int>& v){
    while(end>=begin){
        int temp=v[begin];
        v[begin]=v[end];
        v[end]=temp;
        begin++;
        end--;
    }
    return;
}
void display(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    cout<<"Enter the number of inputs : ";
    int n;
    cin>>n;
    cout<<"Enter the Elements in The Vector : ";
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        v[i]=y;

    }
    cout<<endl;
    cout<<"Enter the begin : ";
    int begin;
    cin>>begin;
    cout<<"Enter the end : ";
    int end;
    cin>>end;
    reversepart(begin,end,v);
    display(v);

}