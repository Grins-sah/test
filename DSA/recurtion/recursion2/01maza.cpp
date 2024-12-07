#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> print(vector<vector<int>> v,int row,int col){
    // row
    if(row<0 || col<0) exit;
    if(v[row][col]==0) exit;
    if(row==0 && col==0) return v;
    if(v[row][col-1]==1){
        print(v,row,col-1);
        for(int i=0;i<row;i++){
            v[i][col]=0;
        }
    }
    else if(v[row-1][col]==1){
        print(v,row-1,col);
        for(int i=0;i<col;i++){
            v[row][i]=0;

        }
    }
    else {
        v[row][col]=0;
    }
    return v;
}
int main(){
    vector<vector<int>> v;
    int n,m;
    cout<<"Enter the row";
    cin>>n;
    cout<<"Enter the columb";
    cin>>m;
    for(int i=0;i<n;i++){
        vector<int> temp;
        int y;
        for(int j=0;j<m;j++){
            cin>>y;
            temp.push_back(y);
        }
        v.push_back(temp);
    }
    vector<vector<int>> temp=print(v,n-1,m-1);
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }


}