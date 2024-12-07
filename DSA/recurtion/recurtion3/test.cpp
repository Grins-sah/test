#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> luckyNumbers (vector<vector<int>>& matrix){
        vector<int> v(1,0);
        int n= matrix.size();
        int m= matrix[0].size();
        // max in col
        int mxc=INT_MIN;
        for(int i =0;i<m;i++){
            int x=0;
            for(int j=0;j<n;j++){
                if(matrix[j][i]>=mxc){
                    mxc=matrix[j][i];
                    x=j;
                }
            }
            int mir=INT_MAX;
            for(int k=0;k<m;k++){
                if(matrix[x][k]<mir) mir=matrix[x][k];
            }
            if(mxc==mir){
                v[0]=mir;
            }
        }
        return v;
}
int main(){
    vector<vector<int>> v1;
    vector<int> v(3);
    vector<int> v2(2,3);
    v1.push_back(v);
    v1.push_back(v2);
    cout<<luckyNumbers(v1)[0];
}



