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
    cout<<"Enter the Elements in The Vector : ";
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        v[i]=y;

    }
    int lo,mid,hi;
    lo=0;
    mid=0;
    hi=n-1;
    while(hi>=mid){
        if(v[mid]==2){
            int temp=v[hi];
            v[hi]=v[mid];
            v[mid]=temp;
            hi--;
        }
        else if(v[mid]==0){
            int temp=v[mid];
            v[mid]=v[lo];
            v[lo]=temp;
            lo++;
            mid++;
        }
         else if(v[mid]==1){
            mid++;
        }

    }
    display(v);

}