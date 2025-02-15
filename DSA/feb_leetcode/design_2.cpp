#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

class ProductOfNumbers {
    public:
        vector<int> v;
        vector<int> z;
        ProductOfNumbers() {
            vector<int> v(0);
            vector<int> z(0);
        }
        
        void add(int num) {
            int n = v.size();
            int m = z.size();
            if(num == 0) z.push_back(n);
            else if(m>0)z.push_back(z[m-1]);
            else z.push_back(-1);
            if(n==0){
                v.push_back(num);
            }else if(v[n-1]!=0){
                v.push_back(num*v[n-1]);
            }else {
                v.push_back(num);
            }
        }
        
        int getProduct(int k) {
            int n = v.size();
            if(z[n-1]>=n-k || z[n-k]>=n-k) return 0;
            if(n-k-1<0) return v[n-1];
            if(v[n-k-1]==0) return v[n-1];
            return (v[n-1]/v[n-k-1]);
            
        }
    };
    
    /**
     * Your ProductOfNumbers object will be instantiated and called as such:
     * ProductOfNumbers* obj = new ProductOfNumbers();
     * obj->add(num);
     * int param_2 = obj->getProduct(k);
     */