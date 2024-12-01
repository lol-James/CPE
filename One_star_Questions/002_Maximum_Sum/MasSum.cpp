#include <bits/stdc++.h>
using namespace std;

/**
 * 算過的不要重複算
 * 1) 開一個大一點的陣列 a[105][105]
 * 2) 輸入n
 * 3) a[105][105]初始化為0
 * 4) 將矩陣元素填入，從a[1][1]開始填，同時計算前綴和
 * 5) ans的最小值為0，故total的最小值也為0，利用3層for來計算ans
**/

int main()
{
    int n, a[105][105];
    while (cin >> n)
    {
        for (int i = 0; i < 105; i++)
            for (int j = 0; j < 105; j++)
                a[i][j] = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
                a[i][j] += a[i][j - 1]; // a存的值是前綴和
            }
        }
        int ans = 0, total;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                total = 0;
                for (int k = 1; k <= n; k++)
                {
                    total += a[k][j] - a[k][i];      // 相當於計算一列的和
                    ans = total > ans ? total : ans; // ans必>=total
                    if (total < 0) total = 0; // total如果小於0，不如就歸零重新來過
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}