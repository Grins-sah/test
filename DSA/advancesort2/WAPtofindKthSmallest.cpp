#include<iostream>
#include<vector>
using namespace std;
int partition(int v[],int st,int ed,int k){
    //if(st==ed && st==k) cout<<v[k];
    int pe=v[(st+ed)/2];
    int count=0;
    for(int i=st;i<=ed;i++){
        if(i==(st+ed)/2) continue;
        if(pe>v[i]) count++;
    }
    int idx=st+count;
    swap(v[(st+ed)/2],v[idx]);
    if(idx==k-1){
        cout<<v[idx]<<" is the kth element";
        exit  ;
    }
    int i=st;
    int j=ed;
    while(j>idx && i<idx){
        if(pe>=v[i]) i++;
        if(pe<v[j]) j--;
        else if(pe<v[i] && pe>=v[j]){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    return idx;
}
void quickSort(int v[],int st,int ed,int k){
    // if(st==ed && st==k){
    //     cout<<v[k];
    //     return;
    // }
    if(st>=ed) return;
    int pi=partition(v,st,ed,k);
    quickSort(v,st,pi-1,k);
    quickSort(v,pi+1,ed,k);

}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n= sizeof(arr)/4;
    vector<int> v(arr,arr+n);
    quickSort(arr,0,n-1,5);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
