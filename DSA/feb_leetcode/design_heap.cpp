#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

// class NumberContainers {
// public:
//     // num -> min(idx)
//     unordered_map<int, priority_queue<int, vector<int>, greater<int> > > m;
//     // idx -> num
//     unordered_map<int,int> h;
//     // num -> to be delete idx
//     unordered_map<int,unordered_set<int>> s;
//     NumberContainers(){} 
//     void change(int i, int n) {
//         if(h.find(i)!=h.end()){
//             int idx = h[i];
//             s[idx].insert(i);
//             while (m[idx].size()!=0 && s[idx].find(m[idx].top())!=s[idx].end()){
//                 s[idx].erase(m[idx].top());
//                 m[idx].pop();
                
//             }
//             if(m[idx].size()==0) m.erase(idx);    
//             if(s[idx].size()==0) s.erase(idx);        
//         }           
//         m[n].push(i);
//         h[i]=n;
    
//     }
    
//     int find(int n) {
//         int idx = n;
//         while (m[idx].size()!=0 && s[idx].find(m[idx].top())!=s[idx].end()){
//             s[idx].erase(m[idx].top());
//             m[idx].pop();
                
//         }
//         if(m[idx].size()==0) m.erase(idx);    
//         if(s[idx].size()==0) s.erase(idx);   
//         if(m.find(n)!=m.end()) return m[n].top();
//         else return -1;
//     }
// };
    

// /**

//  * Your NumberContainers object will be instantiated and called as such:
//  * NumberContainers* obj = new NumberContainers();
//  * obj->change(index,number);
//  * int param_2 = obj->find(number);
//  */
// class NumberContainers {
// public:
//     unordered_map<int, priority_queue<int, vector<int>, greater<int>>> m; // num -> min-heap of indices
//     unordered_map<int, int> h; // idx -> num
//     unordered_map<int, unordered_set<int>> s; // num -> invalid indices to delete

//     NumberContainers() {}

//     void change(int i, int n) {
//         // If index 'i' was previously assigned a number, mark it for deletion
//         if (h.find(i) != h.end()) {
//             int prevNum = h[i];
//             s[prevNum].insert(i); // Mark previous number's index for deletion
            
//             // Clean up priority queue: Remove all invalid indices
//             while (!m[prevNum].empty() && s[prevNum].count(m[prevNum].top())) {
//                 s[prevNum].erase(m[prevNum].top());
//                 m[prevNum].pop();
//             }

//             // Remove empty entries
//             if (m[prevNum].empty()) m.erase(prevNum);
//             if (s[prevNum].empty()) s.erase(prevNum);
//         }

//         // Update the mappings
//         m[n].push(i);
//         h[i] = n;
//     }

//     int find(int n) {
//         // If the number exists and has valid indices, return the smallest one
//         while (m.find(n) != m.end() && !m[n].empty() && s[n].count(m[n].top())) {
//             s[n].erase(m[n].top());
//             m[n].pop();
//         }
//         return (m.find(n) != m.end() && !m[n].empty()) ? m[n].top() : -1;
//     }
// };
class NumberContainers {
    public:
        unordered_map<int, priority_queue<int, vector<int>, greater<int>>> m; // num -> min heap of indices
        unordered_map<int, int> h; // index -> num
        unordered_map<int, unordered_set<int>> s; // num -> indices to be deleted
    
        NumberContainers() {}
    
        void change(int i, int n) {
            if (h.find(i) != h.end()) {
                int prevNum = h[i];
                if (prevNum == n) return; // No change needed if it's the same number
                s[prevNum].insert(i); // Mark previous number's index for deletion
            }
    
            // Update mappings
            h[i] = n;
            m[n].push(i);
        }
    
        int find(int n) {
            if (m.find(n) == m.end() || m[n].empty()) return -1; // Number not found
    
            // Clean up invalid indices before returning the smallest valid one
            while (!m[n].empty() && (h.find(m[n].top()) == h.end() || h[m[n].top()] != n)) {
                m[n].pop();
            }
    
            return m[n].empty() ? -1 : m[n].top();
        }
    };
    