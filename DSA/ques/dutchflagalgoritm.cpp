#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    cout<<"Enter the number of inputs : ";
    int n;
    cin>>n;
    cout<<"Enter the Elements in The Vector : ";
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        v[i]=y;

    }
    int lo=0;
    int mid=lo;
    int hi=v.size()-1;
    while(hi>mid || lo>hi || lo<v.size()){
        if(v[lo]==0) lo++;
        if(v[mid]==1){ mid=lo;
        mid++;}
        if(v[mid]==2 && v[hi]==1){v[mid]==1;
        v[hi]==2;
        hi--;
        mid++;
        }
        if(v[lo]==2 && v[hi]==0){v[lo]==0;
        v[hi]==2;
        hi--;
        lo++;
        }

    }
    display(v);

}