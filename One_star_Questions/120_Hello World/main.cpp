#include <bits/stdc++.h>

using namespace std;

/**
 * 一個Hello world最少需要復製貼上幾次才可以得到n條Hello world?
 * => 取ceil(log_2(n))
*/

int main() {
    int n, cases = 0;
    while (cin >> n) {
        if (n < 0) break;
        int ans = (int)ceil(log2(n));
        cout << "Case " << ++cases << ": " << ans << endl;
    }

    return 0;
}