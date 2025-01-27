#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0;i<n;i++) cin>>v[i];
        int sum = 0;
        int ans=0;
        for(int i = 0;i<n;i++){
            int temp = 0;
            sum+=v[i];
            while(sum%2==0){
                temp = 1;
                sum = sum/2;
            }
            ans+=temp;

        }
        cout<<ans<<endl;
    }
}