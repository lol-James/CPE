#include <bits/stdc++.h>
using namespace std;

/**
 * Yes：s是t的子序列
 * No：s不是t的子序列
**/

int main()
{
    string s, t;
    while (cin >> s >> t)
    {
        int p1 = 0, p2 = 0;
        while (p1 < s.size() && p2 < t.size())
        {
            if (s[p1] == t[p2])
            {
                p1++;
                p2++;
            }
            else
            {
                p2++;
            }
        }
        if (p1 == s.size()) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}