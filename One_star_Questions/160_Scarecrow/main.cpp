#include <bits/stdc++.h>

using namespace std;

/**
 * 至少需要幾個稻草人？
 * 一個稻草人可以保護3個位子
 * Greedy
**/

int main() {
    int t;
    cin >> t;
    for (int cases = 1; cases <= t; ++cases) {
        int n;
        cin >> n;
        string s;
        cin >> s;   // .: 有種東西，#：沒種東西
        int ans = 0, r = -1;    // ans：稻草人總數，r=目前有保護到的稻草位置
        for (int i = 0; i < n; i++) {
            if (s[i] == '.' && i > r) {
                r = i + 2;  // i需要被保護，將稻草人插在i+1的地方，可保護到i+2的位置
                ans++;
            }
        }
        cout << "Case " << cases << ": " << ans << endl;

    }

    return 0;
}