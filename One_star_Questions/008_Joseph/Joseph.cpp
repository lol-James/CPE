#include <bits/stdc++.h>
using namespace std;

int find_ans(int k);

int main()
{
    int ans[14] = {0};
    for (int i = 0; i < 14; i++)
        ans[i] = find_ans(i + 1);
    int n;
    while (cin >> n)
    {
        if (n == 0) break;
        cout << ans[n - 1] << endl;
    }

    return 0;
}

int find_ans(int k)
{
    for(int m = k + 1;;m++)
    {
        int remaining = 2 * k;
        int position = 0;   // 人員編號由0開始
        for (int i = 1; i <= k; i++)
        {
            position = (position + m - 1) % remaining;  // 因為編號從0開始所以要 - 1
            if (position < k) break;
            remaining--;
        }
        if (remaining == k) return m;
    }
}
