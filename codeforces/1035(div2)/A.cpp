#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int a,b,x,y;
    cin>>a;
    cin>>b;
    cin>>x;
    cin>>y;
    if(b==a-1 && a%2==1){
        cout<<y<<endl;
        return;
    }
    if(a>b){
        cout<<-1<<endl;
        return;
    }
    int even = 0;
    int odd = 0;
    for(int i = a;i<b;i++){
        if(i%2==0) even++;
        else odd++;

    }
    cout<<even*(min(x,y))+odd*x<<endl;
    


}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}