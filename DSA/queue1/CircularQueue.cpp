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
            arr[bk%size]=val;
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
        return arr[fr%size]; 
    }
    int back(){
        return arr[(bk-1)%size];
    }


};
void display(queue* q){
    for(int i=q->fr;i<q->bk;i++){
        cout<<q->arr[i%q->size]<<" ";
    }
    cout<<endl;
}
int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.pop();
    q.push(60);
    q.push(70);
    display(&q);
}