#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x,y;
    cin>>x>>y;
    int z = 100-x;
    if(z%y==0){
        if(z/y>10) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }else{
        if((z/y) +1>10) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;  
    }


}
