#include <bits/stdc++.h>

using namespace std;

/**
 * Greedy 從最貴的開始買
 * 不能使用pow()會有精度缺失的問題！
*/

int main() {
    int n;
    cin >> n;
    while (n--) {
        vector<long long> v;
        int cost;
        while (cin >> cost) {
            if (cost == 0) break;
            v.push_back(cost);
        }
        // 降序排序
        sort(v.begin(), v.end(), [](const long long& a, const long long& b) { return a > b; });
        long long ans = 0;
        for (int i = 0; i < v.size(); i++) {
            long long pow = 1;
            for (int j = 0; j <= i; j++) {
                pow *= v[i];
            }
            ans += 2 * pow;
        }
        if (ans > 5000000) {
            cout << "Too expensive" << endl;
        }
        else {
            cout << ans << endl;
        }
    }

    return 0;
}