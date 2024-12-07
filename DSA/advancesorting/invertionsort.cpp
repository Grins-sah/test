#include<iostream>
#include<vector>
using namespace std;
int c=0; 
int invertion(vector<int>& a,vector<int>& b){
    int i=0,j=0,x=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            x+=a.size()-i;
            j++;
        }
        else i++;
    }
    return x;
}
void merge(vector<int>& res,vector<int> a,vector<int> b ){
    int i=0;
    int j=0;
    int k=0;
    int n=a.size();
    int m=b.size();
    while(i<n && j<m) if(a[i]>b[j]) res[k++]=b[j++];
    else res[k++]=a[i++];
    if(i==n) while(j<m) res[k++]=b[j++];
    else while(i<n) res[k++]=a[i++];
}
int mergeSort(vector<int>& v){
    int count=0;
    int n=v.size();
    if(n==1) return 0;
    int n1=n/2;
    int n2=n-n1;
    int i=0;
    int j=0;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    count+=mergeSort(a);
    count+=mergeSort(b);
    // invertion
    count+=invertion(a,b);
    merge(v,a,b);
    return count;
    
}
int main(){
    int arr[]={1,5,6,3,4,2};
    int n= sizeof(arr)/4;
    vector<int> v(arr,arr+n);
    //mergeSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<mergeSort(v);
     
}