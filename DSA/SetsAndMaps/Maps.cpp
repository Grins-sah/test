#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string ,int > m;
    pair <string,int> p1;
    pair <string,int> p2;
    pair <string,int> p3;
    pair <string,int> p4;
    m["Grins"]=100;
    m["Raghav"]=101;
    cout<<m.size()<<endl;
    m.erase("Raghav");
    cout<<m.size()<<endl;
    for(pair <string,int> ele : m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    // Find => m.find(<Key>)
    // insert => m.insert(pair <string,int>)
    // erase => m.erase(<key>)




}