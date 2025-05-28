#include<bits/stdc++.h>
using namespace std;
int main(){
    fstream file1 ,file2;
    file1.open("source.txt",ios::in);
    file2.open("source2.txt",ios::in);
    vector<int> arr1,arr2;
    string s;
    while(file1>>s){
        arr1.push_back(stoi(s));
    }
    while(file2>>s){
        arr2.push_back(stoi(s));
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    int i = 0;
    int j = 0;
    int n = arr1.size();
    int m = arr2.size();
    vector<int> arr3;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3.push_back(arr1[i++]);
        }else{
            arr3.push_back(arr2[j++]);
        }
    }
    if(i==n) while(j<m){
        arr3.push_back(arr2[j++]);
    }else while(i<n){
        arr3.push_back(arr1[i++]);
    }
    for(int i = 0;i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}