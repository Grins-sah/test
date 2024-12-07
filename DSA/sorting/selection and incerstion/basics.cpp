#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
//selection sort 
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
    cout<<endl;
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int x=-1;
        for(int j=i;j<n;j++){     
            if(v[j]<=min){
                min=v[j];
                x=j;
            }
        }
        swap(v[i],v[x]);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    for(int ele : v){
        cout<<ele<<" ";
    }

}