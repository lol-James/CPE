#include <bits/stdc++.h>
using namespace std;

/**
 * 1 = 2 * 1 - 1 = 2 * 1 * 1 - 1
 * 7 = 2 * 4 - 1 = 2 * 2 * 2 - 1
 * 17 = 2 * 9 - 1 = 2 * 3 * 3 - 1
 * 31 = 2 * 16 - 1 = 2 * 4 * 4 - 1
*/

int main() {
    unsigned long long N, n, lastNum, ans;
    while (cin >> N) {
        n = (N + 1) / 2; // 計算第n層(由上往下數)
        lastNum = 2 * n * n - 1;   // lastNum：此層最後一個數
        ans = (lastNum -  2) * 3;
        cout << ans << endl;
    }

    return 0;
}