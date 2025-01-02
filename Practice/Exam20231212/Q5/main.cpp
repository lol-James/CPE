#include <bits/stdc++.h>

using namespace std;

/**
 * 與一般進制轉換方法相同，但要注意%負數可能結果會是負數，要調整
 * ex.
 * 7 = -3*-2 + 1
 *   = -4*-2 - 1
**/

int main() {
    int cases; cin >> cases;
    for (int Case = 1; Case <= cases; Case++) {
        int n; cin >> n;
        string ans = "";
        while (n) {
            int q = n / -2;
            int r = n % -2;
            if (r < 0) {
                q += 1;
                r += 2;
            }
            ans += to_string(r);
            n = q;
        }
        reverse(ans.begin(), ans.end());
        cout << "Case #" << Case << ": ";
        if (ans == "") cout << 0;
        else cout << ans;
        cout << endl;
    }    

    return 0;
}