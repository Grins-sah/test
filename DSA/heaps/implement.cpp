#include<iostream>
#include<vector>
using namespace std;
class Priority{
public:
    vector<int> v;
    Priority(){
        v = vector<int>(1);
    }
    void push(int a){
        if(v.size()==1) v.push_back(a);
        else{
            v.push_back(a);
            int child = v.size()-1;
            int parent = (child)/2;

            while(v[parent]>v[child] && child>1){
                swap(v[parent],v[child]);
                child = parent;
                parent = child/2;
            }
        }
    }
    void pop(){
        if(v.size()>1){
            swap(v[v.size()-1],v[1]);
            v.pop_back();
            int idx = 1;
            int Lidx = 2;
            int Ridx = 3;
            while( (Lidx<v.size() && v[Ridx]<v[idx])  || (Ridx<v.size() && v[Lidx]<v[idx])){
                if(Ridx>=v.size()){
                    if(v[Lidx]<v[idx]){
                        swap(v[idx],v[Lidx]);
                        idx = Lidx;
                        Lidx = idx*2;
                        Ridx = Lidx+1;
                    }
                    else if(v[Ridx]<v[idx]){
                        swap(v[idx],v[Ridx]);
                        idx= Ridx;
                        Lidx = idx*2;
                        Ridx= Lidx+1;
                    }
                    else{
                        break;
                    }

                }
                else{
                    if(v[Lidx]<v[idx] && v  [Lidx]<v[Ridx]){
                        swap(v[idx],v[Lidx]);
                        idx = Lidx;
                        Lidx = idx*2;
                        Ridx = Lidx+1;
                    }
                    else if(v[Ridx]<v[idx]){
                        swap(v[idx],v[Ridx]);
                        idx= Ridx;
                        Lidx = idx*2;
                        Ridx= Lidx+1;
                    }
                    else{
                        break;
                    }
                }
                
            }

        }
        else{
            cout<<"Pop not possible"<<endl;
        }
    }
    void display(){
        int n = v.size();
        for(int i = 1;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    void size(){
        cout<<v.size()-2<<endl;
    }
    void top(){
        if(v.size()>1)
        cout<<v[1]<<endl;
        else{
            cout<<"Not possible"<<endl;
        }
    }

};
int main(){
    Priority* pq = new Priority();
    pq->push(10);
    pq->push(100);
    pq->push(50);
    pq->push(40);
    pq->display();
    pq->push(40);
    pq->push(20);
    pq->display();
    pq->push(8);
    pq->display();
    pq->push(45);
    pq->display();
    pq->top();
    pq->pop();
    pq->top();
    pq->pop();
    pq->top();
    pq->pop();
    pq->top();
    pq->pop();
    pq->top();
    pq->pop();
    pq->top();
    pq->pop();
    pq->top();
    pq->pop();
    pq->top();
    pq->pop();
    pq->top();
    pq->pop();
    pq->top();
    pq->pop();
    pq->top();
    pq->pop(); 
    pq->top();
    pq->pop();



}