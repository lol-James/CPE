#include <bits/stdc++.h>

using namespace std;

inline long long getSteps(long long x, long long y) {
    long long n = x + y;
    return (n * (n + 1)) / 2 + x;
}

int main() {
    long long t; cin >> t;
    for (long long i = 1; i <= t; i++) {
        long long x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        cout << "Case " << i << ": ";
        cout << getSteps(x2, y2) - getSteps(x1, y1) << endl;
    }

    return 0;
}