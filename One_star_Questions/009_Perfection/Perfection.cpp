#include <bits/stdc++.h>

using namespace std;

/**
 * 注意：”1″ 定義為 DEFICIENT
 * 直接依題意解即可，不需要特殊的解法
*/

int main()
{
    cout << "PERFECTION OUTPUT" << endl;
    int n;
    while (cin >> n)
    {
        if (n == 0) break;
        if (n == 1)
        {
            cout << setw(5) << 1 << "  DEFICIENT" << endl;
            continue;
        }
        int sum = 1;
        double sq = sqrt(n);
        for (int i = 2; i <= sq; ++i)
        {
            if (n % i == 0)
            {
                sum += i;
                sum += n / i;
                if (i == sq) sum -= i;
            }
        }
        if (sum == n) cout << setw(5) << n << "  PERFECT" << endl;
        else if (sum < n) cout << setw(5) << n << "  DEFICIENT" << endl;
        else cout << setw(5) << n << "  ABUNDANT" << endl;
    }
    cout << "END OF OUTPUT" << endl;

    return 0;
}