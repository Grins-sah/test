#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,2,3,3,3,3,3,4,4,5,8,9};
    int n=13;
    int x=20;
    int lo=0;
    int hi=n-1;
    bool flag= false;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        
        if(arr[mid]==x){
            for(int j=mid;j>=0;j--){
                if(arr[j]!=x){
                    cout<<j+1;
                    flag= true;
                    break;
                }
            }
        }
        if(flag==true) break;
        
        else if(x>arr[mid]) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false) cout<<-1;
    
}