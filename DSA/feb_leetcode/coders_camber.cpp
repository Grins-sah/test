#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <vector>
#include <functional>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0;i<n;i++)cin>>v[i];
        int idx = 0;
        for(int i = 1;i<n;i++){
            if(v[i]>v[idx]) idx = i;
        }
        int ans = v[idx];
        for(int i = 0;i<n;i++){
            ans = ans& v[i];
        }
        cout<<ans<<endl;
    }

}