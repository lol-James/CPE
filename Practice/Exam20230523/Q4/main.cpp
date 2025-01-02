#include <bits/stdc++.h>

using namespace std;

/**
 * 標準的01背包問題
*/

int main() {
    int t; cin >> t;
    while (t--) {
        int n, p; cin >> n >> p;    // n: 目標長度, p: bar的數量
        int bars[p];
        for (int i = 0; i < p; i++) cin >> bars[i];
        vector<bool> dp(n + 1, false);
        dp[0] = true;   // 長度0一定做的出來(都不拿)
        for (int bar : bars)
            for (int i = n; i >= bar; i--) // 倒序避免棒子重複被使用！！！
                if (dp[i - bar] == true) dp[i] = true;

        if (dp[n]) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}