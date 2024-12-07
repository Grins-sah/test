#include<iostream>
#include<vector>
// tc =nkog(n);

using namespace std;
void product(vector<int>& v,int idx,int& count,vector<int> temp,int mup){
    int n=v.size();
    int m=temp.size();
    if(m==3){
        int pro =temp[0];
        for(int i=1;i<3;i++){
            pro*=temp[i];
        }
        
        if(pro==mup){
            count++;
            for(int i=0;i<3;i++){
                cout<<temp[i]<<" ";
            }
            cout<<endl;
        }
    }
    if(idx==n) return;
    for(int i=idx;i<n;i++){
        int x=v[i];
        temp.push_back(x);
        i++;
        product(v,i,count,temp,mup);
        i--;
        temp.pop_back();
    }

}
int main(){
    int arr[]={5,3,20,10,1,4,2};
    int n=sizeof(arr)/4;
    vector<int> v(arr,arr+n);
    int count=0;
    vector<int> temp;
    int idx=0;
    product(v,idx,count,temp,60);
    cout<<count;

}