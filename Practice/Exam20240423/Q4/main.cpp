#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > dp(1005, vector<int>(1005, -1));

/**
 * 將一個元素個數為n的父集合分割成m個子集合，有幾種分法？ 輸出分法數%2
 * 算過的不要重複算！=> dp
*/

int S(int n, int m) {
    // 父集合的元素個數如果小於分割子集合個數或子集合個數為0，無法分割
    if (m > n || m == 0) return 0;
    // 父集合的元素個數如果等於分割子集合個數，恰可分為一份
    else if (n == m) return 1;
    // dp[n][m]值已經被算過，直接回傳
    else if (dp[n][m] != -1) return dp[n][m];
    // 否則按照公式，計算值
    else {
        dp[n][m] = (m * S(n - 1, m) + S(n - 1, m - 1)) % 2;
        return dp[n][m];
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        cout << S(n, m) << endl;
    }

    return 0;
}