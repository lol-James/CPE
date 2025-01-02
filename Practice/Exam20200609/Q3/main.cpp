#include <bits/stdc++.h>

using namespace std;

/**
 * 找到一個DNA字串，其與題目所給的m個DNA字串的相異字元數總和最小
 * 輸出此字串及相異字元數總和
*/

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        string DNAs[n];
        int count[1050][128];   // 用來統計第index位，各種字元出現次數
        memset(count, 0, sizeof(count));
        for (int i = 0; i < n; i++) cin >> DNAs[i];
        for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) count[j][DNAs[i][j]]++;
        string ans = "";
        for (int i = 0; i < m; i++) {
            char ch;
            int Max = -1;
            for (int j = 'A'; j <= 'Z'; j++) {
                if (Max < count[i][j]) {
                    Max = count[i][j];
                    ch = j;
                }
            }
            ans += ch;
        }

        int sum = 0;
        for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) if (ans[j] != DNAs[i][j]) sum++;

        cout << ans << endl;
        cout << sum << endl;
    }

    return 0;
}