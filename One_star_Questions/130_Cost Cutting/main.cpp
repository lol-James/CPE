#include <bits/stdc++.h>

using namespace std;

/**
 * 找2個數的中間值
*/

int main() {
    int n;
    cin >> n;
    for (int cases = 1; cases <= n; ++cases) {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        cout << "Case " << cases << ": " << a[1] << endl;
    }

    return 0;
}