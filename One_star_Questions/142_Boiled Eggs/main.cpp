#include <bits/stdc++.h>

using namespace std;

/**
 * Greedy: 從最輕的開始盡量裝
*/

int main() {
    int t;
    cin >> t;
    for (int cases = 1; cases <= t; ++cases) {
        int n, P, Q;
        cin >> n >> P >> Q;
        vector<int> egg(n);
        for (int i = 0; i < n; ++i) cin >> egg[i];
        sort(egg.begin(), egg.end());
        int count = 0, sum = 0;
        for (int i = 0; i < n; ++i) {
            if (count == P) break;  // 一次最多只能煮P顆蛋
            if (sum + egg[i] <= Q) {    // 總重量不可以超過Q
                count++;
                sum += egg[i];
            }
        }

        cout << "Case " << cases << ": " << count << endl;
    }


    return 0;
}