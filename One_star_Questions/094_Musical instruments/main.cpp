#include <bits/stdc++.h>

using namespace std;

/**
 * 學生選中理想中樂器第一名的組合數有多少
 * 後續樂器的分配方法不用管
*/

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, temp, ans = 1;
        int first[32] = {0};

        cin >> n >> m;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> temp;
                if (temp == 1) {
                    first[j]++;
                }
            }
        }

        for (int j = 0; j < n; j++) {
            if (first[j] > 0) {
                ans *= first[j];
            }
        }

        cout << ans << endl;
    }

    return 0;
}