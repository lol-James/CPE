#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    int state[105][2];
    // state[選手號碼][0] win
    // state[選手號碼][1] lose
    int p1, p2;
    string s1, s2;
    bool notFirst = false;

    while (cin >> n)
    {
        if (n == 0) break;
        cin >> k;
        if (notFirst) cout << endl;
        notFirst = true;
        memset(state, 0, sizeof(state));
        for (int i = 0; i < k * n * (n - 1) / 2; i++)
        {
            cin >> p1 >> s1 >> p2 >> s2;
            if (s1[0] != s2[0])
            {
                if ((s1[0] == 'r' && s2[0] == 's') ||
                    (s1[0] == 's' && s2[0] == 'p') ||
                    (s1[0] == 'p' && s2[0] == 'r'))
                {
                    state[p1][0]++;
                    state[p2][1]++;
                }
                else
                {
                    state[p1][1]++;
                    state[p2][0]++;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (state[i][0] == 0 && state[i][1] == 0)
            {
                printf("-\n");
            }
            else
            {
                printf("%.3f\n", (double)state[i][0] / (double)(state[i][0] + state[i][1]));
            }
        }
    }

    return 0;
}