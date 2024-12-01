#include <bits/stdc++.h>

using namespace std;

/**
 * 車停哪裡不重要，全部商店都買完並放東西回車上
 * 總距離為商店街兩端點距離的兩倍
*/

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int maxX = -1, minX = 9999999;
        while (n--) {
            int x;
            cin >> x;
            maxX = max(maxX, x);
            minX = min(minX, x);
        }
        cout << 2 * (maxX - minX) << endl;
    }

    return 0;
}