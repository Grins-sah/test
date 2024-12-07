#include<iostream>
#include<algorithm>
using namespace std;
void solve(string str1,string str2){
    int n =str1.length();
    int m = str2.length();
    sort(str1.begin(),str2.end());
    sort(str1.begin(),str2.end());
    transform(str1.begin(),str1.end(),str1.begin(),::tolower);
    transform(str2.begin(),str2.end(),str2.begin(),::tolower);
    if(m<n) cout<<"NO"<<endl;
    for(int i=0;i<m;i++){
        if(str2[i]!=str1[i]){
            cout<<"NO"<<endl;
            return ;
        }
    }
    cout<<"YES"<<endl;
    return ;
    


}
int main(){

}