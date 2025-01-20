    #include<unordered_map>
    #include<iostream>
    using namespace std;
    
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char, int> m;
        int ans = -1;
        int j = 0;
        int i = 0;
        for (i = 0; i < n; i++) {
            if (m.find(s[i]) != m.end() && m[s[i]]>=j) {
                if (i - j > ans)
                    ans = i - j;
                j = m[s[i]] + 1;
            }
            m[s[i]] = i;
        }
        return ans;
    }
    int main(){
        cout<<lengthOfLongestSubstring("abcabcbb");
    }