#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"enter the value to be sreached : ";
    int x;
    cin>>x;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    int y;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
             y=i;
        }
    }
    cout<<endl;
    cout<<"the last occurense of "<<x<<" is "<<y+1;
}