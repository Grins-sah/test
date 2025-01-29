#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int even = 0;
    int odd = 0;
    int i = 1;
    for(int i = 0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0) even++;
        else odd++;
    }
    if(odd==0){
        for(auto ele:v) cout<<ele<<" "<<endl;
    }
    else if(even){
        bool flag = true;
        even--;
        cout<<2<<" ";
        while(odd!=0 && even!=0){
            if(flag){
                odd--;
                cout<<1<<" ";
                flag = 0;
            }else{
                even--;
                cout<<2<<" ";
            }
        }
        if(odd!=0){
            while(odd-->0) cout<<1<<" ";
        }else if(even!=0){
            while(even-->0) cout<<2<<" "; 
        }
    }else{
        while(odd-->0) cout<<1<<" ";
    }


}