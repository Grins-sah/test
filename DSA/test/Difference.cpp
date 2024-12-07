#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int difference(int n, int m){
   int sum=0;
   int sum2=0;
   if (m!=0){}
   for(int i=0;i<=n;i++){
    if(i%m==0) sum+=i;
    else sum2+=i;
   }
   return sum2-sum;
}
int main(){
    int m=0;
    cout<<difference(30,6);

}