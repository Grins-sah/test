#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
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
void rotate(int k,vector<int>& v){
    reversepart(0,v.size()-k-1,v);
    reversepart(v.size()-k,v.size()-1,v);
    reversepart(0,v.size()-1,v);
    return;
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
    cout<<"enter the K value : ";
    int k;
    cin>>k;
    rotate(k,v);
    display(v);
}
