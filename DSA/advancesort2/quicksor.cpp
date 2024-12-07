#include<iostream>
#include<vector>
using namespace std;
int partition(int v[],int st,int ed){
    int idx=0;
    int count=0;
    int pi=(st+ed)/2;
    int pe=v[(st+ed)/2]; 
    for(int i=st ;i<=ed;i++){
        if(i==(st+ed)/2) continue;
        if(v[i]<pe ) count++;
    }  
    idx=st +count;
    swap(v[(st+ed)/2],v[idx]);
    if(st+count==pi) {
        return idx;

    }
    int i=st;
    int j=ed;
    while(i<idx && j>idx){
        if(v[i]<=pe) i++;
        if(v[j]>pe) j--;
        else if(v[i]>pe && v[j]<=pe){ 
            swap(v[i],v[j]);
            j--;
            i++;
        } 
    }  
    return idx;
}
void quickSort(int v[],int st,int ed){
    if(st>=ed) return;
    int pi=partition(v,st,ed);
    quickSort(v,st,pi-1);
    quickSort(v,pi+1,ed);

}
int main(){
    int arr[]={3,8,6,7,5,9,10};
    int n= sizeof(arr)/4;
    vector<int> v(arr,arr+n);
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}