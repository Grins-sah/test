#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int* ptr= arr;
    for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        cout<<i[ptr]<<" ";
        cout<<i[arr]<<" ";
        ptr++;
    }
    ptr=arr;
    *ptr=8;// ptr point to the first element 

    ptr++;//ptr move by four bytes that is to the second position 
    *ptr=9;
    ptr--;
}
// ptr++ == point ka adress 4 bytes age bade ga
