#include<iostream>
#include<vector>
using namespace std;
int main(){
        string customers="YYNY";
        int n =customers.length();
        vector<int> sufY(n+1,0);
        vector<int> perN(n+1,0);
        sufY[n]=0;
        perN[0]=0;
        for(int i=0;i<n;i++){
            if(customers[n-i-1]=='Y'){
                sufY[n-i-1]=sufY[n-i]+1;
            }
            else{
                sufY[n-i-1]=sufY[n-i];
            }
        }
        for(int i=0;i<n;i++){
            if(customers[i]=='N'){
                perN[i+1]=perN[i]+1;
                //sufY[n-i-1]=sufY[n-i];
            }
            else{
                perN[i+1]=perN[i];

            }

        }
        vector<int> penality(n+1,0);
        for(int i=0;i<n+1;i++){
            penality[i]=sufY[i]+perN[i];
        }
        int min=INT_MAX;
        int idx=-1;
        for(int i=0;i<n+1;i++){
            if(penality[i]<min){
                min=penality[i];
                idx=i;
            }

        }
        cout<<idx;
}