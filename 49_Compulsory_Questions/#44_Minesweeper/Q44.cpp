#include <iostream>
using namespace std;

/**
 * 陣列多開2格以防止溢位
 * 遍歷地圖
 * if ch[i][j] == '*':
 *     a[i][j] == BOMB
 *     BOMB的四周圍++
**/

#define BOMB 6666

int main()
{
    int n, m, test_num = 0;
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0) break;

        test_num++;
        if (test_num != 1) cout << endl;

        char ch[n + 2][m + 2];
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
             cin >> ch[i][j];

        int a[n + 2][m + 2]; 
        for (int i = 0; i < n + 2; i++)
            for (int j = 0; j < m + 2; j++)
                a[i][j] = 0;

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                if (ch[i][j] == '*')
                {
                    a[i][j] = BOMB;
                    a[i - 1][j - 1]++;
                    a[i - 1][j]++;
                    a[i - 1][j + 1]++;
                    a[i][j - 1]++;
                    a[i][j + 1]++;
                    a[i + 1][j - 1]++;
                    a[i + 1][j]++;
                    a[i + 1][j + 1]++;
                }

        cout << "Field #" << test_num << ":" << endl;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (a[i][j] > 1000)
                    cout << "*";
                else
                    cout << a[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}