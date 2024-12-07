#include<iostream>
#  include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    cout<<"Enter the number of Element : ";
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the element :";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    vector<int> v1(n,0);
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int x;
        for(int j=0;j<n;j++){
            if(min>v[j] && v1[j]==0){
                min=v[j];
                x=j;
            }
        }
        v1[x]=1;
        v[x]=i;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}