#include <iostream>
using namespace std;

/**
 * t:測資組數
 * n:模擬的天數
 * p:表示共有幾個政黨
 * 求出共罷會了多少天
 * 起始日為星期天，每週的星期五和星期六不罷會
**/

int main()
{
    int t, n, p;    // n:day p:the number of parties
    cin >> t;
    while (t--)    
    {
        cin >> n >> p;
        int count = 0, pi[p];
        for (int j = 0; j < p; j++) cin >> pi[j];
        for (int j = 1; j <= n; j++)
        {
            if (j % 7 == 6 || j % 7 == 0) continue;
            for (int k = 0; k < p; k++)
                if (j % pi[k] == 0)
                {
                    count++;
                    break;
                }
        }
        cout << count << endl;
    }
    return 0;
}