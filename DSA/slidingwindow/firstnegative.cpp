#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,-3,4,4,-7,-1,4,-2,6};
    int n=sizeof(arr)/4;
    vector<int> v(arr,arr+n);
    vector<int> ans;
    int k=2 ;
    int p=0;
    for(int i=0;i<k;i++){
        if(v[i]<0){
            p=i;
            break;
        }
    }
    int i=0;
    int j=k-1;
    while(j<n){
        if(i<=p) ans.push_back(v[p]);
        else{
            for(p=i;p<=j;p++){
                if(v[p]<0) break;
            }
            ans.push_back(v[p]);
        }
        i++;
        j++;
    }
    int m=ans.size();
    for(int g=0;g<m;g++){
        cout<<ans[g]<<" ";
    }


}