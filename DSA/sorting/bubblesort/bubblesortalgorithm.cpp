#include<iostream>
#include<vector>
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
    // sorting not optimized
    // for(int i=0;i<n-1;i++){
    //     int count=0;
    //     for(int j=0;j<n-1-i;j++){
    //         if(v[j]>v[j+1]){
    //             // int temp=v[j];
    //             // v[j]=v[j+1];
    //             // v[j+1]=temp;
    //             swap(v[j],v[j+1]);
    //             count+=1;
    //         }
    //     }
    //     if(count==0) break;
    // }

    
    // bubble sort optimized
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            
            if(v[j]>v[j+1]){
                // int temp=v[j];
                // v[j]=v[j+1];
                // v[j+1]=temp;
                swap(v[j],v[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}