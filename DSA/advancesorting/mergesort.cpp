#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& res,vector<int> a,vector<int> b){
    int i=0;
    int j=0;
    int k=0;
    int n=a.size();
    int m=b.size();
    int x;
    for(x=0;x<min(n,m);x++){
        if(a[i]>=b[j]){
            res[x]=b[j];
            j++;
        }
        else{
           res[x]=a[i]; 
           i++;
        }
    }
    while(x<m+n){
        if(i==n){
            res[x]=b[j];
            x++;
            j++;
        }
        else{
            res[x]=a[i];
            i++;
            x++;
        }
    }
      
}
void mergeSort(vector<int>& v){
    int n=v.size();
    if(n==1) return;
    int n1= n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    // magic
    mergeSort(a);
    mergeSort(b);
    // merge; 
    merge(v,a,b);
    a.clear();
    b.clear(); 
     

}
int main(){
    int arr[]={2,1,6,7,1 ,12};
    int n=sizeof(arr)/4;
    vector<int> v(arr,arr+n);
    mergeSort(v);
    int m=v.size();
    for(int i=0;i<m;i++){
        cout<<v[i]<<" ";
    }
    
}