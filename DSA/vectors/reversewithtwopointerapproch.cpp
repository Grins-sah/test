#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}  
int main(){
    cout<<"Enter the number of inputs : ";
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the Elements in The Vector : ";
    for(int i=1;i<=n;i++){
        int y;
        cin>>y;
        v[i-1]=y;

    }
    // method of reverse using while loop
    // int i=0;
    // int j=v.size()-1;
    // while(j>i){
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     j--;
    //     i++;
    // }
    // using for loop 
    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        j--;
        i++;
    }
    display(v);
}