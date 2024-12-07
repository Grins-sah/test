#include<iostream>
#include<unordered_set>
#include<unordered_map>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.erase(2);
    // one ele only exist of same value
    int target = 10;
    if(s.find(target)!=s.end()){
        cout<<"Exist"<<endl;
    }
    else{
        cout<<"DNE"<<endl;
    }
    cout<<s.size()<<endl;
    for(int ele: s){
        cout<<ele<<" ";
    }
}