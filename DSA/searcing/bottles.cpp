#include<iostream>
#include<vector>
using namespace std;
int result(int n,int ex,long long count1,int exp){
        count1+=n;
        int rem = n%ex;
        exp+=n-rem;
        int div = exp/ex;
        int rem2=exp%ex;
        count1=count1+div;
        if(div+rem+rem2>=ex) result(rem,ex,count1,div+rem2+exp);
        else return count1;
        return count1;
}
int main(){
        int expt=0;
        long long count=0;
        int ans=result(12,3,count,expt);
        return ans;
}