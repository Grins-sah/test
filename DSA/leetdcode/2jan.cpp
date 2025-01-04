#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <climits> // For INT_MIN
#include <utility> // For std::pair

using namespace std;

// Custom hash function for pair<int, int>
struct pair_hash {
    std::size_t operator()(const std::pair<int, int>& p) const {
        return std::hash<int>()(p.first) ^ (std::hash<int>()(p.second) << 1);
    }
};

// Function to check if a character is a vowel
bool isVowel(char& ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

// Main function to process vowel strings
vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& qu) {
    unordered_map<pair<int, int>, int, pair_hash> m;
    int n = words.size();

    for (int k = 0; k < n; k++) {
        int m1 = words[k].length() - 1;

        if (isVowel(words[k][m1])) {
            int i = 0;
            int fr = INT_MIN, lr = INT_MIN;

            while (i <= m1 && !isVowel(words[k][i])) i++;
            if (i <= m1) fr = i;
            lr = m1;

            pair<int, int> p = {fr, lr};
            m[p]++;
        }
    }

    vector<int> res;

    for (int i = 0; i < qu.size(); i++) {
        int ans = 0;
        pair<int, int> queryPair = {qu[i][0], qu[i][1]};

        // Check for the exact match of queryPair
        if (m.find(queryPair) != m.end()) ans += m[queryPair];

        // Check for the fallback pair with INT_MIN
        pair<int, int> fallbackPair = {qu[i][0], INT_MIN};
        if (m.find(fallbackPair) != m.end()) ans += m[fallbackPair];

        res.push_back(ans);
    }

    return res;
}

int main() {
    vector<string> words = {"aba","bcb","ece","aa","e"};
    vector<vector<int>> queries = {{0,2},{1,4},{1,1}};

    vector<int> result = vowelStrings(words, queries);
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
