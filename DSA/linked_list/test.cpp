#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int countCustomers(vector<int> bills){
    int n=bills.size();
    int count=0;
    for(int i=0;i<n;i++){
        int x=sqrt(bills[i]);
        if(x*x==bills[i])count++;
    }
    return count;
}

int main(){
    int arr[]={25,77,54,81,48,34};
    vector<int> bills(arr,arr+6);
    cout<<countCustomers(bills);

}