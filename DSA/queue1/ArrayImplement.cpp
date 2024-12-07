#include<iostream>
using namespace std;
class queue{
public:
    int fr;
    int bk;
    int size;
    int arr[];
    queue(){
        fr=bk=0;
        size=5;
        arr[5];
    }
    void push(int val){
        if(bk-fr<size){
            arr[bk]=val;
            bk++;
        }
        else{
            cout<<"queue is full !"<<endl;
        }
    }
    void pop(){
        if(bk-fr!=0){
            fr++;
            if(bk-fr==0) fr=bk=0;

        }
        else{
            cout<<"queue is empty !"<<endl;
        }        
    }
    int front(){
        return arr[fr]; 
    }
    int back(){
        return arr[bk-1];
    }


};
void display(queue* q){
    for(int i=q->fr;i<q->bk;i++){
        cout<<q->arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    queue* q=new queue();
    q->push(10);
    q->push(20);
    q->push(30);
    q->push(40);
    q->push(50);
    q->push(60);
    q->push(70);
    display(q);
    q->pop();
    display(q);
    q->pop();
    display(q);
    q->pop();
    display(q);
    q->pop();
    display(q);
    q->pop();
    display(q);
    q->pop();
    display(q);
    q->pop();
    q->push(10);
    display(q);
    q->push(20);
    display(q);
    q->push(30);
    display(q);
    q->push(40);
    display(q);



    display(q);



}