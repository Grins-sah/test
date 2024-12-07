#include<iostream>
#include<string>
using namespace  std;
void ways(int row,int col,string s){
    if(row<0 || col<0) return;
    if(row==0 && col==0) cout<<s<<endl;
    ways(row-1,col,s+'D');
    ways(row,col-1,s+'R');

}
int main(){
    string s ="";
    ways(3,3,s);
}
