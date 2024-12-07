#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        int arr[]={-1,-8,0,5,-7};
        vector<int> satisfaction(arr,arr+5);
        sort(satisfaction.begin(),satisfaction.end());
        int n=satisfaction.size();
        vector<int> suf(n);
        suf[n-1]=satisfaction[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]+=satisfaction[i]+suf[i+1];
        }
        int idx=-1;
        for(int i=0;i<n;i++){
            if(suf[i]>=0){
                idx=i;
                break;
            }
        }
        if(idx==-1) return 0;
        else{
            int ans=0;
            for(int i=idx;i<n;i++){
                ans+= satisfaction[i]*(i+1-idx);
            }
            cout<<ans;
        }
}