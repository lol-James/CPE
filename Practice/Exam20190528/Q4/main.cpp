#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        long long a, b; cin >> a >> b;
        long long diff = b - a, i;
        if (diff <= 3) cout << diff << endl;
        else {
            long long n = (long long)sqrt(diff);
            diff -= n * n;
            // 完全平方數
            if (diff == 0) cout << n * 2 - 1 << endl;
            else if (diff <= n) cout << n * 2 << endl;
            else cout << n * 2 + 1 << endl;
        }

    }

    return 0;
}