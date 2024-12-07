#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int lo = 0;
        int hi = n-1;
        int mid = (lo + hi)/2;
        while(lo<=hi){
            mid = (lo + hi)/2;
            if(arr[mid]>=arr[mid-1]) lo=mid;
            if(arr[mid]>=arr[mid+1]) hi =mid;
            if(lo==mid && mid==hi) break;

        }
        return lo;
    }
int main(){
    vector<int> arr={0,1,2,1,2};
    cout<<peakIndexInMountainArray(arr);

}