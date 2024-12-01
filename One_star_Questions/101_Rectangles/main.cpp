#include <bits/stdc++.h>

using namespace std;

struct Point
{
    int x, y;
};

int main()
{
    int t;
    cin >> t;
    for (int cases = 1; cases <= t; cases++)
    {
        int n;
        cin >> n;

        Point a, b, c, d;
        int i, j, k, l; // (i, j) (k, l):共同長方形的副對角線端點
        cin >> a.x >> a.y >> b.x >> b.y;
        i = a.x, j = a.y, k = b.x, l = b.y;
        n--;
        bool flag = true; // 用來記錄共同長方形是否存在
        while (n--)
        {
            cin >> c.x >> c.y >> d.x >> d.y;
            // 共同長方形的大小只可能越縮越小
            i = max(a.x, c.x), j = max(a.y, c.y);
            k = min(b.x, d.x), l = min(b.y, d.y);
            if (i >= k || j >= l)
                flag = false; // 還不能break，還是要把殘餘的資料讀完
            else
                a.x = i, a.y = j, b.x = k, b.y = l;
        }

        cout << "Case " << cases << ": ";
        if (flag) cout << (k - i) * (l - j);
        else cout << 0;
        cout << endl;
    }

    return 0;
}
