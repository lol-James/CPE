#include <bits/stdc++.h>
using namespace std;

/**
 * 球體的表面積：4 * M_PI * r^2
 * 分割n等分，每一等分表面積：M_PI * r^2 + (4 * M_PI * r^2) / n
 * 共可賣得：M_PI * r^2 * n + (4 * M_PI * r^2)
 * 獲利為：M_PI * r^2 * n
 * 獲利百分比：n/4 *100% = 25n%
**/

int main()
{
    long long n;
    while (cin >> n)
    {
        if (n < 0) break;
        if (n == 1) cout << "0%\n";
        else cout << n * 25 << "%\n";
    }

    return 0;
}