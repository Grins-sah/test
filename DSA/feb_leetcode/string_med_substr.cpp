#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part) {
    int n = s.length();
    int m = part.length();        
    while (true) {
        string ans = "";
        bool flag = false;
        for (int i = 0; i < s.length(); i++) {
            string temp = "";
            if (s[i] == part[0]) {
                int count = 0;
                while (count < m && (i + count) < s.length() && s[i + count] == part[count]) {
                    temp += s[i + count];
                    count++;
                }
                if (count != m) {
                    ans += temp;
                } else {
                    flag = true;
                }
                i += count - 1;
            } else {
                ans += s[i];
            }
        }
        if (!flag || ans == s) break; // Prevent infinite loop
        s = ans;
    }
    return s;
}

int main() {
    cout <<removeOccurrences("kpygkivtlqoockpygkivtlqoocssnextkqzjpycbylkaondsskpygkpygkivtlqoocssnextkqzjpkpygkivtlqoocssnextkqzjpycbylkaondsycbylkaondskivtlqoocssnextkqzjpycbylkaondssnextkqzjpycbylkaondshijzgaovndkjiiuwjtcpdpbkrfsi","kpygkivtlqoocssnextkqzjpycbylkaonds");
}
