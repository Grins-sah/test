#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
bool cmp(pair <int,int>&p1 ,pair <int,int>& p2){
    double r1 = (p1.first*1.0)/(p1.second*1.0);
    double r2 = (p2.first*1.0)/(p2.second*1.0);
    return r1>r2;   
}
int factionalKnapsack(vector<int> profit,vector<int> weights ,int n,int W){
    vector< pair<int,int> > arr;
    for(int i =0;i<n;i++){
        arr.push_back({profit[i],weights[i]});
    }
    sort(arr.begin(),arr.end(),cmp);
    for(auto e le : arr){
        cout<<ele.first<<" "<<ele.second<<endl;    
    }
    cout<<endl;
    int ans = 0;
    for(int i=0;i<n;i++){
            W-=arr[i].second;
             cout<<W<<endl;
            if(W<0){
                W+=arr[i].second;
                ans+=(((arr[i].first*1.0)*(W*1.0))/(arr[i].second*1.0));
                break; 
            }else{
                ans+=arr[i].first;
                cout<<ans<<endl;
            }
    }
    return ans;


}
int main(){
    cout<<factionalKnapsack({60,100,120},{10,20,30},3,50);

}