#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int cases = 1; cases <= t; ++cases) {
        int c, d;
        cin >> c >> d;
        double ans = (double)c + d / 9.0 * 5.0;
        printf("Case %d: %0.2f\n", cases, ans);
    }

    return 0;
}