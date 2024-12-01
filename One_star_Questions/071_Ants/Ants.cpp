#include <bits/stdc++.h>
using namespace std;

/**
 * a[i] = {left, right}：第 i 隻螞蟻距離棍子左邊和右邊的距離
 * 兩隻螞蟻相遇各自掉頭，就相當於互換身份罷了
 * 最快時間即為取都走向最遠端點，反之則為最近端點
 * 因為每一只螞蟻都要照顧到所以公式為：
 * max_time = max(max_time, max(a[i].first, a[i].second));
 * min_time = max(min_time, min(a[i].first, a[i].second));
**/

int main()
{
    int cases, l, n, x;
    cin >> cases;
    while (cases--)
    {
        cin >> l >> n;
        // a[i] = {left, right}：第 i 隻螞蟻距離棍子左邊和右邊的距離
        pair<int, int> a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a[i] = make_pair(x, l - x);
        }
        int min_time = 0, max_time = 0;
        for (int i = 0; i < n; i++)
        {
            max_time = max(max_time, max(a[i].first, a[i].second));
            min_time = max(min_time, min(a[i].first, a[i].second));
        }
        cout << min_time << " " << max_time << endl;
    }

    return 0;
}