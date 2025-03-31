#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> pre(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
            cin >> pre[i];
        if (v[n - 1] == 2)
        {
            sort(pre.begin(), pre.end());
            for (auto ele : pre)
                cout << ele << " ";

            cout << endl;
            continue;
        }
        else if (v[n - 1] == 3)
        {
            sort(pre.begin(), pre.end(), greater<>());
            for (auto ele : pre)
                cout << ele << " ";
            cout << endl;
            continue;
        }

        int i = n - 1;
        while ((v[i] == 1 && i >= 0))
        {
            i--;
        }
        if (i == -1)
        {
            if (n % 2 != 0)
            {
                reverse(pre.begin(), pre.end());
                for (auto ele : pre)
                    cout << ele << " ";
                cout << endl;
            }
            else
            {
                for (auto ele : pre)
                    cout << ele << " ";
                cout << endl;
            }
        }
        else
        {
            if (v[i] == 2)
            {
                sort(pre.begin(), pre.end());
            }
            else
            {
                sort(pre.begin(), pre.end(), greater<>());
            }
            if ((n - i ) % 2 == 0)
            {
                reverse(pre.begin(), pre.end());
                for (auto ele : pre)
                    cout << ele << " ";
                cout << endl;
            }
            else
            {
                for (auto ele : pre)
                    cout << ele << " ";
                cout << endl;
            }
        }
    }
}
