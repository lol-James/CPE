#include <bits/stdc++.h>
using namespace std;

/**
 * find an integer number A s.t. |X1−A|+|X2−A|+...+|Xn−A| is min
 * ans1:array中最小中位數之值
 * ans2:array中中位數有幾個
 * ans3:有幾個整數值符合此規則
 * 
 * if n is odd: 中位數有兩個
 * else: 中位數只有一個
**/

int main()
{
    int n;
    while (cin >> n)
    {
        int a[n], mid = n / 2, ans1, ans2 = 0, ans3; 
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);

        if (n % 2 == 1)
        {
            ans1 = a[mid];
            ans3 = 1;
            for (int j = 0; j < n; j++)
                if (a[j] == a[mid]) ans2++;
            cout << ans1 << " " << ans2 << " " << ans3 << endl;
        }
        else
        {
            ans1 = a[mid - 1];
            ans3 = a[mid] - a[mid - 1] + 1;
            for (int j = 0; j < n; j++)
                if (a[j] == a[mid - 1] || a[j] == a[mid]) ans2++;
            cout << ans1 << " " << ans2 << " " << ans3 << endl;
        }
    }
    return 0;
}




