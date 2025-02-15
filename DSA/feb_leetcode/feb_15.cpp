#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <vector>
#include <functional>
#include<cmath>
using namespace std;

bool helper(int n,int i,int len){
    if(n==i) return true;
    if(n==0) return false;
    
    if(i<0) return false;
    bool res = false;
    for(int j = 1;j<len;j++){
        int x = n/pow(10,len-j);
        int y = pow(10,len-j);
        res = res || helper(n%(int)(y),i-x,len-j);
        res = res || helper(n,i,len-j);
    }
    return res;

}
int punishmentNumber(int n) {
    int sum = 0;
    for(int i = 1;i<=n;i++){
        int y = i*i;
        int len = 0;
        while(y>0){
            y/=10;
            len++;
        }
        bool x = helper(i*i,i,len);
        if(x){
            sum+=i*i;
        }

    }
    return sum;      
}