#include <bits/stdc++.h>

using namespace std;

/**
 * Greedy, 最貴的先買
*/

int main() {
    long long t; cin >> t;
    while (t--) {
        vector<long long> v;
        long long cost;
        while (cin >> cost && cost) v.push_back(cost);
        sort(v.begin(), v.end(), [](long long a, long long b) { return a > b; });
        long long ans = 0;
        for (long long i = 0; i < v.size(); i++) {
            long long pow = 1;
            for (long long j = 0; j <= i; j++) pow *= v[i];
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