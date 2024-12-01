#include <bits/stdc++.h>
using namespace std;

/**
 * 計算多個立方體重疊的體積
 * 讀入每個立方體角落的(x, y, z)坐標
 * 計算其斜對角座標 (x+L, y+L, z+L)
 * 求得所有角落坐標的最大值 x1/y1/z1，及所有斜對角座標的最小值x2/y2/z2
 * 即可求得重疊的體積。
 * 若 x1 > x2 或 y1 > y2 或 z1 > z2，則重疊的體積為零。
**/

const long long  MAX = INT_MAX;

int main()
{
    int n, x, y, z, L;
    while (cin >> n)
    {
        if (n == 0) break;
        int x1 = -1 * MAX, x2 = MAX;
        int y1 = -1 * MAX, y2 = MAX;
        int z1 = -1 * MAX, z2 = MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y >> z >> L;
            x1 = max(x1, x);
            x2 = min(x2, x + L);
            y1 = max(y1, y);
            y2 = min(y2, y + L);
            z1 = max(z1, z);
            z2 = min(z2, z + L);
        }
        if (x2 <= x1 || y2 <= y1 || z2 <= z1) cout << "0\n";
        else cout << (x2 - x1) * (y2 - y1) * (z2 - z1) << endl;
    }

    return 0;
}