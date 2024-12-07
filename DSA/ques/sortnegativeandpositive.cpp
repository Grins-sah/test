#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void sortNP(vector<int>& v){
    int i=0;
    int j=v.size()-1;
    for(int k=0;k<v.size();k++){
        while(j>i){
            if(v[i]<0) i++;
            if(v[j]>0) j--;
            else if(v[i]>0 && v[j]<0){
                int temp=v[i];
                v[i]=v[j];
                v[j]=temp;
                i++;
                j--;
            }
        }
    }

}
int main(){
    cout<<"Enter the number of inputs : ";
    int n;
    cin>>n;
    cout<<"Enter the Elements in The Vector : ";
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        v[i]=y;

    }
    sortNP(v);
    display(v);


}