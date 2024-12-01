#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, set_count = 1;
    while (cin >> n)
    {
        if (n == 0) break;
        int sum = 0, a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int avg = sum / n, ans = 0;
        for (int i = 0; i < n; i++)
            if (a[i] > avg) ans += a[i] - avg;
        cout << "Set #" << set_count++ << endl;
        cout << "The minimum number of moves is " << ans << ".\n\n";
    }

    return 0;
}