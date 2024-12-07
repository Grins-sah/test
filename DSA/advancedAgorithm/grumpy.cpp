#include<iostream>
#include<vector>
using namespace std;
int satis(vector<int>& v,vector<int>& gr,int& mup,int& idx){
        int count=0;
        for(int i=idx;i<idx+mup;i++){
            if(gr[i]==1) count+=v[i];
        }
        return count;

    }
int main(){
    // int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int arr[]={1,0,1,2,1,1,7,5};
        int grr[]={0,1,0,1,0,1,0,1};
        int minutes=3;
        vector<int> customers(arr,arr+8);
        vector<int> grumpy(grr,grr+8);

        int n=customers.size();
        int m=grumpy.size();
        int max=0;
        int idx=-1;
        for(int i=0;i<=m-minutes;i++){
            if(satis(customers,grumpy,minutes,i)>=max){
                max=satis(customers,grumpy,minutes,i);
                idx=i;
            }
        }
        int mx=0;
        int i=0;
        while(i<m){
            if(i==m) break;
            if(i>=idx && i<idx+minutes){
                mx=customers[i]+mx;
                i++; 
            }
            else if(grumpy[i]==0) mx+=customers[i++];

        }
        cout<<mx;
}