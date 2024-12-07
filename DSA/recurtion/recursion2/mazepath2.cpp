#include<iostream>
using namespace std;
int maze(int sr,int sc,int er ,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rw=maze(sr,sc+1,er,ec);
    int dw=maze(sr+1,sc,er,ec);
    int tw=rw+dw;
    return tw;
}
void print(int sr,int sc,int er ,int ec,string s){
    if(sr>er || sc>ec) return ;
    if(sr==er && sc==ec) cout<<s<<endl;
    print(sr,sc+1,er,ec,s+'R');
    print(sr+1,sc,er,ec,s+'D');
 }
int main(){
    print(0,0,2,2,""); 
}