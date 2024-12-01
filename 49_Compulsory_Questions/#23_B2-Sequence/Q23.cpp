#include <bits/stdc++.h>
using namespace std;

/**
 * 如果一個數列是B2-Sequence必須符合以下條件：
 * 1) 每項均為正整數
 * 2) 為嚴格遞增數列
 * 3) 相鄰兩項的和皆不相同
**/

int main()
{
    int t = 0, n, sum;
    map<int, int> m;
    string s;
    while (cin >> n)
    {
        bool flag = true;
        t++;
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] < 1 || (i > 0 && b[i] <= b[i - 1]))
                flag = false;
        }
        if (flag)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = i; j < n; j++)
                {

                    sum = b[i] + b[j];
                    m[sum]++;
                    if (m[sum] >= 2)
                    {
                        flag = false;
                        break;
                    }
                }
                if (!flag) break;
            }
        }

        if (flag)
            cout << "Case #" << t << ": It is a B2-Sequence.\n\n";
        else
            cout << "Case #" << t << ": It is not a B2-Sequence.\n\n";

        m.clear();
        getline(cin, s); // 讀空白行
    }
}
