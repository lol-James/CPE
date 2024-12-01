#include <bits/stdc++.h>
using namespace std;

/** 
 * x = n - m
 * n = x + m
 * n = 10m + d0 // d0：n的各位數字
 * x = 9m + d0
 * (x - d0) / 9 = m
 * 即(x - d0)可被9整除
**/

int main()
{
    string s;
    while (cin >> s)
    {
        if (s == "0") break;
        long long x = 0;
        for (auto &ch : s)
        {
            x *= 10;
            x += ch - '0';
        }
        vector<long long> v;
        long long n, m;
        for (int d0 = 9; d0 >= 0; d0--)
        {
            if ((x - d0) % 9 == 0)
            {
                m = (x - d0) / 9;
                n = x + m;
                v.push_back(n);
            }
        }
        sort(v.begin(), v.end());
        bool isFirst = true;
        for (auto &n : v)
        {
            if (isFirst == false) cout << " ";
            cout << n;
            isFirst = false;
        }
        cout << endl;
    }

    return 0;
}