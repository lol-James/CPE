#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;    // n把鑰匙m個門，問最多要試幾次才可以打開所有門？
        /**
         * m - 1
         * m - 2
         * m - 3
         * ...
         * m - n
        */
       int ans = m * n - (n * (n + 1) / 2);
       cout << ans << endl;
    }

    return 0;
}