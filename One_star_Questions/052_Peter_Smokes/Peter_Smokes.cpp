#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    while (cin >> n >> k)
    {
        int sum = n + n / k;
        n = n / k + n % k;
        while (n >= k)
        {
            n -= k;
            n++;
            sum++;
        }
        cout << sum << endl;
    }

    return 0;
}