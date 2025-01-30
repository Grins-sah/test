#include<iostream>
#include<vector>
using namespace std;
vector<bool> sieve(int n){
    vector<bool> v(n+1,true);
    v[0]=0;
    v[1]=0;
    for(int i = 2;i*i<=n;i++){
        if(v[i]) for(int j =i*2;j<=n;j+=i) v[j]=0;
    }
    return v;
}
int main(){
    int t;
    cin>>t;
    vector<bool> v = sieve(200010);
    while(t-->0){
        int n;
        cin>>n;
        for(int i = 0;i<v.size();i++){
            if(v[i]){
                if(!v[i+n] && i!=n){
                    cout<<i<<endl;
                    break;
                }
            }
        }

    }
}