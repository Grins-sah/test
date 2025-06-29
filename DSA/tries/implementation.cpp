// tries => prefix tree or data structure 
#include<bits/stdc++.h>
using namespace std;
class Trie {
public:
    char data;
    bool isTerminal;
    unordered_map<char,Trie*> m;
    Trie() {
        data = NULL;
        isTerminal=false;
    }
    
    void insert(string word) {
        Trie* curr = this;
        int n = word.size();
        for(int i = 0;i<n;i++){
            if(curr->m.find(word[i])!=curr->m.end()){
                curr = curr->m[word[i]];
            }else{
                curr->m[word[i]] = new Trie();
                curr = curr->m[word[i]];
                curr->data = word[i];
            }

        }
        curr->isTerminal = true;
    }
    
    bool search(string word) {
        Trie* curr = this;
        int n = word.size();
        for(int i = 0;i<n;i++){
            if(curr->m.find(word[i])==curr->m.end()) return false;
            curr = curr->m[word[i]];
            
            
        }
        return curr->isTerminal;
        
    }
    
    bool startsWith(string word) {
        Trie* curr = this;
        int n = word.size();
        for(int i = 0;i<n;i++){
            if(curr->m.find(word[i])==curr->m.end()) return false;
            curr = curr->m[word[i]];
            // if(i==n-1 && curr.isTerminal==false) return false;
            
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */




int main(){

}