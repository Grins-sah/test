#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Enter the number of inputs : ";
    int n;
    cin>>n;
    cout<<"Enter the Elements in The Vector : ";
    for(int i=1;i<=n;i++){
        int y;
        cin>>y;
        v.push_back(y);

    }
    vector<int> b(v.size());
    for(int k=v.size()-1;k>=0;k--){
        b.push_back(v[k]);
    }
    cout<<"vector is : ";
    cout<<endl;
    for(int j=0;j<v.size();j++){
        cout<<b[j]<<" ";
    }
}