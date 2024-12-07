#include<iostream>
#include<string>
using namespace std;
class book{
    private:
    string name;
    int price;
    int No_pages;
    public:
    void setName(string s){
        name=s;
    }
    void setPrice(int n){
        price=n;
    }
    void setNo_pages(int s){
        No_pages=s;
    }
    string getName(){
        return name;
    }
    int getPrice(){
        return price;
    }
    int getNo_pages(){
        return No_pages;
    }
    int countBooks(int p){
        if(p>price) return 1;
        else return 0;  
    }
};
int main(){
    book harry;
    harry.setName("harry");
    cout<<harry.getName();

}