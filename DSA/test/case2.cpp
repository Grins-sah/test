#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int noOfElement(vector<int> element,int num){
    int answer=0;
    int n=element.size();
    for(int i=0;i<n;i++){
        if(element[i]<num) answer++;
    }
    return answer;
}
int main(){
    cout<<noOfElement({1,7,4,5,6,3,2},5);

}