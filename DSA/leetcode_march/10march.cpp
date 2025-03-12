#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long countOfSubstrings(string w, int k) {
    ll ans = 0;
    int n = w.size();
    ll i = 0;
    ll j = 0;
    unordered_map<char,int> m;
    queue<ll> q;
    int x = 0;
    if(k==0){
        for(int i = 0;i<n;i++){
            if
            (
            w[i]=='i'|| 
            w[i]=='a' || 
            w[i]=='o' || 
            w[i]=='u' || 
            w[i]=='e' 
            ){
              m[w[i]]++;
              if(m.size()==5) ans++;
              q.push(i);
            }
            else{
                while(q.size()!=0){
                    int y = q.front();
                    q.pop();
                    m[w[y]]--;
                    if(m[w[y]]==0) m.erase(w[y]);
                    if(m.size()==5) ans++;
                }
            }

        }
        while(q.size()!=0){
            int y = q.front();
            q.pop();
            m[w[y]]--;
            if(m[w[y]]==0) m.erase(w[y]);
            cout<<m.size()<<endl;
            if(m.size()==5) ans++;
        }
        return ans;
    }
    j = 0;

    while(i<n){
        if(
        w[i]=='i'|| 
          w[i]=='a' || 
          w[i]=='o' || 
          w[i]=='u' || 
          w[i]=='e' ){
            m[w[i]]++;
            x++;
        }
        q.push(i);
        // "aadieuoh"
        while(i-j+1-x>k && q.size()!=0){
            j = q.front();
            if(m.find(w[j])!=m.end()){
                m[w[j]]--;
                x--;
                if(m[w[j]]==0) m.erase(w[j]);
            }
            j++;
            cout<<j<<"g"<<i<<endl;
            q.pop();

        }
        while(i-j-x+1==k && m.size()==5 && q.size()!=0){
            cout<<i<<" "<<j<<" "<<x<<endl;
            ans++;
            j = q.front();
            if(m.find(w[j])!=m.end()){
                m[w[j]]--;
                x--;
                if(m[w[j]]==0) m.erase(w[j]);
            }
            j++;
            cout<<j<<"a"<<i<<m.size()<<endl;
            q.pop();

        }
        i++;
        
    }
    // while(q.size()!=0){
    //         j = q.front();
    //         cout<<j<<"h"<<endl;
    //         j++;
    //         q.pop();
    //         if(m.find(w[j])!=m.end()){
    //             m[w[j]]--;
    //             x--;
    //             if(m[w[j]]==0) m.erase(w[j]);
    //             cout<<i-j-x<<"@"<<m.size()<<endl;
    //             cout<<x<<"!"<<endl;
    //             if(i-j-x==k && m.size()==5){
    //                 cout<<i<<" "<<j<<" "<<x<<endl;
    //                 ans++;
    //             }
                
    //         }else{
    //             if(i-j-x==k && m.size()==5){
    //                 cout<<i<<" "<<j<<" "<<x<<endl;
    //                 ans++;
    //             }
    //         }
    // }
    
         


    return ans;
    
}
int main(){
    countOfSubstrings("aadieuoh",1);

}