#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases = 0;
    int n;
    while (cin >> n) {
        if (n == 0) break;

        vector<vector<int> > a(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

        vector<int> ans((int)ceil((double)n / 2));
        for (int i = 0; i < ans.size(); i++) {
            // 處理n是奇數時，中間會剩下一個數的情況
            if (i == n / 2) {
                ans[i] = a[i][i];
                break;
            }
            int sum = 0;
            // 上
            for (int j = i; j <= n - i - 1; j++) {
                sum += a[i][j];
            }
            // 下
            for (int j = i; j <= n - i - 1; j++) {
                sum += a[n - 1 - i][j];
            }
            // 左
            for (int j = i + 1; j <= n - i - 2; j++) {
                sum += a[j][i];
            }
            // 右
            for (int j = i + 1; j <= n - i - 2; j++) {
                sum += a[j][n - i - 1];
            }
            ans[i] = sum;
        }

        cout << "Case " << ++cases << ": ";
        for (int i = 0; i < ans.size(); i++) {
            if (i != 0) cout << " ";
            cout << ans[i];
        }
        cout << endl;
    }



    return 0;
}