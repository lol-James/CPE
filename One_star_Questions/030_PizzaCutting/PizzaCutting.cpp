#include <bits/stdc++.h>
using namespace std;
/**
 * n = 0 => 1
 * n = 1 => 2 = 1 + 1
 * n - 2 => 4 = 1 + (1 + 2)
 * n = 3 => 7 = 1 + (1 + 2 + 3)
 * n = 4 => 11 = 1 + (1 + 2 + 3 + 4)
 * n = n => 1 + (n * (n + 1)) / 2
*/

int main()
{
    long long n;
    while (cin >> n && n >= 0)
        cout << 1 + (n * (n + 1)) / 2 << endl;

    return 0;
}