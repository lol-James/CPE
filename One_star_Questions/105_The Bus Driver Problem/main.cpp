#include <bits/stdc++.h>

using namespace std;

/**
 * Greedy: 早上最長就要搭配晚上最短
*/

int main() {
    int n, d, r;
    while (cin >> n >> d >> r) {
        if (n == 0 && d == 0 && r == 0) break;
        vector<int> morning(n), night(n);
        for (int i = 0; i < n; i++) {
            cin >> morning[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> night[i];
        }
        sort(morning.begin(), morning.end());
        sort(night.begin(), night.end(), [](int a, int b) { return a > b;});
        int ans = 0;
        for (int i = 0; i  < n; i++) {
            if (morning[i] + night[i] > d) {
                ans += (morning[i] + night[i] - d) * r;
            }
        }
        cout << ans << endl;
    }


    return 0;
}