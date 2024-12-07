#include<iostream>
#include<string>
using namespace std;
void binarystring(string s,int idx,int n){
    if(idx==n){
        cout<<s<<endl;
        return;
    }
    if(s.length()==0){
        binarystring(s+'0',idx+1,n);
        binarystring(s+'1',idx+1,n);

    }
    //binarystring(s+'0',idx+1,n);
    else if(s[idx-1]=='1'){
        binarystring(s+'0',idx+1,n);
    }
    else{
        binarystring(s+'0',idx+1,n);
        binarystring(s+'1',idx+1,n);

    }
    return;
}
int main(){
    binarystring("",0,4    );

}