#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    int val;
    Node* next;
public:
    Node():val(0),next(NULL){}
    Node(int val):val(val){
        next=NULL;
    }
    Node(int val,Node* next): val(val),next(next){}
};
class LinkedList: public  Node{

};
int main(){
    LinkedList ll;
    ll.val=10;
    ll.next=&ll;
    LinkedList* ll2=&ll;
    ll2->val=20;
    cout<<ll.val;





}