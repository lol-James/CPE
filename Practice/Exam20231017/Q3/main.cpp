#include <bits/stdc++.h>

using namespace std;

/**
 * 找規律
**/

int main() {
    int n;
    while (cin >> n && n) {
        int m = ceil(sqrt(n));
        int x = min(m, n - (m - 1) * (m - 1));
        int y = min(m, m * m - n + 1);
        if (m % 2) swap(x, y);
        cout << x << " " << y << endl;
    }

    return 0;
}