#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long N, n, lastNum, ans;
    while (cin >> N)
    {
        n = (N + 1) / 2; // 計算第n層(由上往下數)
        lastNum = 1 + (n * n - 1) * 2;   // lastNum：此層最後一個數
        ans = (lastNum -  2) * 3;
        cout << ans << endl;
    }

    return 0;
}