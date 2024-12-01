#include <bits/stdc++.h>

using namespace std;

/**
 * 求數列最長子字串的乘積最大值，直接暴力法即可
*/

int main()
{
    int n, cases;
    while (cin >> n) {
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            long long mul = 1;
            for (int j = i; j < n; j++) {
                mul *= a[j];
                ans = max(ans, mul);
            }
        }
        cout << "Case #" << ++cases << ": The maximum product is " << ans << ".\n\n";
    }

    return 0;
}