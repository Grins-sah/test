#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        string word="avghdcyinjmbopwtrfslzkuxeq";
        int n=word.length();
        vector<int> res(26,0);
        for(int i=0;i<n;i++){
            int ascii=(int)(word[i]);
            int idx=ascii-97;
            res[idx]=res[idx]+1;
        }
        sort(res.begin(),res.end());
        reverse(res.begin(),res.end());
        for(int i=0;i<26;i++){
            cout<<res[i]<<" ";
        }
        int k=1;
        int count=1;
        int push=0;
        int i=0;
        while(res[i]!=0 && i<26){
            push=push+(count*res[i]);
            k++;
            i++;
            if(k==9){
                k=1;
                count++;
            }

        }
        cout<<push;
}