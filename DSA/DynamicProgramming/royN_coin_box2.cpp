#include<iostream>
#include<vector>
using namespace std;
//problem
/**
* Roy has N coin boxes numbered from 1 to N.
* Every day he selects two indices [L,R] and adds 1 coin to each coin box starting from L to R (both inclusive).
* He does this for M number of days.
* 
* After M days, Roy has a query: How many coin boxes have atleast X coins.
* He has Q such queries.
* 
* Input:
* First line contains N - number of coin boxes.
* Second line contains M - number of days.
* Each of the next M lines consists of two space separated integers L and R.
* Followed by integer Q - number of queries.
* Each of next Q lines contain a single integer X.
* 
* Output:
* For each query output the result in a new line.
* 
* Constraints:
* 1 ≤ N ≤ 1000000
* 1 ≤ M ≤ 1000000
* 1 ≤ L ≤ R ≤ N
* 1 ≤ Q ≤ 1000000
* 1 ≤ X ≤ N
*/
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int> l(n,0);
    vector<int> r(n,0);
    vector<int> f(n+5,0);
    for(int i = 0;i<m;i++){
        int left,right;
        cin>>left>>right;
        f[left]++;
        f[right+1]--;

    }
    int q;
    cin>>q;
    int queries[q];
    for(int i =0;i<q;i++) cin>>queries[i];
    for(int i = 1;i<f.size();i++){
        f[i]+=f[i-1];
    }
    vector<int> c(10000005,0);
    for(int i = 0;i<=n;i++){
        c[f[i]]++;
    }
    for(int i = c.size()-2;i>=0;i--){
        c[i]=c[i]+c[i+1];
    }
    for(int ele:queries ){
        cout<<c[ele]<<endl;
    }
}