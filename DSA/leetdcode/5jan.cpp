#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

    static bool cmp(vector<int>& v1,vector<int>& v2){
        return v1[0]<v2[0];
    }
    string shiftingLetters(string s, vector<vector<int>> shift) {
        int n = s.length();
        int m = shift.size();
        int flag = 0;
        for (int i = 0; i < m; i++) {
            flag = 0;
            if (shift[i][2] == 1)
                flag++;
            else
                flag--;
            if (flag > 0) {
                if ((int)s[shift[i][0]] + flag <= (int)'z')
                    s[shift[i][0]] = (char)((int)shift[i][0] + flag);
                else {
                    s[shift[i][0]] = (char)((int)'a' + flag % ((int)'z') - 1);
                }
            } else if (flag < 0) {
                if ((int)s[shift[i][0]] + flag >= (int)'a')
                    s[shift[i][0]] = (char)((int)shift[i][0] + flag);
                else {
                    s[shift[i][0]] = (char)((int)'z' + flag % ((int)'z') + 1);
                }
            }
            s = s.substr(shift[i][0] + 1, shift[i][1] - shift[i][0]) +
                s[shift[i][0]] + s.substr(shift[i][1] + 1);
        }

        return s;
    }
int main(){
    shiftingLetters("abc",{{0,1,0},{1,2,1},{0,2,1}});

}