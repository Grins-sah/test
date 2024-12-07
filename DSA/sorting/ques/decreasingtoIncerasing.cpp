#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<climits>
#include<cmath>
using namespace std;
int main(){
    cout<<"Enter the  number of Element : ";
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the element :";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<max(1,2);
    bool flag= true;
    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);
    for(int i = 0;i<n-1;i++){
        if(v[i]>=v[i+1]){
            kmin= max(kmin,(float)(v[i]+v[i+1])/2);

        }
        else{
            kmax=min(kmax,(float)(v[i]+v[i+1])/2);
        }
        if(kmin>kmax){
            flag= false;
            break;
        }
    }
    if(flag== false) cout<<-1;
    else{
        cout<<"Range of k is {"<<(int)kmin<<" "<<(int)kmax<<"}";
    }

}