#include<iostream>
#include<vector>
// decreasing order merge sort
using namespace std;
void merge(vector<int>& res,vector<int> a,vector<int>b){
    int n=a.size();
    int m=b.size();
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(a[i]>b[j]) res[k++]=a[i++];
        else res[k++]=b[j++];
    }
    if(i==n) while(j<m) res[k++]=b[j++];
    else while(i<n) res[k++]=a[i++];
}
void mergeSort(vector<int>& v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[n1+i];
    }
    mergeSort(a);
    mergeSort(b);
    merge(v,a,b);
    a.clear();
    b.clear();
}
int main(){
    int arr[]={5,3,6,4,2,1};
    int n=sizeof(arr)/4;
    vector<int> v(arr,arr+n);
    mergeSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}