#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<long long> v(n);
        for(long long i = 0;i<n;i++) cin>>v[i];
        if(n==1){
            cout<<v[0]<<endl;
            continue;
        }
        long long sum =0;
        for(long long i = 0;i<n;i++)sum+=v[i];
        for(long long i = 0;i<n;i++){
            long long temp = 0;
            reverse(v.begin()+i,v.end());
            vector<long long> temp2 = v;
            for(long long j = i+1;j<n;j++){
                v[j]=temp2[j]-temp2[j-1];
                temp+=v[j];
            }
            sum = max(sum,temp);
        }
        cout<<sum<<endl;
 

    }
}
