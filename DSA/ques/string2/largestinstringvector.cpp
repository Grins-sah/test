#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter the number of element : ";
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string temp;
        cout<<"Enter:-";
        cin>>temp;
        v.push_back(temp);
    }
    int max=INT_MIN;
    string s;
    for(int i=0;i<v.size();i++){
        if(stoi(v[i])>=max){
            max=stoi(v[i]);
            s=v[i];
        }
    }
    cout<<max<<" "<<s;

}