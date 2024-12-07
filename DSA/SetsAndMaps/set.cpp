#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
    set<int> s;
    // T.c => o(log(n)) for i,s,f,e,etc
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(-1);
    // in map sorting is done on bases of key
    map<string,int> m;
    m["Grins"] = 30;
    m["Raghav"] =20;
    m["Sanket"]=10;

    for(auto ele : m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
}