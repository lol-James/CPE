#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, x, cases = 0;
    while (cin >> n)
    {
        if (n == 0) break;
        cases++;
        cout << "Case " << cases << ":" << endl;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        cin >> m;
        while (m--)
        {
            cin >> x;
            int ans = v[0] + v[1];
            int delta = abs(ans - x);
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (abs(v[i] + v[j] - x) < delta)
                    {
                        ans = v[i] + v[j];
                        delta = abs(ans - x);
                    }
                }
            }
            printf("Closest sum to %d is %d.\n", x, ans);
        }
    }

    return 0;
}