#include <bits/stdc++.h>

using namespace std;

/**
 * 預處理，把答案陣列先做好
*/

int main()
{
    string ans[50005];
    for (int i = 0; i <= 50000; ++i)
        ans[i] = "-1";

    for (int i = 0; i <= 500; ++i)
    {
        for (int j = i; j <= 500; ++j)
        {
            for (int k = j; k <= 500; ++k)
            {
                int n = i * i + j * j + k * k;
                if (n > 50000)
                    break;
                if (ans[n][0] == '-')
                {
                    ans[n] = to_string(i) + ' ' + to_string(j) + ' ' + to_string(k);
                }
            }
        }
    }

    int n;
    cin >> n;
    while (n--) {
        int k;
        cin >> k;
        cout << ans[k] << '\n';
    }

    return 0;
}