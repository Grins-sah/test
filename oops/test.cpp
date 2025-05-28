#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++) cin>>v[i];
    int por = 1;
    int sum = 0;
    for(int i = 0;i<n;i++){
        por*=v[i];
        sum+=v[i];
    }
    if(por==0){
        cout<<sum*2<<endl;
        return 0;
    }
    if(por%3==0){
        cout<<sum+1<<endl;
        return 0;
    }
    cout<<(sum%2==0) ? sum : por+1;
    
}