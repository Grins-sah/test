#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
// insertion sort
// time complexity
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
    for(int i=1;i<n;i++){
        int j=i;
        while(v[j]<v[j-1] && j>=1){
        //while(j>=1)
            // if(v[j]>=v[j-1]) break;
            // if(v[j]<v[j-1]){
            swap(v[j],v[j-1]);
            j--;
        }
        

    }
    for(int ele : v){
        cout<<ele<<" ";
    }
}