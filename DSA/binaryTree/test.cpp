#include<iostream>
#include<vector>
using namespace std;

vector<int> nonDivisibleSubset(int k, vector<int> s) {
    int n=s.size();
    int mx=-1;
    for(int i=0;i<n;i++){
        int x=1;
        vector<int> v=s;
        for(int j=0;j<n;j++){
            if(j==i) continue;
            else{
                v[j]+=v[i];
                if(v[j]%k!=0) x++;
                cout<<v[j]<<" ";
                
            }

        }
        cout<<endl;

        if(x>=mx) mx=x;
    }
    return s;

}

int main(){
    int arr[]={278, 576, 496, 727, 410 ,124 ,338 ,149, 209, 702, 282, 718, 771, 575, 436};
    vector<int> v(arr,arr+15);
    nonDivisibleSubset(7,v);


}