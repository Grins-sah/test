#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;
void CutBoard(int m, int n, vector<int> xCut, vector<int> yCut)
{
    vector<pair<int, int>> row;
    int ans = 0;
    for (int i = 0; i < xCut.size(); i++)
    {
        row.push_back({xCut[i], i});
    }
    sort(row.begin(), row.end());

    vector<pair<int, int>> col;
    for (int i = 0; i < yCut.size(); i++)
    {
        col.push_back({yCut[i], i});
    }
    sort(col.begin(), col.end());

    int jCut = 1;
    int iCut = 1;
    int i = row[row.size() - iCut].second;
    int j = col[col.size() - jCut].second;
    while (i >= 0 || j >= 0)
    {
        if (iCut <= row.size())
            i = row[row.size() - iCut].second;
        else
            i = -1;
        if (jCut <= col.size())
            j = col[col.size() - jCut].second;
        else
            j = -1;
        if (i >= 0 && j >= 0 && xCut[i] > yCut[j])
        {
            ans += jCut * xCut[i];
            iCut++;
        }
        else if (i >= 0 && j >= 0 && xCut[i] == yCut[j])
        {
            ans += jCut * xCut[i];
            iCut++;
        }
        else if (j >= 0)
        {
            ans += iCut * yCut[j];
            jCut++;
        }
    }
    cout << ans;
}
int main()
{
    CutBoard(4, 6, {2, 1, 4}, {2, 1, 3, 1, 4});
}