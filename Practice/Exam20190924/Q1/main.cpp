#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    for (int cases = 1; cases <= t; ++cases) {
        string s;
        int n;
        cin >> s >> s >> n;
        long long a[n][n];  for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) cin >> a[i][j];
        bool flag = true;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n - i; j++) {
                if (a[i][j] != a[n - i - 1][n - j - 1] || a[i][j] < 0 || a[n - i - 1][n - j - 1] < 0) flag = false;
            }
            if (flag == false) break;
        }
        cout << "Test #" << cases << ": ";
        if (flag) cout << "Symmetric.\n";
        else cout << "Non-symmetric.\n";
    }

    return 0;
}